<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Labaratorijas darbs Nr.1. - Taylor series - atskaite

## Teorija
Lai aprēķinātu sakni vērtībai tiek uzskatīts, ja noteiktā intervālā, kurā funkcijas vērtība tā sākumpunktā un beigu punktā ir ar atšķirīgām zīmēm, tajā ir nepāra skaits sakņu.

Tāpēc būs iespējams atrast sakni šo intervālu vairākas reizes dalot uz pusēm, jo nepāra skaitli dalot ar 2 vienmēr būs nepāra skaitlis. 
### Kods
	#include<stdio.h>
	#include<math.h>
	
	int main(){
	 float a, b, x, c, delta_x, funkca, funkcb, funkcx;
	 int reizes=0,precizitate;
	
	 printf("Cien. lietotāj, jums būs jānorāda daži parametri un mēs aprēķināsim funkcijas Cos^2(x/2) sakni jūsu norādītajā intervālā.\n");
	 printf("Ievadiet intervāla sākuma punktu: \n");
	 scanf("%f",&a);
	 printf("Ievadiet intervāla beigu puntu: \n");
	 scanf("%f",&b);
	 printf("Pirms ievadiet vērtību ņemiet vērā ka dotās funkcijas vērtības ir no 0 līdz 1 !!!!\n");
	 printf("Ievadiet funkcijas vērtību kuru vēlaties atrast: \n");
	 scanf("%f",&c);
	 printf("Ievadiet vēlamo funkcijas saknes precizitāti (cipari aiz komata): \n");
	 scanf("%d",&precizitate);
	 printf("\n");
	
	 delta_x=pow(10,-precizitate);


	 if(a>b){
	  b=b+a;
	  a=b-a;
	  b=b-a;
	  printf("Deimžēl jūsu norādītais sākuma punkts bija lielāks par beigu punktu, tāpēc apmainījām tos vietām.\n");
	 }

	 funkca=cos(a/2)*cos(a/2)-c;
	 funkcb=cos(b/2)*cos(b/2)-c;
	 if (funkca*funkcb>0){
	  printf("intervālā [%f;%f] cos^2(x) funkcijai ",a,b);
	  printf("sakņu nav (vai tajā ir pāra skaits sakņu)\n");
	  return 1;
	 }
	 // printf("\tcos^2(%f/2)=%f\t\t\t\t",a,(cos(a/2)*cos(a/2)));
	 // printf("cos^2(%f/2)=%f\n",b,(cos(b/2)*cos(b/2)));


	 while((b-a)>delta_x){
	  x=(a+b)/2.;
	  if(funkca*(cos(x/2)*cos(x/2)-c)>0)
		 a=x;
	  else
		 b=x;

	  reizes++;
	  // printf("%2d. iterācija:\tcos^2(%f/2)=%f\t",reizes,a,(cos(a/2)*cos(a/2)));
	  // printf("\tcos^2(%f/2)=%f\t",x,(cos(x/2)*cos(x/2)));
	  // printf("\tcos^2(%f/2)=%f\n",b,(cos(b/2)*cos(b/2)));
	 }

	 printf("Sakne atrodas intervālā [%.10f;%.10f] ar skaitļa pecizitāti aiz komata %.10f\n",a,b,delta_x);
	 printf("Tātad aptuvenā x vērtība ir %.10f\n",((a+b)/2));
	 printf("Meklējot sakni intervāls tika sašaurināts %d reizes\n",reizes);
	
	 return 0;
	}
Kods paprasa, lai lietotājs ievada 4 vērtības - intervāla sākumpuntu, intervāla beigu punktu, funkcijas vērtību un precizitāti.

Kods arī pārbauda vai sākumpunts nav lielāks par beigu punktu un samaina vietām, lai būtu mazāks.

Lai aprēķinātu sakni lietotāja dotajai vērtībai tiek aprēķināts dotā intervāla sākumpunkta un beigu punkta vērtības, lai noteiktu vai šajā intervālā ir nepāra skaits sakņu.

Ja dotajā intervālā tiek konstatēts ka ir nepāra skaits sakņu, tas tiek dalīts ar 2 līdz nonāk līdz lietotāja norādītajai precizitātei.

Kad šī precizitāte ir sasniegta, lietotājam tiek paziņots intervāls kurā tika atrasta sakne, saknes aptuvenā vērtība un cik reizes intervāls tika saīsināts līdz tika atrasta šī sakne.
### Rezultāts

	Cien. lietotāj, jums būs jānorāda daži parametri un mēs aprēķināsim funkcijas Cos^2(x/2) sakni jūsu norādītajā intervālā.
	Ievadiet intervāla sākuma punktu: 5
	Ievadiet intervāla beigu puntu: 0
	Pirms ievadiet vērtību ņemiet vērā ka dotās funkcijas vērtības ir no 0 līdz 1 !!!! Ievadiet funkcijas vērtību kuru vēlaties atrast: 0.9
	Ievadiet vēlamo funkcijas saknes precizitāti (cipari aiz komata): 7

	Deimžēl jūsu norādītais sākuma punkts bija lielāks par beigu punktu, tāpēc apmainījām tos vietām.
	Sakne atrodas intervālā [0.6435011625;0.6435012221] ar skaitļa pecizitāti aiz komata 0.0000001000
	Tātad aptuvenā x vērtība ir 0.643501163
	Meklējot sakni intervāls tika sašaurināts 26 reizes

### Analīze
Ar doto sakņu meklēšanas metodi nav iespējams atrast sakni, ja dotajā intervālā ir pāra skaits sakņu, līdz ar ko programma būtu jāuzlabo, lai būtu iespējams noteikt vai šajā intervālā ir iespējams atrast sakni un to noteikt.

Tika konstatēts, ka dotais kods nevar noteikt sakni, ja norādītā funkcijas vērtība ir funkcijas virsotne, jo abās intervāla pusēs funkcijas vērtība ir ar vienādu zīmi.
### Funkcijas grafiks
![Cos(x/2) * Cos(x/2)](https://raw.githubusercontent.com/sandemlis/RTR105/master/darbi/LabD1/Gnuplot.png)
