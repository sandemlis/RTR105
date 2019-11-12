#include <stdio.h>
#include <stdlib.h>
#define N 250
#define M 16
int vsk=0, gsk=0, chk;
char str3[]="END_OF_STATEMENT";
int main()
{
   char str1[N];
   FILE *fptr;
   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("program.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf ("Ievadiet teikumu līdz 250 simboliem. \n");
   scanf("%[^\n]",str1);
   fprintf(fptr,"%s\n",str1);
   fprintf(fptr,"END_OF_STATEMENT");
   fclose(fptr);

   if ((fptr = fopen("program.txt","r")) == NULL){
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   for(;;){
   char str2[20];
   fscanf(fptr," %s",str2);
   chk = 0;
   for(int i=0;i<M;i++)if(str2[i]==str3[i])chk++;
   if(chk==M)break;
   if(str2[0]!='\0'){
    vsk++;
    printf("Ievadītais vārds bija: %s\n",str2);
    if(str2[5]!='\0')gsk++;
    }
   else if(str2[1]!='\0'){
    vsk++;
    printf("Ievadītais vārds bija: %s\n",str2);
    if(str2[6]!='\0')gsk++;
   }
   }
   fclose(fptr);
   printf("Vārdu skaits teikumā ir %d un %d no tiem ir garāki par 5 simboliem.\n",vsk,gsk);
   return 0;
}
