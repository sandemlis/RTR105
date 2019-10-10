#include<stdio.h>

void main(){
	int number1, number2;
	__clock_t start_t, end_t, total_t;
	printf("Cienījamais lietotāj, lūdzu ievadi 1. skaitli: ");
	scanf("%d",&number1);
	printf("Cienījamais lietotāj, lūdzu ievadi 2. skaitli: ");
	scanf("%d",&number2);
	start_t = clock();
	if(number1 > number2){
		printf("\nTavs 1. skaitlis %d ir > nekā 2. skaitlis %d\n",number1,number2);
		}
	else if(number1 < number2){
		printf("\nTavs 2. skaitlis %d ir > nekā 1. skaitlis %d\n",number2,number1);
		}
	else{
		printf("\nAbi ievadītie skaitļi ir vienādi\n");
		}
	end_t = clock();
	printf("\nProgrammas 1. daļas izpildes laiks ir %d\n",end_t-start_t);
	if(number1 % 2 == 0){
		printf("Tavs 1. ierakstītais skaitlis %d ir pāra skaitlis.\n",number1);
		}
	else{
		printf("Tavs 1. ierakstītais skaitlis %d ir nepāra skaitlis.\n",number1);
		}
	if(number2 % 2 == 0){
		printf("Tavs 2. ierakstītais skaitlis %d ir pāra skaitlis.\n",number2);
		}
	else{
		printf("Tavs 2. ierakstītais skaitlis %d ir nepāra skaitlis.\n",number2);
		}
	total_t = clock();
	printf("\nProgrammas izpildes laiks ir %d\n",total_t-start_t);
	}
