/* 
Aim: Addition of 10 numbers using variable number of arguments
Author: Ashish Pedini
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int add(int nop, ...);

int main(void)
{
    int result = 0;

    result  = add(10,10,20,30,40,50,60,70,80,90,100);

    printf("The result of 10 numbers is %d", result);
    exit(0);
}

int add(int nop, ...)
{
    int par = 0, i = 0, sum = 0;
    va_list ptr;
    va_start(ptr, nop);
    par = va_arg(ptr, int);
    while(i < nop)
    {
        sum = sum + par;
        par = va_arg(ptr, int);
        i++;
    }
    va_end(ptr);

    return sum;
}