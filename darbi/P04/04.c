#include<stdio.h>
float pi() {return 3.14 ;}
int main() {
	int R=136 ;
	int L=2*pi()*R ;
	printf("Rinķa rādiusu %d grums ir %d m.", R, L);
	printf("\n");
	return 0;
}
