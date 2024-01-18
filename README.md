# Das Problem
Oracle sabotiert meine Vorhaben mit meinem Server, indem sie regelmäßig meinen Server herunterfahren, da dieser "inaktiv" ist. Ja sorry dass ich nicht 24/7 irgendwas darauf mache sondern wie jeder andere auch den nur ab und zu verwendet. Ich sehe es auch nicht ein den Server regelmäßig neu zu starten.

# Die Lösung
Es wurde ein Script entworfen welches sehr viele Nachkommastellen von der Wurzel aus Pi Berechnet. Das Skript wird per Cronjob ausgeführt.
### 1 Skript ausführbar machen
Das Skript muss ausführbar gemacht werden mit \
`chmod +x /pfad/zum/deinem/bashskript/dailyIntenseMachinery.sh`
### 2 Crontab öffnen
Mit `crontab -e` kommt man in die Cronjobübersicht. 
### 3 Cronjob hinzufügen
Einfach unter dem riesigen Kommentar folgendes schreiben: \
`0 4 * * * /pfad/zum/deinem/bashskript/dailyIntenseMachinery.sh` \
(Der Pfad muss angepasst werden).

Die `0 4 * * *` steht für "4 Uhr morgens jeden Tag". Wenn das Skript wann anders ausgeführt werden soll passe dementsprechend die Zeiten an.

____________________
### 4 C-Skript anpassen
Falls du deinen Server nicht so wrecken möchtest, kannst du auch das Skript anpassen. \

Nach Anpassung des Skripts einfach \
`cc -ansi -o pipipi.bin pipipi.c -lgmp` \
und dann passts 👍🏻
