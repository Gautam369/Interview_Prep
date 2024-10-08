#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, n = 1, a = 1, b = 2, c = 3, rows, arr[20][40] = {0};
    
    printf("Enter the number of rows of pascal triangle (less than or equal to 15): ");
    scanf("%d", &rows);

    if(rows >= 16)
    {
          puts("You've entered invalid number of rows");
          exit(-1);
    }

    for(i = 0; i <= 19; ++i)
    {
       for(j = 0; j <= 39; ++j)
       {
          if((i == 0 && j == 20) || (i == 1 && (j == 19 || j == 21)) || (i == 2 && (j == 18 || j == 22)) || (i == 3 && (j == 17 || j == 23))
               || (i == 4 && (j == 16 || j == 24)) || (i == 5 && (j == 15 || j == 25)) || (i == 6 && (j == 14 || j == 26)) 
               || (i == 7 && (j == 13 || j == 27)) || (i == 8 && (j == 12 || j == 28)) || (i == 9 && (j == 11 || j == 29))
               || (i == 10 && (j == 10 || j == 30))|| (i == 11 && (j == 9 || j == 31)) || (i == 12 && (j == 8 || j == 32))
               || (i == 13 && (j == 7 || j == 33)) || (i == 14 && (j == 5 || j == 35)))
          {
               arr[i][j] = a;
          }
          else if(i == 2 && j == 20)
          {
               arr[i][j] = b;
          }
          else if(i == 3 && (j == 19 || j == 21))
          {
               arr[i][j] = c;
          }
          else if(i == 4 && (j == 18 || j == 22))
          {
               arr[i][j] = arr[0][20] + c;      /* 4 */
          }
          else if(i == 4 && j == 20)
          {
               arr[i][j] = arr[3][19] + c;        /* 6 */
          }
          else if(i == 5 && (j == 17 || j == 23))
          {
               arr[i][j] = arr[4][18] + a;        /* 5 */
          }
          else if(i == 5 && (j == 19 || j == 21))
          {
               arr[i][j] = arr[4][18] + arr[4][20];    /* 10 */
          }
          else if(i == 6 && (j == 16 || j == 24))
          {
               arr[i][j] = arr[5][17] + a;        /* 6 */
          }
          else if(i == 6 && (j == 18 || j == 22))
          {
               arr[i][j] = arr[5][19] + arr[5][17];    /* 15 */
          }
          else if(i == 6 && j == 20)
          {
               arr[i][j] = arr[5][19] + arr[5][19];    /* 20 */
          }
          else if(i == 7 && (j == 15 || j == 25))
          {
               arr[i][j] = arr[6][16] + a;             /* 7 */
          }
          else if(i == 7 && (j == 17 || j == 23))
          {
               arr[i][j] = arr[6][18] + arr[6][16];    /* 21 */ 
          }
          else if(i == 7 && (j == 19 || j == 21))
          {
               arr[i][j] = arr[6][20] + arr[6][18];    /* 35 */
          }
          else if(i == 8 && (j == 14 || j == 26))
          {
               arr[i][j] = arr[7][15] + a;             /* 8 */
          }
          else if(i == 8 && (j == 16 || j == 24))
          {
               arr[i][j] = arr[7][17] + arr[7][15];    /* 28 */
          }
          else if(i == 8 && (j == 18 || j == 22))
          {
               arr[i][j] = arr[7][19] + arr[7][17];    /* 56 */
          }
          else if(i == 8 && j == 20)
          {
               arr[i][j] = arr[7][19] + arr[7][21];    /* 70 */
          }
          else if(i == 9 && (j == 13 || j == 27))
          {
               arr[i][j] = arr[8][14] + a;             /* 9 */
          }
          else if(i == 9 && (j == 15 || j == 25))
          {
               arr[i][j] = arr[8][16] + arr[8][14];    /* 36 */
          }
          else if(i == 9 && (j == 17 || j == 23))
          {
               arr[i][j] = arr[8][18] + arr[8][16];    /* 84 */
          }
          else if(i == 9 && (j == 19 || j == 21))
          {
               arr[i][j] = arr[8][18] + arr[8][20];    /* 126 */
          }
          else if(i == 10 && (j == 12 || j == 28))
          {
               arr[i][j] = arr[9][13] + a;             /* 10 */
          }
          else if(i == 10 && (j == 14 || j == 26))
          {
               arr[i][j] = arr[9][15] + arr[9][13];    /* 45 */
          }
          else if(i == 10 && (j == 16 || j == 24))
          {
               arr[i][j] = arr[9][17] + arr[9][15];    /* 120 */
          }
          else if(i == 10 && (j == 18 || j == 22))
          {
               arr[i][j] = arr[9][19] + arr[9][17];    /* 210 */
          }
          else if(i == 10 && j == 20)
          {
               arr[i][j] = arr[9][19] + arr[9][19];    /* 252 */
          }
          else if(i == 11 && (j == 11 || j == 29))
          {
               arr[i][j] = arr[10][12] + a;            /* 11 */
          }
          else if(i == 11 && (j == 13 || j == 27))
          {
               arr[i][j] = arr[10][12] + arr[10][14];    /* 55 */
          }
          else if(i == 11 && (j == 15 || j == 25))
          {
               arr[i][j] = arr[10][14] + arr[10][16];       /* 165 */
          }
          else if(i == 11 && (j == 17 || j == 23))
          {
               arr[i][j] = arr[10][18] + arr[10][16];       /* 330 */
          }
          else if(i == 11 && (j == 19 || j == 21))
          {
               arr[i][j] = arr[10][18] + arr[10][20];       /* 462 */
          }
          else if(i == 12 && (j == 10 || j == 30))
          {
               arr[i][j] = arr[11][11] + a;       /* 12 */
          }
          else if(i == 12 && (j == 12 || j == 28))
          {
               arr[i][j] = arr[11][13] + arr[11][11];       /* 66 */
          }
          else if(i == 12 && (j == 14 || j == 26))
          {
               arr[i][j] = arr[11][13] + arr[11][15];       /* 220 */
          }
          else if(i == 12 && (j == 16 || j == 24))
          {
               arr[i][j] = arr[11][17] + arr[11][15];       /* 495 */
          }
          else if(i == 12 && (j == 18 || j == 22))
          {
               arr[i][j] = arr[11][19] + arr[11][17];       /* 792 */
          }
          else if(i == 12 && j == 20)
          {
               arr[i][j] = arr[11][19] + arr[11][21];       /* 924 */
          }
          else if(i == 13 && (j == 9 || j == 31))
          {
               arr[i][j] = arr[12][10] + a;            /* 13 */
          }
          else if(i == 13 && (j == 11 || j == 29))
          {
               arr[i][j] = arr[12][10] + arr[12][12];       /* 78 */
          }
          else if(i == 13 && (j == 13 || j == 27))
          {
               arr[i][j] = arr[12][14] + arr[12][12];       /* 286 */
          }
          else if(i == 13 && (j == 15 || j == 25))
          {
               arr[i][j] = arr[12][14] + arr[12][16];       /* 715 */
          }
          else if(i == 13 && (j == 17 || j == 23))
          {
               arr[i][j] = arr[12][16] + arr[12][18];       /* 1287 */
          }
          else if(i == 13 && (j == 19 || j == 21))
          {
               arr[i][j] = arr[12][20] + arr[12][18];       /* 1716 */
          }
          else if(i == 14 && (j == 7 || j == 33))
          {
               arr[i][j] = arr[13][9] + a;                   /* 14 */
          }
          else if(i == 14 && (j == 9 || j == 31))
          {
               arr[i][j] = arr[13][9] + arr[13][11];          /* 91 */
          }
          else if(i == 14 && (j == 11 || j == 29))
          {
               arr[i][j] = arr[13][11] + arr[13][13];          /* 286 */
          }
          else if(i == 14 && (j == 13 || j == 27))
          {
               arr[i][j] = arr[13][15] + arr[13][13];          /* 1001 */
          }
          else if(i == 14 && (j == 15 || j == 25))
          {
               arr[i][j] = arr[13][17] + arr[13][15];          /* 2002 */
          }
          else if(i == 14 && (j == 17 || j == 23))
          {
               arr[i][j] = arr[13][19] + arr[13][17];          /* 3003 */
          }
          else if(i == 14 && (j == 19 || j == 21))
          {
               arr[i][j] = arr[13][19] + arr[13][21];          /* 3432 */
          }
       }
    } 

    for(i = 0; i <= (rows - 1); ++i)
    {
          for(j = 0; j <= 39; ++j)
          {
               printf("%d ", arr[i][j]);
          }
          printf(" <- %d\n\n", i);
    }
      
    
    exit(0);
}