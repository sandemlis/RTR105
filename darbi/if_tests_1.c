#include<stdio.h>

void main(){
	int number1, number2;
	printf("Cienījamais lietotāj, lūdzu ievadi 1. skaitli: ");
	scanf("%d",&number1);
	printf("Cienījamais lietotāj, lūdzu ievadi 2. skaitli: ");
	scanf("%d",&number2);
	if(number1 > number2){
		printf("\nTavs 1. skaitlis %d ir > nekā 2. skaitlis %d\n",number1,number2);
		}
	else if(number1 < number2){
		printf("\nTavs 2. skaitlis %d ir > nekā 1. skaitlis %d\n",number2,number1);
		}
	else{
		printf("\nAbi ievadītie skaitļi ir vienādi\n");
		}
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
	}
