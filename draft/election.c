// pb sujet

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int d = 0;
    int de = 0;
    int r = 0;
    int re = 0;
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        char state[21];
        int e;
        char winner[21];
        scanf("%s%d%s", state, &e, winner);
        if (winner[0] == 'D')
        {
            d = d + 1;
            de = de + e;
        }
            
        if (winner[0] == 'R')
        {
            r = r + 1;
            re = re + e;
        }
    }
    // printf("%d\n", d);
    // printf("%d\n", r);
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    if ( d > r)
        printf("Democrats\n");
    if ( r > d)
        printf("Republicans\n");
    if ( d == r)     
    {
        if (de > re)
            printf("Democrats\n");
        if (de < re)
            printf("Republicans\n");
        if (de == re)            
            printf("Draw\n");
    }
        

    return 0;
}