#include<stdio.h>
#include<string.h>

void main (){
char str1[99];
char str2[99];
printf ("Ievadiet kādu teikumu: \n");
scanf("%[^\n]%*c",str1);
printf("Ievadītais teikums ir: \n%s\n",str1);

strcpy(str2, str1);
printf("Nokopētais teikums ir: \n%s\n",str2);

}
