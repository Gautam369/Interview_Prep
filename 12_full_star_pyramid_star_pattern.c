#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0, j = 0;

    for(i = 1; i <= 5; ++i)             /* Loop for printing columns */
    {
        for(j = 1; j <= 9; ++j)         /* Loop for printing rows*/
        {   
            /* if loop for specifically printing star at desired places */
            if((i==1 && j==5) || (i==2 && (j==4 || j==6)) || (i==3 && (j==3 || j==5 || j==7)) ||
                (i==4 && (j==2 || j==4 || j==6 || j==8)) || (i==5 && (j== 1 || j==3 || j==5 || j==7 || j==9)))      
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
    exit(0);
}

/*
Aim: To generate full pyramid star pattern as below

                *                       i = 1
            *       *                   i = 2
        *       *       *               i = 3
    *       *       *       *           i = 4
*       *       *       *       *       i = 5

Step 1: First create all numbers on output in this manner:

1   2   3   4   5   6   7   8   9

Step 2: Now create the required number of columns on output in this manner

1   2   3   4   5   6   7   8   9
1   2   3   4   5   6   7   8   9
1   2   3   4   5   6   7   8   9
1   2   3   4   5   6   7   8   9
1   2   3   4   5   6   7   8   9

Step 3: Now keep replacing the numbers with stars on output for all 5 rows in this manner

1   2   3   4   *   6   7   8   9
1   2   3   *   5   *   7   8   9
1   2   *   4   *   6   *   8   9
1   *   3   *   5   *   7   *   9
*   2   *   4   *   6   *   8   *

Step 4: Now replace all numbers with space in printf statement of else loop to get this star pattern

                *                       i = 1
            *       *                   i = 2
        *       *       *               i = 3
    *       *       *       *           i = 4
*       *       *       *       *       i = 5
1   2   3   4   5   6   7   8   9 <-j

Author: Ashish Pedini
*/
