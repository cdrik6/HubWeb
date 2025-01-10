#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++)
//     {
//         for (int k = 1; k <= N+i-1; k++)
//         {
//             if (k % (N-i+1) == 0)
//             {
//                 printf("*");                
//                 while( k < N+i-1)
//                 {
//                   printf(" *");             
//                   k = k + 2;
//                 }
//             }                
//             else 
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }    


int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int k = 1; k <= N-i; k++)
            printf(" ");
        for (int k = N-i+1; k < N+i-1; k= k+2)
            printf("* ");    
        printf("*\n");        
    }
}    