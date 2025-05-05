// a simplifier et apprendre evident
// ex 10000300250000000048
// ex 0 ou 1

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
    int k = 0;
    int t = 0;
    int r = 0;
    char N[257];
    scanf("%s", N);
    // printf("%s", N);
    int i = 0;
    while  (N[i])
    {
        if (N[i] == '0')
            k++;
        else
        {
            if (r < k)
                r = k;
            k = 0;
        }
            
        i++;
    }
    if (r < k)
          r = k;
    
    // if (k == 0)
    //      return printf("0\n");
    printf("%d\n", r);

    return 0;
}

// int main()
// {
//     char N[257];
//     scanf("%s", N);
//     int r =0;
//     int r2=0;
//     for (int i =0; i < strlen(N); i++)
//     {
//         if(N[i]=='0')
//             r++;
//         else
//             r=0;
//         r2 = r>r2?r:r2;
//     }

//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");

//     printf("%d\n",r2);

//     return 0;
// }