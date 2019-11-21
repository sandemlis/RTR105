//S0,S1,S2,S3 -> S
//a0,a1,a2,a3 -> a
#include<stdio.h>
#include<math.h>

void main(){
 double x=2.05,y,a,S;

 y=sin(x);

 printf("y=sin(%.2f)=\t%.2f\n",x,y);

 a=pow(-1,0)*pow(x,2*0+1)/(1.);
 S=a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,S);

 a=a*(-1)*x*x/(2*3);
 S+=a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,S);

 a=a*(-1)*x*x/(4*5);
 S+=a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,S);

 a=a*(-1)*x*x/(6*7);
 S+=a;
 printf("%.2f\t%.2f\t%.2f\n",x,a,S);

}
