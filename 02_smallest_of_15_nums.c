/*
Aim: To find smallest of 15 numbers from an array
Author: Ashish Pedini
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, a[15] = {0}, sml = 1;

    for(i = 0; i <= 14; ++i)
    {
        printf("Enter value for element at index %d : ", i);
        scanf("%d", &a[i]);
    }

    sml = a[0];
    for(j = 0; j <= 14; ++j)
    {
        if(a[j] < sml)
        {
            sml = a[j];
        }
    }
    printf("The smallest of 15 numbers in array is %d", sml);
    exit(0);    
}