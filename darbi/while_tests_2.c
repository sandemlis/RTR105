#include<stdio.h>
#include<time.h>

void main(){
	int number1, number2;
	clock_t start_t, start1_t, end_t, total_t;
	start_t = clock();
	printf("Cienījamais lietotāj, lūdzu ievadi skaitli: \n");
	scanf("%d",&number1);
	while(number1>0 || number1<0){
	start1_t = clock();
	if (number1%2){
	printf("\nIevadītais skaitlis ir nepāra\n");}
	else{
	printf("\nIevadītais skaitlis ir pāra\n");}
	end_t = clock();
	printf("Pārbaude notika %d ms\n",end_t-start1_t);
	start1_t = clock();
	if ((number1<<31) >>31){
	printf("\nIevadītais skaitlis ir nepāra\n");}
	else{
	printf("\nIevadītais skaitlis ir pāra\n");}
	end_t = clock();
	printf("Pārbaude notika %d ms\n",end_t-start1_t);
	printf("Vai jūs vēlaties atkārtot mēģinājumu\?");
	printf("\nJa jā ievadiet kādu no veseliem skaitļiem.");
	printf("\nBet ja nevēlaties ievadiet 0\n");
	scanf("%d",number2);
	number1=number2;
	}
}
