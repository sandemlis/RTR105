#include <stdio.h>
#include <math.h>
#define A 100
void main(){
 double x=34,y,a=1,S=0.5;
 int k=0;

while((x>33.999)||(x<(-33.999))){
 printf("Lūdzu ievadiet x vērtību (robežās no -33 līdz 33): ");
 scanf("%lf",&x);}

 y=cos(x/2)*cos(x/2);
 printf("y=cos^2(%.2f/2)=%.2f\n",x,y);

 a=pow(-1,k)*pow(x,(2*k));
 S=S+a/2;
// printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 while(k<A){
  k++;
  a=a*(-1)*pow(x,2)/((2*k)*(2*k-1));
  S=S+a/2;
//  printf("%.2f\t%8.2f\t%8.2f\n",x,a/2,S);
  if((k==(A-1))||(k==A))printf("%d. a = %.350lf\n",k,a/2);
  if(k==A)printf("Funkcijas rezultāts aprēķinot ar Teilora rindu\nCos^2(%.2f/2) = %8.2f\n",x,S);
 }
}

