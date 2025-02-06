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
    double r;    
    long long N;
    scanf("%lld", &N);
    int d;    
    scanf("%d", &d);
    for (int i = 0; i < N; i++) {
        long long x;
        scanf("%f", &x);
        if (d != 0)
        {
            r =  (double)x / d; 
            if ( r * d == x  && d != 0)
                return printf("Perfect\n");
            return printf("Imperfect\n");
        }
    }
    return printf("Imperfect\n");    
}