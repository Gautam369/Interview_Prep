#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0, j = 0;

    for(i = 1; i <= 9; ++i)
    {
        for(j = 1; j <= 9; ++j)
        {
            if(i == 1 && (j == 5))
            {
                printf("*\t");
            }
            else if(i == 2 && (j == 4 || j == 6))
            {
                printf("*\t");
            }
            else if(i == 3 && (j == 3 || j == 5 || j == 7))
            {
                printf("*\t");
            }
            else if(i == 4 && (j == 2 || j == 4 || j == 6 || j == 8))
            {
                printf("*\t");
            }
            else if(i == 5 && (j == 1 || j == 3 || j == 5 || j == 7 || j == 9))
            {
                printf("*\t");
            }
            else if(i == 6 && (j == 2 || j == 4 || j == 6 || j == 8))
            {
                printf("*\t");
            }
            else if(i == 7 && (j == 3 || j == 5 || j == 7))
            {
                printf("*\t");
            }
            else if(i == 8 && (j == 4 || j == 6))
            {
                printf("*\t");
            }
            else if(i == 9 && (j == 5))
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
Aim: To generate diamond star pattern

                *                       Row = 1
            *       *                   Row = 2
        *       *       *               Row = 3
    *       *       *       *           Row = 4
*       *       *       *       *       Row = 5
    *       *       *       *           Row = 6
        *       *       *               Row = 7
            *       *                   Row = 8  
                *                       Row = 9

1   2   3   4   *   6   7   8   9       i = 1
1   2   3   *   5   *   7   8   9       i = 2
1   2   *   4   *   6   *   8   9       i = 3
1   *   3   *   5   *   7   *   9       i = 4
*   2   *   4   *   6   *   8   *       i = 5
1   *   3   *   5   *   7   *   9       i = 6
1   2   *   4   *   6   *   8   9       i = 7
1   2   3   *   5   *   7   8   9       i = 8
1   2   3   4   *   6   7   8   9       i = 9
1   2   3   4   5   6   7   8   9   <-j

*/

