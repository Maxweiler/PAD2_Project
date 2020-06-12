#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "header.h"


void menu()
{
    int nav=1;
    int auswahl_sensor=0;
    int auswahl_wert=0;
    int auswahl_zeit=0;
    int start=0;
    int ende=0;
    int a = 1;

    printf("Herzlich Willkommen zum PAD-Projekt 'Auswertung von Sensor-Rohdaten' der Gruppe 3 (Brustmann, Schmidt, Weiler) aus BMR2\n\n");

    while(a>0)
    {

        printf("Zur Verfuegung stehen folgende Sensoren:\n\n");
        printf("1) HTS221 --> Temperatur - rel. Luftfeuchtigkeit\n");
        printf("2) LPS25HB --> Temperatur - Druck\n");
        printf("3) LSM9DS1 IMU --> Accelerometer - Gyroskop - Magnetometer\n\n");
        printf("Bitte waehlen Sie einen der zu Verfuegung stehenden Sensoren(1-3):");
        scanf("%d", &auswahl_sensor);

        switch(auswahl_sensor)
        {

        case 1:
            printf("\nSie haben den Sensor HTS221 gewaehlt.\n");
            printf("Damit stehen Ihnen folgende Messgroessen zur Verfuegung:\n");
            printf("1) Temperatur[Grad-C] \n2) rel. Luftfeuchtigkeit[hPa]\n");
            printf("Bitte waehlen Sie einen der zu Verfuegung stehenden Messgroessen(1-2):");
            scanf("%d", &auswahl_wert);

            switch(auswahl_wert)
            {
            case 1:
                while(nav==1)
                {
                    printf("Bitte geben Sie einen Zeitraum fuer die Temperatur ein:\n");
                    printf("Startzeit:");
                    scanf("%d",&start);
                    printf("Endzeit:");
                    scanf("%d",&ende);
                    printf("%d-%d\n", start, ende);             //Funktionsaufruf
                    printf("Anderen Zeitraum waehlen(1) oder zurueck zum Menue(5)?");
                    scanf("%d", &nav);
                    if(nav==5)
                    {
                        break;
                    }
                }
                break;



            case 2:
                while(nav==1)
                {
                    printf("Bitte geben Sie einen Zeitraum fuer die rel. Luftfeuchtigkeit ein:\n");
                    printf("Startzeit:");
                    scanf("%d",&start);
                    printf("Endzeit:");
                    scanf("%d",&ende);
                    printf("%d-%d\n", start, ende);             //Funktionsaufruf
                    printf("Anderen Zeitraum waehlen(1) oder zurueck zum Menue(5)?");
                    scanf("%d", &nav);
                    if(nav==5)
                    {
                        break;
                    }
                }
                break;

            default:
                printf("Ungueltige Auswahl!\n");
                break;
            }
            break;


        case 2:
            printf("Sie haben den Sensor LPS25HB gewaehlt.\n");
            printf("Damit stehen Ihnen folgende Messgroessen zur Verfuegung:\n");
            printf("1) Temperatur[Grad-C] \n2) Druck[%]\n");
            printf("Bitte waehlen Sie einen der zu Verfuegung stehenden Messgroessen(1-2):");
            scanf("%d", &auswahl_wert);

            switch(auswahl_wert)
            {
            case 1:
                while(nav==1)
                {
                    printf("Bitte geben Sie einen Zeitraum fuer die Temperatur ein:\n");
                    printf("Startzeit:");
                    scanf("%d",&start);
                    printf("Endzeit:");
                    scanf("%d",&ende);
                    //printf("%d-%d\n", start, ende);
                    LPS25HB(start,ende);           //Funktionsaufruf
                    printf("Anderen Zeitraum waehlen(1) oder zurueck zum Menue(5)?");
                    scanf("%d", &nav);
                    if(nav==5)
                    {
                        break;
                    }
                }
                break;

            case 2:
                while(nav==1)
                {
                    printf("Bitte geben Sie einen Zeitraum fuer den Druck ein:\n");
                    printf("Startzeit:");
                    scanf("%d",&start);
                    printf("Endzeit:");
                    scanf("%d",&ende);
                    //printf("%d-%d\n", start, ende);
                    LPS25HB(start,ende);            //Funktionsaufruf
                    printf("Anderen Zeitraum waehlen(1) oder zurueck zum Menue(5)?");
                    scanf("%d", &nav);
                    if(nav==5)
                    {
                        break;
                    }
                }
                break;

            default:
                printf("Ungueltige Auswahl!\n");
                break;
            }
            break;

        case 3:
            printf("Sie haben den Sensor LSM9DS1 IMU gewaehlt.\n");
            printf("Damit stehen Ihnen folgende Messgroessen zur Verfuegung:\n");
            printf("1) Accelerometer[mg/LSB] \n2) Gyroskop[mdps/LSB] \n3) Magnetometer[mgauss/LSB]\n");
            printf("Bitte waehlen Sie einen der zu Verfuegung stehenden Messgroessen(1-3):");
            scanf("%d", &auswahl_wert);

            switch(auswahl_wert)
            {
            case 1:
                while(nav==1)
                {
                    printf("Bitte geben Sie einen Zeitraum fuer die Beschleunigung ein:\n");
                    printf("Startzeit:");
                    scanf("%d",&start);
                    printf("Endzeit:");
                    scanf("%d",&ende);

                    readLSM(start,ende,auswahl_wert);

                    printf("Anderen Zeitraum waehlen(1) oder zurueck zum Menue(5)?");
                    scanf("%d", &nav);
                    if(nav==5)
                    {
                        break;
                    }
                }
                break;

            case 2:
                while(nav==1)
                {
                    printf("Bitte geben Sie einen Zeitraum fuer die Neigung ein:\n");
                    printf("Startzeit:");
                    scanf("%d",&start);
                    printf("Endzeit:");
                    scanf("%d",&ende);
                    readLSM(start,ende,auswahl_wert);             //Funktionsaufruf
                    printf("Anderen Zeitraum waehlen(1) oder zurueck zum Menue(5)?");
                    scanf("%d", &nav);
                    if(nav==5)
                    {
                        break;
                    }
                }
                break;

            case 3:
                while(nav==1)
                {
                    printf("Bitte geben Sie einen Zeitraum fuer das Magnetometer ein:\n");
                    printf("Startzeit:");
                    scanf("%d",&start);
                    printf("Endzeit:");
                    scanf("%d",&ende);
                    readLSM(start,ende,auswahl_wert);             //Funktionsaufruf
                    printf("Anderen Zeitraum waehlen(1) oder zurueck zum Menue(5)?");
                    scanf("%d", &nav);
                    if(nav==5)
                    {
                        break;
                    }
                }
                break;

            default:
                printf("Ungueltige Auswahl\n!");
                break;
            }
            break;
        default:
            printf("Ungueltige Auswahl!\n");
            break;

    }


    nav=1;              //Zuruecksetzen der navigationsvariable
    }
}



void readLSM(int start,int ende,int auswahl_wert)
{
    FILE *thefile = fopen("Test_Data_20k_IMU-LSM9DS1.csv", "r");
    if (NULL==thefile)
    {
        printf("Fehler");
        exit(1);
    }


    while(fgets(zeile,100,thefile))
    {
        LSM data;

        char *ptr=NULL;
        ptr=strtok(zeile,";");
        data.timestamp=atoi(ptr);
        if(start<=data.timestamp && data.timestamp<=ende)
        {
            ptr=strtok(NULL,";");

            int counter=0;
            while(ptr!=0)
            {
                switch(counter)
                {
                case 0:
                    data.accx=strtoll(ptr,NULL,16);
                    data.accx=invertieren(data.accx);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 1:
                    data.accy=strtoll(ptr,NULL,16);
                    invertieren(data.accy);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 2:
                    data.accz=strtoll(ptr,NULL,16);
                    invertieren(data.accz);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 3:
                    data.gyrox=strtoll(ptr,NULL,16);
                    invertieren(data.gyrox);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 4:
                    data.gyroy=strtoll(ptr,NULL,16);
                    invertieren(data.gyroy);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 5:
                    data.gyroz=strtoll(ptr,NULL,16);
                    invertieren(data.gyroz);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 6:
                    data.magx=strtoll(ptr,NULL,16);
                    invertieren(data.magx);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 7:
                    data.magy=strtoll(ptr,NULL,16);
                    invertieren(data.magy);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                case 8:
                    data.magz=strtoll(ptr,NULL,16);
                    invertieren(data.magz);
                    ptr=strtok(NULL,";");
                    counter++;
                    break;
                }



            }
            printf("\n");

            switch(auswahl_wert)
            {
            case 1:
                printf("Zeitpunkt: %d Sek\nAccelerometer[mg/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|",data.timestamp,data.accx,data.accy,data.accz);
                break;
            case 2:
                printf("Zeitpunkt: %d Sek\nGyroskop[mdps/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|",data.timestamp,data.gyrox,data.gyroy,data.gyroz);
                break;
            case 3:
                printf("Zeitpunkt: %d Sek\nMagnetometer[mgauss/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|",data.timestamp,data.magx,data.magy,data.magz);
                break;
            }

            printf("\n");
            /* Gesamte Ausgabe falls n�tig
            printf("Zeitpunkt: %d Sek\nAccelerometer   [mg/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\nGyroskop      [mdps/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\nMagnetometer[mgauss/LSB]:|%5d X-Achse| |%5d Y-Achse| %5d Z-Achse|\n\n",
             data.timestamp,data.accx,data.accy,data.accz,data.gyrox,data.gyroy,data.gyroz,data.magx,data.magy,data.magz);*/






        }else if(data.timestamp>ende || data.timestamp>start){
            printf("Ungueltiger Wertebereich\n");
            break;
        }
    }

    fclose(thefile);
}





long long invertieren(long long wert)
{
    if((wert>31) & 1)
    {
        wert-=0xFFFFFFFF;
    }
    return wert;

}

// LPS25HB-------------------------------------------------------------------

void hex_time(time_t rawtime)
{
    struct tm  ts;
    char buf[80];
    // Format time, "ddd yyyy-mm-dd hh:mm:ss zzz"
    ts = *localtime(&rawtime);
    strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S", &ts);
    printf("%s\n", buf);
}

void LPS25HB_pressure(int PRESS_OUT_XL, int PRESS_OUT_L, int PRESS_OUT_H)
{
    float num = (PRESS_OUT_H << 16) + (PRESS_OUT_L << 8) + PRESS_OUT_XL;
    printf("Druck: %.4f hPa\n", num/4096);
}

void LPS25HB_temp(int TEMP_OUT_L, int TEMP_OUT_H)
{
    int num = (TEMP_OUT_H << 8) + TEMP_OUT_L;
    if ((num >> 15) & 1)
    {
        num -= 0XFFFF;
        printf("Temperatur: %.4f deg. Celcius\n",(float)num/480 +42.5);
    }
    else
    {
        printf("Temperatur: %.4f deg. Celcius\n",(float)num/480 +42.5);
    }
}

void LPS25HB(int start, int ende)// Temperatur und Drucksensor
{
    char filename[100] = "Test_Data_10k_LPS25.csv";
    FILE *file = fopen(filename, "r");
    if(file == NULL)
    {
	    printf("Datei konnte NICHT geoeffnet werden.\n");
        exit(-1);
    }
    char line[100];

    fgets(line, sizeof(line), file);
    printf("Zeile: %s", line);
    char delimiter[] = ";";
    char *token = strtok(line, delimiter);
    int counter = 0;
    int PRESS_OUT_[3];
    int TEMP_OUT_[2];

    while(token != NULL)
    {
        switch (counter)
        {
        case 0:
            hex_time((time_t)token);
            break;
        case 1:
            TEMP_OUT_[0] = (int)strtol(token, NULL, 16);
            break;
        case 2:
            TEMP_OUT_[1] = (int)strtol(token, NULL, 16);
            LPS25HB_temp(TEMP_OUT_[0], TEMP_OUT_[1]);
            break;
        case 3:
            PRESS_OUT_[0] = (int)strtol(token, NULL, 16);
            break;
        case 4:
            PRESS_OUT_[1] = (int)strtol(token, NULL, 16);
            break;
        case 5:
            PRESS_OUT_[2] = (int)strtol(token, NULL, 16);
            LPS25HB_pressure(PRESS_OUT_[0], PRESS_OUT_[1], PRESS_OUT_[2]);
            break;
        default:
            break;
        }
        token = strtok(NULL, delimiter);
        counter++;
    }
}
//------------------------------------------------------------------------------------------------------


