#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void readLSM(LSM test){
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
    while(EOF!=fscanf(thefile,"%d;%x;%x;%x;%x;%x;%x;%x;%x;%x",&test.tstamp,&test.accx,&test.accy,&test.accz,&test.gyrox,&test.gyroy,&test.gyroz,&test.magx,&test.magy,&test.magz)) {


        if(zahl1>=anfang&& zahl1<=ende){



            //printf("Zeitpunkt: %d Sek\nAccelerometer: |%8d X-Achse| |%8d Y-Achse| %8d Z-Achse|\nGyroskop:      |%8d X-Achse| |%8d Y-Achse| %8d Z-Achse|\nMagnetometer:  |%8d X-Achse| |%8d Y-Achse| %8d Z-Achse|\n\n", );
        }

    }
    fclose(thefile);



}


