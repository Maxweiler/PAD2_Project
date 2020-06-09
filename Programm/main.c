#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"



int main()
{


int anfang;
int ende;
int zahl1 = 0;
int zahl2 = 0;
int zahl3 = 0;
int zahl4 = 0;
int zahl5 = 0;
int zahl6 = 0;
int zahl7 = 0;
int zahl8 = 0;
int zahl9 = 0;
int zahl10 = 0;


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



while (EOF!=fscanf(thefile,"%d;%x;%x;%x;%x;%x;%x;%x;%x;%x", &zahl1, &zahl2, &zahl3, &zahl4, &zahl5, &zahl6, &zahl7, &zahl8, &zahl9, &zahl10)) {


if(zahl1>=anfang&& zahl1<=ende){

        //if(zahl2 & 0x80000000){

printf("Zeitpunkt: %d Sek\nAccelerometer: |%8d X-Achse| |%8d Y-Achse| %8d Z-Achse|\nGyroskop:      |%8d X-Achse| |%8d Y-Achse| %8d Z-Achse|\nMagnetometer:  |%8d X-Achse| |%8d Y-Achse| %8d Z-Achse|\n\n", zahl1, zahl2-1, zahl3-1, zahl4-1, zahl5-1, zahl6-1, zahl7-1, zahl8-1, zahl9-1, zahl10-1 );
}
//}
}
fclose(thefile);



}
