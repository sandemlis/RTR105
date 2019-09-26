/* Program 01.c */
#include <stdio.h>

char x;

int fun() {
	char x = 32+15
	char delta = 7;
	x = x + delta;
	return x;
}

int main() {
	x = 32+15;
	printf("pirms, %c \n", x);
	//Šeit parādās burts / ,jo šī burta numurs ir 47

	fun();
	printf("Pēc 1. reizes, %c \n", x);
	//Pēc 1. reizes parādās burts 6 ,jo šī burta numurs ir 47+7, jeb 54

	fun();
	printf("Pēc 2. reizes, %c \n", x);
	//Pēc 2. reizes parādās burts = ,jo šī burta numurs ir 54+7, jeb 61
}
