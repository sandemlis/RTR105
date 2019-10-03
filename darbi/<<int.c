#include<stdio.h>

void main()
{
/*
char a=10;
printf("Operācija <<: %d<<1 rezultāts %d\n",a,a<<1);//sagaidam skaitli 20

char b;
printf("b mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

b=a<<2;//divas operācijas =(piešķiršana) un <<(bitu bīdīšana pa kreisi)
printf("Operācija <<: %d<<%d rezultāts %d\n",a,2,b);//sagaidam skaitli 40

char c;
printf("papētīsim << operāciju\n---------------------------\n");
printf("Cienījamais lietotāj, lūdzu ievadi operācijas 1. operandu: ");
scanf("%d",&a);
printf("Cienījamais lietotāj, lūdzu ievadi operācijas 2. operandu: ");
scanf("%d",&c);
b=a<<c;
printf("---------------------------\nSkaties kas ir sanācis: %d\n",b);
*/

int a=10;
printf("Operācija <<: %d<<1 rezultāts %d\n",a,a<<1);//sagaidam skaitli 20

int b;
printf("b mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

b=a<<2;//divas operācijas =(piešķiršana) un <<(bitu bīdīšana pa kreisi)
printf("Operācija <<: %d<<%d rezultāts %d\n",a,2,b);//sagaidam skaitli 40

int c;
printf("papētīsim << operāciju\n---------------------------\n");
printf("Cienījamais lietotāj, lūdzu ievadi operācijas 1. operandu: ");
scanf("%d",&a);
printf("Cienījamais lietotāj, lūdzu ievadi operācijas 2. operandu: ");
scanf("%d",&c);
b=a<<c;
printf("---------------------------\nSkaties kas ir sanācis: %d\n",b);
}
