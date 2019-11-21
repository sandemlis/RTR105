#include<stdio.h>
#include<math.h>

void main()
{
 float a,x,delta_x,b,y;
 a=0;
 b=2*M_PI;

 FILE *fptr;
 fptr = fopen("sin_data.dat","w");
 if(fptr == NULL)
 {
  printf("Error!");
  exit(1);
 }

 x=a;
 delta_x = 0.1;
 fprintf(fptr,"\tx\ty\n");
 while(x<b){
  fprintf(fptr,"%10.1f%10.1f\n",x,sin(x));
  x+=delta_x;
 }
}
