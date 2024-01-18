#include <stdio.h>
#include <gmp.h>

int main() {
    mpf_set_default_prec(400000000);

    mpf_t sqrt_pi;
    mpf_init(sqrt_pi);
    mpf_sqrt_ui(sqrt_pi, 3);

    FILE *file = fopen("file.dat", "w");
    if (!file) {
        printf("Fehler beim Öffnen der Datei.\n");
        return 1;
    }

    mpf_out_str(file, 10, 0, sqrt_pi);

    mpf_clear(sqrt_pi);
    fclose(file);

    return 0;
}
