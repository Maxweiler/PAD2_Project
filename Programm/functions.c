#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"





void readLSM(){

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


    while(EOF!=fscanf(thefile,"%d;%x;%x;%x;%x;%x;%x;%x;%x;%x",
        &lsm[0],&lsm[1],&lsm[2],&lsm[3],&lsm[4],&lsm[5],&lsm[6],&lsm[7],&lsm[8],&lsm[9])) {
        if(lsm[0]<anfang){
            continue;
        }else if(lsm[0]>ende){
            break;
        }

        if(lsm[0]>=anfang && lsm[0]<=ende){
            for(int i=1;i<=9;i++){
                if(lsm[i] & 80000000){
                    lsm[i]-=0xFFFFFFFF;
                }

            }
            printf("Zeitpunkt: %d Sek\nAccelerometer   [mg/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\nGyroskop      [mdps/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\nMagnetometer[mgauss/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\n\n",
            lsm[0],lsm[1],lsm[2],lsm[3],lsm[4],lsm[5],lsm[6],lsm[7],lsm[8],lsm[9]);

        }
    }
    fclose(thefile);



}


