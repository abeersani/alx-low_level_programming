#include <stdio.h>

/**
 * main - Prints the sizeof many var types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("size of a char:%d byte(s)\n", sizeof(a));
printf("Size of an int:%d byte(s)\n", sizeof(b));
printf("size of a long int:%d byte(s)\n", sizeof(c)),
printf("size of a long long int:%d byte(s)\n", sizeof(d));
printf("Size of a float:%d byte(s)\n", sizeof(e));
return (0);
}
