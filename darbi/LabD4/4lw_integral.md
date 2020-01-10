<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Labaratorijas darbs Nr.4. - Integral - atskaite

## Teorija
Ar integrāļa palīdzību var aprēķināt laukumu starp funkciju un X assi.
Lai to izdarītu var ņemt palīgā trīs dažādus likumus - taisnstūra, trapeces un Simsona likumus

Izmantojot WolframAlpha tika noteikts ka funkcijas cos^2(x/2) noteiktā integrāļa vērtība intervālā [0;6.28]ir 3.13841
### Kods
<details>
  <summary> integral.c kods </summary>

	#include <stdio.h>
	#include <math.h>

	int main(){
	 double a,b,x,delta_x,summa=0,k;
	 int precizitate,n=0;
	 printf("Ievadiet intervāla sākumpunktu: ");
	 scanf("%lf",&a);
	 printf("Ievadiet intervāla beigu punktu: ");
	 scanf("%lf",&b);
	 printf("Ievadiet intervāla precizitāti (ciparu skaitu aiz komata): ");
	 scanf("%d",&precizitate);
	 delta_x=pow(10,-precizitate);
	 if(a>b){
	  b=b+a;
	  a=b-a;
	  b=b-a;
	  printf("Deimžēl jūsu norādītais sākuma punkts bija lielāks par beigu punktu, tāpēc apmainījām tos vietām.\n");
	 }
	 x=a;
	 while(x<=b){
	  summa=summa+(cos(x/2)*cos(x/2)*delta_x);
	  x+=delta_x;
	 }
	 printf("Aprēķinātais rezultāts izmantojot taisnstūra likumu: %f\n",summa);
	 summa=0;
	 x=a;
	 while(x<=b){
	  summa=summa+((cos(x/2)*cos(x/2)+cos((x+delta_x)/2)*cos((x+delta_x)/2))*delta_x/2);
	  x+=delta_x;
	 }
	 printf("Aprēķinātais rezultāts izmantojot trapeces likumu: %f\n",summa);
	 summa=0;
	 x=a;
	 while(x<=b){
	  n++;
	  if(n==1)k=cos(x/2)*cos(x/2);
	  else if((x+delta_x)>b)k=cos(x/2)*cos(x/2);
	  else if(n%2==0)k=4*cos(x/2)*cos(x/2);
	  else if(n%2==1)k=2*cos(x/2)*cos(x/2);
	  summa=summa+k;
	  x+=delta_x;
	 }
	 summa=summa*delta_x/3;
	 printf("Aprēķinātais rezultāts izmantojot Simpsona likumu: %f\n",summa);
	}

</details>
Kods paprasa, lai lietotājs ievada 3 vērtības - intervāla sākumpuntu, intervāla beigu punktu un soļa precizitāti.

Kods arī pārbauda vai sākumpunts nav lielāks par beigu punktu un samaina vietām, ja tas ir nepieciešams.

Pēctam kods vienu pēc otra aprēķina un izvada rezultātu kāds sanāk izmantojot katru no aptuvenā integrāļa aprēķināšanas likumiem.
	
### Rezultāts

	Ievadiet intervāla sākumpunktu: 0
	Ievadiet intervāla beigu punktu: 6.28
	Ievadiet intervāla precizitāti (ciparu skaitu aiz komata): 3
	Aprēķinātais rezultāts izmantojot taisnstūra likumu: 3.138407
	Aprēķinātais rezultāts izmantojot trapeces likumu: 3.138407
	Aprēķinātais rezultāts izmantojot Simpsona likumu: 3.137074
	
### Analīze
Vislielākā kļūda var rasties izmantojot taisnstūra likumu, jo tai vienmēr vai nu tiks izlaisti vai arī pārkāpti daži laukumi pie funkcijas
Manuprāt trapeces likums arī mazās precizitātēs mēdz būt diezko precīzs, jo tas cenšas cieši izsekot līdzi funkcijai.
Simpsona likuma vēŗtība bieži vien ir mazāka par reālo vērtību.

### Funkcijas grafiks
![Cos(x/2) * Cos(x/2)](https://raw.githubusercontent.com/sandemlis/RTR105/master/darbi/LabD4/GnuplotIntegral.PNG)
