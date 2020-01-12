<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Labaratorijas darbs Nr.1. - Taylor series - atskaite

## Teorija
Teilora rindas izteiksme

			    500
			   -----
			   \
			    \	(-1)^k * x^(2*k)
	cos^2(x/2)~=1/2+1/2  |	----------------
			    /	     (2*k)!
			   /
			   -----
			    k=0

Rekurenes reizinājums 

		(-1)*x^2
	R = -------------------
		(2*k)*(2*k-1)

### Kods
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
	 printf("y=cos^2(%.2f/2)=%.2f\n",x,y);
	 
	 a=pow(-1,k)*pow(x,(2*k));
	 S=S+a/2;

 	 while(k<A){
  	  k++;
 	  a=a*(-1)*pow(x,2)/((2*k)*(2*k-1));
 	  S=S+a/2;
 	  if((k==(A-1))||(k==A))printf("%d. a = %e\n",k,a/2);
	  if(k==A)printf("Funkcijas rezultāts aprēķinot ar Teilora rindu\nCos^2(%.2f/2)=%.2f\n",x,S);
 	 }
	}

Kops paprasa lai lietotājs ievada vērtību un tad izmantojot teilora rindas vienādojumu izrēķina funkcijas vērtību.
### Rezultāts
	Lūdzu ievadiet x vērtību (robežās no -33 līdz 33): 15
	y=cos^2(15.00/2)=0.12
	99. a = -1.853676e-138
	100. a = 1.047932e-140
	Funkcijas rezultāts aprēķinot ar Teilora rindu
	Cos^2(15.00/2)=0.12

### Analīze
Izpildot kodu tika konstatēts ka izpildot visas 500 iterācijas saskaitīšanai nav iespējams noteikt saskaitāmo vērtības, jo tās ir tik mazas ka aprēķinot parādās nulle nevis ļoti mazs skaitlis.
Tāpēc tiek izmantotas 100 iterācijas 500 iterāciju vietā.

Vēl izpildot kodu tika konstatēts, ka ievadot x vērtību, kas pēc moduļa ir lielāka par 33.999999, programmai sāk pazust precizitāte (Aprēķinātā vērtība atšķiras no vērtības ko iegūstam izmantojot formulu)
Tāpēc, lai attēlotu precīzus rezultātus tika ierobežota x vērtība kuru programma pieņems no lietotāja. (Lai lietotājam nebūtu jāsaskatas ar iespējamo rezultāta kļūdu)

No šīs kļūdas var izvairīties ja pirms aprēķiniem tiktu izmantotas formulas, kas šo x vērtību pārvērstu par tādu, kas ir robežās starp PI un -PI.

### Funkcijas grafiks
![Cos(x/2) * Cos(x/2)](https://raw.githubusercontent.com/sandemlis/RTR105/master/darbi/LabD1/Gnuplot.png)

