#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void readLSM(){
    int anfang;
    int ende;
    printf("Sensordaten des  LSM9DS1 Sensors:\n\n");
    printf("Bitte waehlen Sie eine Zeitspanne fuer die Sensordaten!\n");
    printf("Anfang:");
    scanf("%d", &anfang);
    printf("Ende:");
    scanf("%d", &ende);

    FILE *thefile = fopen("Test_Data_20k_IMU-LSM9DS1.csv", "r");
    if (NULL==thefile)
    {
        printf("Fehler");
        exit(1);
    }
    while(EOF!=fscanf(thefile,"%d;%x;%x;%x;%x;%x;%x;%x;%x;%x",&LSM.tstamp,&LSM.accx,&LSM.accy,&LSM.accz,&LSM.gyrox,&LSM.gyroy,&LSM.gyroz,&LSM.magx,&LSM.magy,&LSM.magz)) {


        if(zahl1>=anfang&& zahl1<=ende){



            //printf("Zeitpunkt: %d Sek\nAccelerometer: |%8d X-Achse| |%8d Y-Achse| %8d Z-Achse|\nGyroskop:      |%8d X-Achse| |%8d Y-Achse| %8d Z-Achse|\nMagnetometer:  |%8d X-Achse| |%8d Y-Achse| %8d Z-Achse|\n\n", );
        }

    }
    fclose(thefile);



}


