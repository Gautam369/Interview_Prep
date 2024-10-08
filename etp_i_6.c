#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0, j = 0;

    for(i = 1; i <= 5; ++i)
    {
        for(j = 1; j <= 9; ++j)
        {
            if(i == 1 && j == 5)
            {
                printf("*\t");
            }
            else if(i == 2 && (j == 4 || j == 6))
            {
                printf("#\t");
            }
            else if(i == 3 && (j == 3 || j == 5 || j == 7))
            {
                printf("$\t");
            }
            else if(i == 4 && (j == 2 || j == 4 || j == 6 || j == 8))
            {
                printf("@\t");
            }
            else if(i == 5 && (j == 1 || j == 3 || j == 5 || j == 7 || j == 9))
            {
                char a = '%';
                printf("%c\t", a);
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
To generate following star pattern 

                *                       i = 1
            #       #                   i = 2
        $       $       $               i = 3
    @       @       @       @           i = 4
%       %       %       %       %       i = 5
1   2   3   4   5   6   7   8   9 <-j
*/