#include<stdio.h>
#include<math.h>

int main(){
float a, b, x, c, delta_x, funkca, funkcb, funkcx;
int reizes=0,precizitate;

 printf("Cien. lietotāj, jums būs jānorāda daži parametri un mēs aprēķināsim funkcijas Cos^2(x/2) sakni jūsu norādītajā intervālā.\n");
 printf("Ievadiet intervāla sākuma punktu: \n");
 scanf("%f",&a);
 printf("Ievadiet intervāla beigu puntu: \n");
 scanf("%f",&b);
 printf("Pirms ievadiet vērtību ņemiet vērā ka dotās funkcijas vērtības ir no 0 līdz 1 !!!!\n");
 printf("Ievadiet funkcijas vērtību kuru vēlaties atrast: \n");
 scanf("%f",&c);
 printf("Ievadiet vēlamo funkcijas saknes precizitāti (cipari aiz komata): \n");
 scanf("%d",&precizitate);
 printf("\n");

delta_x=pow(10,-precizitate);

if(a>b){
b=b+a;
a=b-a;
b=b-a;
 printf("Deimžēl jūsu norādītais sākuma punkts bija lielāks par beigu punktu, tāpēc apmainījām tos vietām.\n");
}

funkca=cos(a/2)*cos(a/2)-c;
funkcb=cos(b/2)*cos(b/2)-c;
if (funkca*funkcb>0){
 printf("intervālā [%f;%f] cos^2(x) funkcijai ",a,b);
 printf("sakņu nav (vai tajā ir pāra skaits sakņu)\n");
 return 1;
}
// printf("\tcos^2(%f/2)=%f\t\t\t\t",a,(cos(a/2)*cos(a/2)));
// printf("cos^2(%f/2)=%f\n",b,(cos(b/2)*cos(b/2)));


while((b-a)>delta_x){
 x=(a+b)/2.;
 if(funkca*(cos(x/2)*cos(x/2)-c)>0)
  a=x;
 else
  b=x;

 reizes++;
// printf("%2d. iterācija:\tcos^2(%f/2)=%f\t",reizes,a,(cos(a/2)*cos(a/2)));
// printf("\tcos^2(%f/2)=%f\t",x,(cos(x/2)*cos(x/2)));
// printf("\tcos^2(%f/2)=%f\n",b,(cos(b/2)*cos(b/2)));
 }

printf("Sakne atrodas intervālā [%.10f;%.10f] ar skaitļa pecizitāti aiz komata %.10f\n",a,b,delta_x);
printf("Tātad aptuvenā x vērtība ir %.10f\n",((a+b)/2));
printf("Meklējot sakni intervāls tika sašaurināts %d reizes\n",reizes);

return 0;
}
