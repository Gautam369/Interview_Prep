#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0, j = 0;
    
    for(j = 1; j <= 5; ++j)         /* Loop for printing rows */
    {
        for(i = 1; i <= 9; ++i)     /* Loop for printing columns */
        {
            if((j==1 && (i==1|| i==3||i==5 || i==7 || i==9)) || ((j==2 && (i==2 || i==4 || i==6 || i==8)) ||
                (j==3 && (i==3 || i==5 || i==7)) || (j==4 && (i==4 || i==6)) ||(j==5 && i==5)))
                {
                    printf("*\t");
                }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    exit(0);
}

/*
Aim: To generate inverted full star pyramid

*       *       *       *       *           j = 1
    *       *       *       *               j = 2
        *       *       *                   j = 3
            *       *                       j = 4
                *                           j = 5
1   2   3   4   5   6   7   8   9   <- i 

Author: Ashish Pedini    
*/