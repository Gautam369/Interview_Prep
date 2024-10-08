/*
Aim: Reading triangle star pattern from a file
Author: Ashish Pedini
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp;
    char ch;

    fp = fopen("rd_triangle_star.txt", "r");
    if(fp == NULL)
    {
        printf("Unable to read the file \n");
        getch();
        exit(1);
    }
    else
    {
        while((ch = fgetc(fp))!=EOF)
        {
            printf("%c", ch);
        }
        fclose(fp);
    }
    exit(0);
}