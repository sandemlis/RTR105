#include<stdio.h>
#include<math.h>

int main(){
float a=0.0001, b=1.5*M_PI, x, delta_x=1.e-3, funkca, funkcb, funkcx;
int reizes=0;
funkca = sin(a);
funkcb=sin(b);
if (funkca*funkcb>0){
 printf("intervālā [%.2f;%.2f] sin(x) funkcijai ",a,b);
 printf("sakņu nav (vai tajā ir pāra skaits sakņu\n)");
 return 1;
}
 printf("\tsin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
 printf("sin(%7.3f)=%7.3f\n",b,sin(b));


while((b-a)>delta_x){
 x=(a+b)/2.;
 if(funkca*sin(x)>0)
  a=x;
 else
  b=x;

 reizes++;
 printf("%2d. iterācija:\tsin(%7.3f)=%7.3f\t",reizes,a,sin(a));
 printf("\tsin(%7.3f)=%7.3f\t",x,sin(x));
 printf("\tsin(%7.3f)=%7.3f\n",b,sin(b));
 }
printf("Sakne atrodas pie x=%.3f ,jo ...\n",x);
printf("Meklējot sakni intervāls tika sašaurināts %d reizes\n",reizes);
return 0;
}
