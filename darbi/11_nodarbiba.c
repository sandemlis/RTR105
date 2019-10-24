#include <stdio.h>

int asc(a,b,c);
int desc(a,b,c);
int ascmod(a,b,c);
int descmod(a,b,c);

void main(){
int a,b,c;
printf ("Ievadiet trīs skaitļus pēc katra nospiežot enter.\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
printf("Jūsu ievadītie skaitļi augošā secībā: %d %d %d\n",asc(a,b,c));
printf("Jūsu ievadītie skaitļi dilstošā secībā: %d %d %d\n",desc(a,b,c));
printf("Jūsu ievadītie skaitļi augošā ar moduli secībā: %d %d %d\n",ascmod(a,b,c));
printf("Jūsu ievadītie skaitļi dilstošā secībā: %d %d %d\n",descmod(a,b,c));
}

int asc(a,b,c){
char i=1;
while (i){
i=0;
if (a<b){a=a+b;b=a-b;a=a-b;i=1;}
if (a<c){a=a+c;c=a-c;a=a-c;i=1;}
if (b<c){b=b+c;c=b-c;b=b-c;i=1;}
}
return (a,b,c);
}

int desc(a,b,c){
char i=1;
while (i){
i=0;
if (a>b){a=a+b;b=a-b;a=a-b;i=1;}
if (a>c){a=a+c;c=a-c;a=a-c;i=1;}
if (b>c){b=b+c;c=b-c;b=b-c;i=1;}
}
return (a,b,c);
}

int descmod(a,b,c){
char i=1;
int a1=0,b1=0,c1=0;
if (a<0){a=a*-1;a1=1;}
if (b<0){b=b*-1;b1=1;}
if (c<0){c=c*-1;c1=1;}
while (i){
i=0;
if (a>b){a=a+b;b=a-b;a=a-b;i=1;}
if (a>c){a=a+c;c=a-c;a=a-c;i=1;}
if (b>c){b=b+c;c=b-c;b=b-c;i=1;}
}
if (a1)a=a*-1;
if (b1)b=b*-1;
if (c1)c=c*-1;
return (a,b,c);
}

int ascmod(a,b,c){
char i=1;
int a1=0,b1=0,c1=0;
if (a<0){a=a*-1;a1=1;}
if (b<0){b=b*-1;b1=1;}
if (c<0){c=c*-1;c1=1;}
while (i){
i=0;
if (a<b){a=a+b;b=a-b;a=a-b;i=1;}
if (a<c){a=a+c;c=a-c;a=a-c;i=1;}
if (b<c){b=b+c;c=b-c;b=b-c;i=1;}
}
if (a1)a=a*-1;
if (b1)b=b*-1;
if (c1)c=c*-1;
return (a,b,c);
}
