<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Labaratorijas darbs Nr.1. - Taylor series - atskaite

## Teorija
		    500
		   -----
		   \
		    \	(-1)^k * x^(2*k)
cos^2(x/2)~=1/2+1/2  |	----------------
		    /	     (2*k)!
		   /
		   -----
		    k=0
### Kods
'''
#include <stdio.h>
#include <math.h>
#define A 100
void main(){
 double x=34,y,a=1,S=0.5;
 int k=0;

while((x>33.999)||(x<(-33.999))){
 printf("Lūdzu ievadiet x vērtību (robežās no -33 līdz 33): ");
 scanf("%lf",&x);}

 y=cos(x/2)*cos(x/2);

 a=pow(-1,k)*pow(x,(2*k));
 S=S+a/2;

 while(k<A){
  k++;
  a=a*(-1)*pow(x,2)/((2*k)*(2*k-1));
  S=S+a/2;
  if((k==(A-1))||(k==A))printf("%d. a = %.350lf\n",k,a/2);
 }
}
'''

### Rezultāts
'''
Lūdzu ievadiet x vērtību (robežās no -33 līdz 33): 15
99. a = -0.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000185367558316898669616627708406377443689020809950413325159704110172544401919580420109694221131123841846977176597562922233706213105469908441956413656341083196327616899272131920459615535769045091151825945734796081026
100. a = 0.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001047932176414628173777538903805352132361536365373108264607404122270303861323202228146496443420558193404149940816308801425029226975286137603361979422335620652418422736822540015276980273264535578894251112779954868
'''

### Analīze
'''
Izpildot kodu tika konstatēts ka izpildot visas 500 iterācijas saskaitīšanai nav iespējams noteikt saskaitāmo vērtības, jo tās ir tik mazas ka aprēķinot parādās nulle nevis ļoti mazs skaitlis.
Tāpēc tiek izmantotas 100 iterācijas 500 vietā.

Vēl izpildot kodu tika konstatēts, ka ievadot x vērtību, kas pēc moduļa ir lielāka par 33.999999, programmai sāk pazust precizitāte (Aprēķinātā vērtība atšķiras no vērtības ko iegūstam izmantojot formulu)
Tāpēc, lai attēlotu precīzus rezultātus tika ierobežota x vērtība kuru programma pieņems no lietotāja. (Lai lietotājam nebūtu jāsaskatas ar iespējamo rezultāta kļūdu)
No šīs kļūdas var izvairīties ja pirms aprēķiniem tiktu izmantotas formulas, kas šo x vērtību pārvērstu par tādu, kas ir robežās starp PI un -PI.
'''

### Funkcijas grafiks
![Bildes apraksts]()

