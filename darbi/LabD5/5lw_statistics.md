<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Labaratorijas darbs Nr.3. - Derivative - atskaite

## Teorija

### Kods
<details>
  <summary> Programmas kods </summary>

    #include<stdio.h>
    #include<string.h>
  
    void main(){
     char string[51];
     char min[2];
     char max[2];
     char i;
     int summa=0;
     char skaits=0;

     printf("Lūdzu ievadiet simbolu rindu.");
     scanf("%s", &string);
     min[0] = string[0];
     min[1] = 0;
     max[0] = string[0];
     max[1] = 0;
     for(i=0;string[i]!='\0';i++){
      summa=summa+string[i];
      printf("%d. simbola (\"%c\") ASCII vērtība ir %d\n",i+1,string[i],string[i]);
      if(string[i]<min[0]){min[0]=string[i];min[1]=i;}
      if(string[i]>max[0]){max[0]=string[i];max[1]=i;}
     }
     printf("\nIevadītajā rindā ir %d simbolu gara.\n",i);
     printf("Mazākā vērtība no šiem simboliem ir %d. simbolam \"%c\", kura vētība ir %d\n",min[1]+1,min[0],min[0]);
     printf("Lielākā vērtība no šiem simboliem ir %d. simbolam \"%c\", kura vērtība ir %d\n",max[1]+1,max[0],max[0]);
     printf("Šo simbolu vidējā vērtība ir %d, kurai atbilst simbols \"%c\"\n",summa/i,summa/i);
     for(int j=0; j<i-1; j++){
      int Imin = j;
      for(int k=j+1; k<i; k++){
       if( string[k] < string[Imin])Imin = k;
      }
      int temp = string[Imin];
      string[Imin] = string[j];
      string[j] = temp;
     }
     printf("Simbolu rindas mediāna ir %d. simbols \"%c\", kuras vērtība ir %d\n",(i+1)/2,string[i/2],string[i/2]);
     char n=0,m=0;
     char mod[i][2];
     mod[0][0]=string[0];
     for(char l=0;l<=i;l++){
      if(string[l]==mod[m][0])n++;
      else {mod[m][1]=n;mod[m+1][0]=string[l];n=1;m++;}
     }
     char biezums=0;
     for(n=0;n<m;n++){
      if(biezums<mod[n][1])biezums=mod[n][1];
     }
     for(n=0;n<m;n++){
      if(biezums==mod[n][1])printf("Simbolu rindas moda ir simbols \"%c\", tā vērtība ir %d un tas atkārtojās %d reižu.\n",mod[n][0],mod[n][0],biezums);
     }
     for(n=0;n<i;n++){
      for(m=0;m<2;m++){
       if(m==0)printf("%c\t",string[n]);
       if(m==1)printf("%d\n",string[n]);
      }
     //  printf("\n");
     }
    }
</details>
Kods paprasa no lietotāja, lai ievada simbolu rindu kura tiek saglabāta masīva.

Šajā simbolu rindā tiek atrasts simbols ar mazāko un lielāko vērtību un tos saglabā atsevišķos masīvos kopā ar to kārtas skaita nummuru. Šie simboli tiek paziņoti lietotājam.

Meklējot simbolu rindas simbolu ar lielāko un mazāko vērtību tika saskaitīta arī simbolu summa,kura tika izmantota, lai noteiktu simbolu vidējo vērtību summu dalot ar 2 un paziņojot rezultātus.

Pēctam, lai varētu noteikt mediānu simbolu rinda tika sakārtota augošā secībā, atrodot masīva mazāko vērtību un pārnosot to uz masīva sākumpunktu.

Lai noteiktu modu katrs simbol tiek sakārtots masīvā, kurā saskaita cik reižu tas atkārtojas, pēctam nosaka cik ir lielākais skaits reižu cik kāds no simboliem ir sastopams un paziņo silbolus, kas ir atkārtojušies visvairāk.

Pašās beigās tiek izvadīts katrs simbols augšā secībā kopā ar tā ASCII vērtību.
### Rezultāts
<details>
  <summary> Programmas kods </summary>
  
    aaaaa.,/,/';67158903
    1. simbola ("a") ASCII vērtība ir 97
    2. simbola ("a") ASCII vērtība ir 97
    3. simbola ("a") ASCII vērtība ir 97
    4. simbola ("a") ASCII vērtība ir 97
    5. simbola ("a") ASCII vērtība ir 97
    6. simbola (".") ASCII vērtība ir 46
    7. simbola (",") ASCII vērtība ir 44
    8. simbola ("/") ASCII vērtība ir 47
    9. simbola (",") ASCII vērtība ir 44
    10. simbola ("/") ASCII vērtība ir 47
    11. simbola ("'") ASCII vērtība ir 39
    12. simbola (";") ASCII vērtība ir 59
    13. simbola ("6") ASCII vērtība ir 54
    14. simbola ("7") ASCII vērtība ir 55
    15. simbola ("1") ASCII vērtība ir 49
    16. simbola ("5") ASCII vērtība ir 53
    17. simbola ("8") ASCII vērtība ir 56
    18. simbola ("9") ASCII vērtība ir 57
    19. simbola ("0") ASCII vērtība ir 48
    20. simbola ("3") ASCII vērtība ir 51

    Ievadītajā rindā ir 20 simbolu gara.
    Mazākā vērtība no šiem simboliem ir 11. simbolam "'", kura ASCII vērtība ir 39
    Lielākā vērtība no šiem simboliem ir 1. simbolam "a", kura ASCII vērtība ir 97
    Šo simbolu vidējā ASCII vērtība ir 61, kurai atbilst simbols "="
    Simbolu rindas mediāna ir 10. simbols "6", kura ASCII vērtība ir 54
    Simbolu rindas moda ir simbols "a", tā ASCII vērtība ir 97 un tas atkārtojās 5 reižu.
    '	39
    ,	44
    ,	44
    .	46
    /	47
    /	47
    0	48
    1	49
    3	51
    5	53
    6	54
    7	55
    8	56
    9	57
    ;	59
    a	97
    a	97
    a	97
    a	97
    a	97
</details>
### Analīze
Kodu ir iespējams vēl uzlabot vietām izmantojot jau definētus mainīgos vai masīvus. 
