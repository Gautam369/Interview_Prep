/* You're given a function with string S & character K that returns the number of occurrences of K in the given string S */

#include <stdio.h>
#include <stdlib.h>
int char_occurrences(char* S, char* K);

int main(void)
{
    char S[10];
    char K[2];

    printf("Enter string : ");
    scanf("%10s", S);

    printf("Enter character element to be searched in string : ");
    scanf("%1s", K);

    int result = 0;
    result = char_occurrences(S, K);

    printf("The character element %c occurred %d times in the string", K[0], result);

    exit(0);
}

int char_occurrences(char* S, char* K)
{
    int i, j = 0, count = 0;

    for(i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == K[j])
        {
            count++;
        }
    }
    return count;
}