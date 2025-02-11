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
    int a;
    scanf("%d", &a);
    // printf("%d\n", a);
    int b;
    scanf("%d", &b);
    // printf("%d\n", b);
    for (int i = 2; i < 20000000; i++)
    {
        if ( a % i == 0 && b % i == 0)
            return printf("false\n");

    }    
    printf("true\n");

    return 0;
}

// schmoov
// int gcd(int a, int b)
// {
//     if (!b)
//         return a;
//     return (gcd(b, a%b));
// }
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     int b;
//     scanf("%d", &b);

//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");

//     puts(gcd(a,b)==1?"true":"false");

//     return 0;
// }