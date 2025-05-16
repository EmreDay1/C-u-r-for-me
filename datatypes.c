#include <stdio.h>
#include <stdbool.h> // for booleans

int main(){

  char a = 'C'; //%c
  char b[] = "Bro"; // %s
  char f = 120; // can store int from -128 to 127 and when reference with d it is num and when with c it is d
  unsigned char g = 245; //from 0 to +255 num range d it is num c it is d

  //4 bytes 6-7 digits
  float c = 3.141582; //%f

  // 8 bits 15-16 diigts
  double d = 3.141111111111; //%lf

  bool test = true; // %d
  

  int j = 21231323;// %d large range
  
  unsigned int k; //%u
  
  short int h = 205; //-32768 to 32767 2 bytes can just declare with short don't have to int short %d
  
  unsigned short int hk = 205; //0 to 65535 2 bytes %d

  //unsigned means no negative

  // really large numbers are represented by long long int
  long long int l = 123456783456; //lld

  printf("%0.4f",c);//0.etwas etwas = amount of decimals displayed


}
