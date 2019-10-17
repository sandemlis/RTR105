#include <stdio.h>

int user_function_5()
{
int i_uf;
printf("Cienījamais lietotāj, lūdzu ievadiet skaitli (Ievadot 5 jautājumi beigsies):\n");
scanf("%d",&i_uf);
return i_uf;
}

void main(){
int i_main=0, N=5;
 i_main=user_function_5();
while(i_main!=N){
 i_main=user_function_5();
 printf("Reaģējot uz manas lietotāja funkcijas darbībām, tu esi ievadījis %d\n",i_main);
}
printf("Ievadot 5 tu esi pārtraucis manu darbību!\n");
}
