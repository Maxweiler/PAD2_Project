#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"



int main()
{
    readLSM();






    int nav=1;
   int auswahl_sensor=0;
   int auswahl_wert=0;
   int auswahl_zeit=0;
   int start=0;
   int ende=0;
   int a = 1;

    printf("Herzlich Willkommen zum PAD-Projekt 'Auswertung von Sensor-Rohdaten' der Gruppe 3 (Brustmann, Schmidt, Weiler) aus BMR2\n\n");

    while(a>0){

    printf("Zur Verfuegung stehen folgende Sensoren:\n\n");
    printf("1) HTS221 --> Temperatur - rel. Luftfeuchtigkeit\n");
    printf("2) LPS25HB --> Temperatur - Druck\n");
    printf("3) LSM9DS1 IMU --> Accelerometer - Gyroskop - Magnetometer\n\n");
    printf("Bitte waehlen Sie einen der zu Verfuegung stehenden Sensoren(1-3):");
    scanf("%d", &auswahl_sensor);

    switch(auswahl_sensor){

                    case 1: printf("\nSie haben den Sensor HTS221 gewaehlt.\n");
                            printf("Damit stehen Ihnen folgende Messgroessen zur Verfuegung:\n");
                            printf("1) Temperatur[Grad-C] \n2) rel. Luftfeuchtigkeit[hPa]\n");
                            printf("Bitte waehlen Sie einen der zu Verfuegung stehenden Messgroessen(1-2):");
                            scanf("%d", &auswahl_wert);

                            switch(auswahl_wert){
                                   case 1:
                                            while(nav==1){
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
                                            }break;



                                    case 2:
                                            while(nav==1){
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
                                            }break;

                                    default: printf("Ungueltige Auswahl!\n");break;
                            }break;


                    case 2: printf("Sie haben den Sensor LPS25HB gewaehlt.\n");
                            printf("Damit stehen Ihnen folgende Messgroessen zur Verfuegung:\n");
                            printf("1) Temperatur[Grad-C] \n2) Druck[%]\n");
                            printf("Bitte waehlen Sie einen der zu Verfuegung stehenden Messgroessen(1-2):");
                            scanf("%d", &auswahl_wert);

                            switch(auswahl_wert){
                                   case 1:  while(nav==1){
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
                                            }break;

                                    case 2:
                                            while(nav==1){
                                            printf("Bitte geben Sie einen Zeitraum fuer den Druck ein:\n");
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
                                            }break;

                                    default: printf("Ungueltige Auswahl!\n");break;}break;

                    case 3: printf("Sie haben den Sensor LSM9DS1 IMU gewaehlt.\n");
                            printf("Damit stehen Ihnen folgende Messgroessen zur Verfuegung:\n");
                            printf("1) Accelerometer[mg/LSB] \n2) Gyroskop[mdps/LSB] \n3) Magnetometer[mgauss/LSB]\n");
                            printf("Bitte waehlen Sie einen der zu Verfuegung stehenden Messgroessen(1-3):");
                            scanf("%d", &auswahl_wert);

                            switch(auswahl_wert){
                                   case 1:
                                            while(nav==1){
                                            printf("Bitte geben Sie einen Zeitraum fuer die Beschleunigung ein:\n");
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
                                            }break;

                                    case 2:
                                            while(nav==1){
                                            printf("Bitte geben Sie einen Zeitraum fuer die Neigung ein:\n");
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
                                            }break;

                                    case 3:
                                            while(nav==1){
                                            printf("Bitte geben Sie einen Zeitraum fuer das Magnetometer ein:\n");
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
                                            }break;

                                    default: printf("Ungueltige Auswahl\n!");break;}break;






                    default: printf("Ungueltige Auswahl!\n");break;

                    }


    }

    return 0;

}











