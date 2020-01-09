#include<stdio.h>
#include<math.h>

void main(){
 float a,b,x,delta_x;
 int precizitate;

 printf("Cien. lietotāj, jums būs jānorāda daži parametri un mēs aprēķināsim funkcijas Cos^2(x/2) vērtības jūsu norādītajā intervālā.\n");
 printf("Ievadiet intervāla sākuma punktu: \n");
 scanf("%f",&a);
 printf("Ievadiet intervāla beigu puntu: \n");
 scanf("%f",&b);
 printf("Ievadiet precizitati, jeb skaitli cik ciparus aiz komata solim ņemsim vērā: \n");
 scanf("%d",&precizitate);

 if(a>b){
  b=b+a;
  a=b-a;
  b=b-a;
  printf("Deimžēl jūsu norādītais sākuma punkts bija lielāks par beigu punktu, tāpēc apmainījām tos vietām.\n");
 }
 
 delta_x=pow(10,-precizitate);

 printf("\tx\t\tcos^2(x/2)\t\tcos^2\'(x/2)\t-sin(x)/2\tcos^2\'\'(x/2)\t-cos(x)/2\n");
 x=a;
 while(x<b){
 printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,cos(x/2)*cos(x/2),(cos((x+delta_x)/2)*cos((x+delta_x)/2)-cos(x/2)*cos(x/2))/delta_x,(-sin(x)/2),((-sin(x+delta_x)/2)-(-sin(x)/2))/delta_x,(-cos(x)/2));
 x+=delta_x;
 }
}
