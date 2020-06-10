#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void readLSM(LSM test){
    int anfang;
    int ende;
    printf("Sensordaten des  LSM9DS1 Sensors:\n\n");
    printf("Bitte waehlen Sie eine Zeitspanne fuer die Sensordaten!\n\n");
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


        if(test.tstamp>=anfang&& test.tstamp<=ende){

        if(test.accx & 2147483648){

             test.accx=test.accx-4294967295;
}
            printf("Zeitpunkt: %d Sek\nAccelerometer   [mg/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\nGyroskop      [mdps/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\nMagnetometer[mgauss/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\n\n", test.tstamp,test.accx,test.accy,test.accz,test.gyrox,test.gyroy,test.gyroz,test.magx,test.magy,test.magz);

        }
    }
    fclose(thefile);



}


