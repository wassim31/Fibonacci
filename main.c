/*
 *    Created on: June 21, 2021
 *        Author: Houssem Bousmaha
 */

#include <stdio.h>
#define MAX 32504

unsigned long long int Fib[MAX];

/* --------------- Calculate Fib[n] | recursive --------------- */
unsigned long long int fib_recursive(int n)
{
    if (n <= 1)
        return n;
    if (Fib[n] != 0)
        return Fib[n];
    Fib[n] = fib_recursive(n - 1) + fib_recursive(n - 2);
    return Fib[n];
}

/* --------------- Calculate Fib[n] | iterative --------------- */
unsigned long long int fib_iterative(int n)
{
    unsigned long long int ans, b = 0, a = 1;
    for (int i = 0; i < n - 1; i++)
    {
        ans = a + b;
        b = a;
        a = ans;
    }
    return ans;
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
    printf("%llu | %llu", fib_iterative(n), fib_recursive(n));
}