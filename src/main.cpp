#include <Arduino.h>
int tinh_gio_1(int a){
int tinh_gio=a/3600;
return tinh_gio;
}
int tinh_phut_2(int b){
  int tinh_phut=(b-7200)/60;
return tinh_phut;
}

int gio;
int phut;
void setup(){
  Serial.begin(9600);
}
void loop(){
gio=tinh_gio_1(9799);
Serial.println(gio);
phut=tinh_phut_2(9799);
Serial.println(phut);
delay(1000);
}
