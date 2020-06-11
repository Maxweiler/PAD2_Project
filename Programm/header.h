#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


char zeile[100];
typedef struct{
    int timestamp;
    long long accx;
    long long accy;
    long long accz;
    long long gyrox;
    long long gyroy;
    long long gyroz;
    long long magx;
    long long magy;
    long long magz;

}LSM;

void readLSM();

long long invertieren(long long wert);

#endif // HEADER_H_INCLUDED
