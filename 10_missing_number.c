/*
Aim: To find remaining number out of range of numbers
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[] = {3, 5, 2, 4};
    int arr2[] = {1, 2, 3, 4, 5};
    int i, j, k = 0;
    int count = 0, t_count;

    for(j = 0; j <= 4; j++)
    {
        for(i = 0; i <= 3; i++)
        {
            if(arr2[j] != arr[i])
            {
                /* printf("arr2[%d] = %d is not equal to arr[%d] = %d\n", j, arr2[j], i, arr[i]); */
                count = count + 1;
                /* printf("The value of count is %d \n", count); */
                if(count == 4)
                {
                    printf("The missing number is %d\n", arr2[j]);
                    count = 0;
                    break;
                }
            }
            else if(arr2[j] == arr[i])
            {
                printf("arr2[%d] = %d is equal to arr[%d] = %d\n", j, arr2[j], i, arr[i]);
                count = 0;
                break;
            }
        } 
    }
    exit(0); 
}
    
/*    for(j = 1; j <= 4; ++j)
    {
        i = 0;
        while(i <= 4)
        {
            if(arr2[j] == arr[i])
            {
                continue;
            }
            else
            {
                printf("The missing number is %d \n", arr2[i]);
            }
            i++;
        }    
    } */