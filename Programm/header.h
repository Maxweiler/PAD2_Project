#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef struct{
    int tstamp;
    int accx;
    int accy;
    int accz;
    int gyrox;
    int gyroy;
    int gyroz;
    int magx;
    int magy;
    int magz;
}LSM;

LSM readLSM();

#endif // HEADER_H_INCLUDED
