#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
47
oooaoooooaooaooooaoooooaooooooooooaooaoooaooooo
180000

17
AAABAABAAAAABABAA
60

16
--|----||---|---
0
 **/

// // a la main 
// int main()
// {
//     int LENGTH;
//     scanf("%d", &LENGTH); fgetc(stdin);
//     char L[LENGTH + 1];
//     scanf("%[^\n]", L);
//     int k = 0;
//     int m[100]= {0};
//     int r = 1;
//     int i = 0;
//     int j = 0;
//     while(L[i])
//     {
//         // printf("%c", L[i]);
//         if (L[i] == L[0])
//             k++;
//         else
//         {
//             m[j] = k;
//             // printf("%d\n", k);
//             j++;
//             k = 0;
//         }            
//         i++;
//     }
//     if (k)
//         m[j] = k;
//     else
//         m[j] = 1;
//     for (int g = 0; g <= j; g++)
//     {
//         r = r * m[g];

//     }
//     printf("%d\n", r);

//     return 0;
// }


// strtok --> pb du zero
int main()
{
    int LENGTH;
    scanf("%d", &LENGTH); fgetc(stdin);
    char L[LENGTH + 1];
    scanf("%[^\n]", L);
    char sep[2] = {0};
    int i = 0;
    while(L[i])
    {
        if (L[i] != L[0])
        {
            sep[0] = L[i];
            break;
        }
        i++;
    }
    i = 1;
    int g = 1;
    while(L[i])
    {
        if (L[i] == sep[0])
        {
            if (L[i-1] == sep[0])
                g = 0;
        }            
        i++;
    }
    int k = 1;
    char *tok = strtok(L, sep);
    while(tok)
    {
        k = k * strlen(tok);
        tok = strtok(NULL, sep);
    }
    printf("%d\n", k * g);

    return 0;
}
