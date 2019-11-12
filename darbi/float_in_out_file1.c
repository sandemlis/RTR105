#include <stdio.h>
#include <stdlib.h>
int main()
{
 double mas1[5][2];
 double mas2[5][3];
 FILE *fptr;
 // use appropriate location if you are using MacOS or Linux
 fptr = fopen("program.txt","w");
 if(fptr == NULL)
 {
  printf("Error!");
  exit(1);
 }
 for(int i=0;i<5;i++)
 {
  for(int j=0;j<2;j++)
  {
   printf("Ievadiet %d. rindas un %d. kolonnas mainīgo: ",i+1,j+1);
   scanf("%lf", &mas1[i][j]);
  }
 }
 for(int i=0;i<5;i++)
 {
  for(int j=0;j<2;j++)
  {
   fprintf(fptr,"%f ", mas1[i][j]);
  }
  fprintf(fptr,"\n");
 }
 fclose(fptr);
 if ((fptr = fopen("program.txt","r")) == NULL){
  printf("Error! opening file");
  // Program exits if the file pointer returns NULL.
  exit(1);
 }
 for(int i=0;i<5;i++)
 {
  for(int j=0;j<2;j++)
   {
    fscanf(fptr,"%lf ",&mas2[i][j]);
   }
  printf("%f %f %f\n",mas2[i][0],mas2[i][1],mas2[i][0]*mas2[i][1]);
 }
fclose(fptr);
return 0;
}

