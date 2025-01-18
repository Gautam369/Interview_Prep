/*
Aim: To find factorial of a number 
Author: Ashish Pedini
*/

#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(void)
{
    int a; 
    unsigned long long int b;

    printf("Enter the number : ");
    scanf("%d", &a);

    b = factorial(a);

    printf("The factorial of number is %llu\n", b);
    exit(0);
}

int factorial(int n)
{
    int i; 
    unsigned long long int fact = 1;

    for(i = n; i >= 1; i--)
    {
        fact = fact * i;
    }

    return fact;
}

/*
Comments: This program is able to calculate value of factorial numbers uptill 12, beyond that incorrect values are calculated as range 
of unsigned long long int is exceeded. 
*/