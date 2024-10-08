/*
Aim: To print Fibonacci series
Author: Ashish Pedini
*/

#include <stdio.h>
#include <stdlib.h>

void fibonacci(int inst);

int main(void)
{
    int b, c;

    printf("Enter the instance of fibonacci : ");
    scanf("%d", &c);

    fibonacci(c);

    exit(0);
}

void fibonacci(int inst)
{
    int i, j, fbs[30] = {0}, a = 0, b = 1;

    if(inst >= 25)
    {
        puts("The instance is more than 25");
        exit(-1);
    }
    for(i = 2; i <= inst; i++)
    {
        fbs[0] = a, fbs[1] = b; 
        fbs[i] = fbs[i-1] + fbs[i-2];
    }

    printf("The fibonacci sequence is");
    for(j = 0; j <= inst; j++)
    {
        printf("%d \n", fbs[j]);
    }
    return;
}