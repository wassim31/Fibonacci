
/*
 *    Created on: June 21, 2021
 *        Author: Houssem Bousmaha
 */

#include <stdio.h>
#define MAX 32504

unsigned long long int Fib[MAX];

/* --------------- Calculate Fib[n] --------------- */
unsigned long long int fib(int n)
{
    if (n <= 1)
        return n;
    if (Fib[n] != 0)
        return Fib[n];
    Fib[n] = fib(n - 1) + fib(n - 2);
    return Fib[n];
}

int main()
{
    /* Reading input n */
    int n;
    printf("> Enter n : ");
    scanf(" %d", &n);

    /* Initialising the array */
    for (int i = 0; i < n; i++)
        Fib[i] = 0;

    /* Printing the result */
    printf("%llu", fib(n));
}
