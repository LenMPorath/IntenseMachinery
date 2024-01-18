# Das Problem
Oracle sabotiert meine Vorhaben mit meinem Server, indem sie regelmäßig meinen Server herunterfahren, da dieser "inaktiv" ist. Ja sorry dass ich nicht 24/7 irgendwas darauf mache sondern wie jeder andere auch den nur ab und zu verwendet. Ich sehe es auch nicht ein den Server regelmäßig neu zu starten.

# Die Lösung
Es wurde ein Script entworfen welches sehr viele Nachkommastellen von der Wurzel aus Pi Berechnet. Das Skript wird per Cronjob ausgeführt:
Mit `crontab -e` kommt man in die Cronjobübersicht. Einfach unter dem riesigen Kommentar folgendes schreiben: `0 4 * * * /pfad/zum/deinem/bashskript/dailyIntenseMachinery.sh` (Der Pfad muss angepasst werden).
