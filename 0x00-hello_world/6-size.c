#include <stdio.h>

/**
 * main - entry point
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
printf("size of a char:%lu byte(s)\n", sizeof(d));
printf("Size of an int:%lu byte(s)\n", sizeof(a));
printf("size of a long int:%lu byte(s)\n", sizeof(b)),
printf("size of a long long int:%lu byte(s)\n", sizeof(c));
printf("Size of a float:%lu byte(s)\n", sizeof(f));
return (0);
}
