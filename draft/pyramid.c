#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    int N;
    scanf("%d", &N); fgetc(stdin);
    char C[2];
    scanf("%[^\n]", C);
    for (int i = 1; i <= N; i++)
    {
        // int k = 2*i - 1;
        for (int j = 1; j <= 2*N-1; j++)
        {
            if ( j >= N - i + 1 &&  j <= N + i - 1)
                printf("%c",C[0]);
            else 
                printf(" ");
        }
        printf("\n");
    }     

    return 0;
}