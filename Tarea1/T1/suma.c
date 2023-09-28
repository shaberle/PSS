#include <stdio.h>
#include "suma.h"
Bcd sumaBcd(Bcd x, Bcd y){
 Bcd m = 15; //mascara
 Bcd d = 0; 
 Bcd e = 0; //acarreo
 for(int i = 0; i<sizeof(Bcd)*8; i=i+4){
  Bcd a = ((x>>i) & m)+e;
  Bcd b = ((y>>i) & m);
  Bcd c = (a + b);
  e = 0;
  if(c>9){
   c = c-10;
   e = 1;
  }
  d = (c<<(i)) + d;
  if(i == 60 && e == 1){
   d = 0xffffffffffffffff;
  }
 }
 return d;
}