    #include <stdio.h>
    #include <stdlib.h>
    #define N 100
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
       printf ("Ievadiet teikumu līdz 100 simboliem. \n");
       scanf("%[^\n]",str1);
       fprintf(fptr,"%s\n",str1);
       fclose(fptr);
       return 0;
    }
