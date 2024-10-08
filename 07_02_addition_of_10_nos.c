/* 
Aim: Addition of 10 numbers using fixed number of arugments
Author: Ashish Pedini
*/

#include <stdio.h>
#include <stdlib.h>

int sum(int, int, int, int, int, int, int, int, int, int);

int main(void)
{
    int a, b, c, d, e, f, g, h, l, m, add;

    printf("Enter 10 numbers : ");
    scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &l, &m);

    add = sum(a, b, c, d, e, f, g, h, l, m);

    printf("The addition of 10 numbers is %d", add);
    exit(0);
}

int sum(int a, int b, int c, int d, int e, int f, int g, int h, int l, int m)
{
    int tot = 0;

    tot = a + b + c + d + e + f + g + h + l + m;

    return tot;
}