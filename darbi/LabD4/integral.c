#include <stdio.h>
#include <math.h>

int main(){
 double a,b,x,delta_x,summa=0,k;
 int precizitate,n=0;
 printf("Ievadiet intervāla sākumpunktu: ");
 scanf("%lf",&a);
 printf("Ievadiet intervāla beigu punktu: ");
 scanf("%lf",&b);
 printf("Ievadiet intervāla precizitāti (ciparu skaitu aiz komata): ");
 scanf("%d",&precizitate);
 delta_x=pow(10,-precizitate);
 if(a>b){
  b=b+a;
  a=b-a;
  b=b-a;
  printf("Deimžēl jūsu norādītais sākuma punkts bija lielāks par beigu punktu, tāpēc apmainījām tos vietām.\n");
 }
 x=a;
 while(x<=b){
  summa=summa+(cos(x/2)*cos(x/2)*delta_x);
  x+=delta_x;
 }
 printf("Aprēķinātais rezultāts izmantojot taisnstūra metodi: %f\n",summa);
 summa=0;
 x=a;
 while(x<=b){
 summa=summa+((cos(x/2)*cos(x/2)+cos((x+delta_x)/2)*cos((x+delta_x)/2))*delta_x/2);
 x+=delta_x;
 }
 printf("Aprēķinātais rezultāts izmantojot trapeces metodi: %f\n",summa);
 summa=0;
 x=a;
 while(x<=b){
  n++;
  if(n==1)k=cos(x/2)*cos(x/2);
  else if((x+delta_x)>b)k=cos(x/2)*cos(x/2);
  else if(n%2==0)k=4*cos(x/2)*cos(x/2);
  else if(n%2==1)k=2*cos(x/2)*cos(x/2);
  summa=summa+k;
  x+=delta_x;
 }
 summa=summa*delta_x/3;
 printf("Aprēķinātais rezultāts izmantojot Simpsona metodi: %f\n",summa);
}

