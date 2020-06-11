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


    while(fgets(zeile,100,thefile)){
        LSM data;

        char *ptr=NULL;
        long long test=0;
        ptr=strtok(zeile,";");

        int counter=0;
        while(ptr!=0){
            switch(counter){
                case 0:
                    data.timestamp=atoi(ptr);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 1:
                    data.accx=strtoll(ptr,NULL,16);
                    invertieren(data.accx);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 2:
                    data.accy=strtoll(ptr,NULL,16);
                    invertieren(data.accy);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 3:
                    data.accz=strtoll(ptr,NULL,16);
                    invertieren(data.accz);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 4:
                    data.gyrox=strtoll(ptr,NULL,16);
                    invertieren(data.gyrox);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 5:
                    data.gyroy=strtoll(ptr,NULL,16);
                    invertieren(data.gyroy);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 6:
                    data.gyroz=strtoll(ptr,NULL,16);
                    invertieren(data.gyroz);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 7:
                    data.magx=strtoll(ptr,NULL,16);
                    invertieren(data.magx);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 8:
                    data.magy=strtoll(ptr,NULL,16);
                    invertieren(data.magy);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 9:
                    data.magz=strtoll(ptr,NULL,16);
                    invertieren(data.magz);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
            }



        }
        printf("\n");
        printf("Zeitpunkt: %d Sek\nAccelerometer   [mg/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\nGyroskop      [mdps/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\nMagnetometer[mgauss/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\n\n",
            data.timestamp,data.accx,data.accy,data.accz,data.gyrox,data.gyroy,data.gyroz,data.magx,data.magy,data.magz);







    }
    fclose(thefile);



}


long long invertieren(long long wert){
    if(wert & 80000000){
       wert-=0xFFFFFFFF;
    }

    return wert;
}




