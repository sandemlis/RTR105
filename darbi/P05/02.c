/* Program 01.c */
#include <stdio.h>
#include <limits.h>
int main() {
	long long int a = 50000; //50, 000
	long long int b = 1000000; //1, 000, 000
	long long int c = a * b; //Sagaidāmais rezultāts 50, 000, 000, 000 (bet būs out of bounds)

	printf ("int datu tipa izmērs ir: %d baiti \n", sizeof (int));
	printf ("Aprēķinam a un b reizinājumu:\n");
	printf ("a = %lld, b = %lld \n", a, b);
	printf ("c = a * b = %lld * %lld = %lld \n", a,b,c); //rezultāts uz ekrāna
}
