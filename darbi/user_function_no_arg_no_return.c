#include <stdio.h>

void user_function_1()
{
printf("Cienījamais lietotāj, sveicu tevi no savas lietotāja funkcijas!\n");
}

void user_function_2();

void main()
{
user_function_1();
user_function_1();
}

void user_function_2()
{
user_function_1();
}
