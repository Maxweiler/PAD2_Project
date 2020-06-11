#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


void menu();
void hex_time(time_t rawtime);
void LPS25HB(int start, int ende);
void LPS25HB_pressure(int PRESS_OUT_XL, int PRESS_OUT_L, int PRESS_OUT_H);
void LPS25HB_temp(int TEMP_OUT_L, int TEMP_OUT_H);

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
