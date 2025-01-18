/*
Aim: To find smallest of three numbers 
Author: Ashish Pedini
*/

#include <stdio.h>
#include <stdlib.h>

int small(int a, int b, int g);

int main(void)
{
    int c, d, e, f;

    printf("Enter three numbers : ");
    scanf("%d%d%d", &c,&d, &e);

    f = small(c, d, e);
    
    printf("The smallest of three numbers is %d", f);
    exit(0);
}

int small(int a, int b, int g)
{
    int sml = 0;
    if(a < b)
    {
        sml = a;
    } 
    else
    {
        sml = b;
    }

    if(g < sml)
    {
        sml = g;
    }
    return sml;
}