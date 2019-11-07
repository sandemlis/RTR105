#include <stdio.h>
#include <stdlib.h>
#define R 5
#define K 2
int main()
{
 float mas1[R][K];
 float mas2[R][(K+1)];
 FILE *fptr;
 // use appropriate location if you are using MacOS or Linux
 fptr = fopen("program.txt","w");
 if(fptr == NULL)
 {
  printf("Error!");
  exit(1);
 }
 for(int j=0;j<5;j++)
 {
  for(int i=0;i<2;i++)
  {
   printf("Ievadiet %d. rindas un %d. kolonnas mainīgo: ",i,j);
   scanf("%f", mas1[i][j]);
  }
 }
 for(int j=0;j<5;j++)
 {
  for(int i=0;i<2;i++)
  {
   fprintf(fptr,"%f ",mas1[i][j]);
  }
 }
 fclose(fptr);
/*
       if ((fptr = fopen("program.txt","r")) == NULL){
           printf("Error! opening file");
           // Program exits if the file pointer returns NULL.
           exit(1);
       }

       fscanf(fptr,"%[^\n]",str1);
       printf("%s\n",str1);
       fclose(fptr);*/
 return 0;
}

