// comme le rush00
// input
// ABCDEF
// with heigth
// AAAAAAAA
// ABBBBBBA
// ABCCCCBA
// ABCDDCBA
// ABCCCCBA
// ABCCCCBA

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Print the desired target!
 **/

int main()
{
    // The string of symbols to use
    char s[33];
    scanf("%[^\n]", s);
    // The desired width of the target
    int w;
    // The desired height of the target
    int h;
    scanf("%d%d", &w, &h);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)         
        {
            // for (int k = 0; k < strlen(s); k++)         
            // {
                if ( j == i || j != h - 1)
                    printf("%c", s[j]);              
                else 
                    printf("%c", s[i]);              
            // }
        
        }
        printf("\n");
        
    }

    return 0;
}

// Schmoov
// int min(int a, int b)
// {
//     return a<b?a:b;
// }
// int main()
// {
//     // The string of symbols to use
//     char symbols[33];
//     scanf("%[^\n]", symbols);
//     int l = strlen(symbols);
//     // The desired width of the target
//     int width;
//     // The desired height of the target
//     int height;
//     scanf("%d%d", &width, &height);
//     for (int i = 0; i < height; i++) {
//         for (int j = 0; j < width; j++) {
//             printf("%c",symbols[min(min(i,j), min(height-1-i,width-1-j))%l]);
//         }
//         puts("");
//     }
// }

// vegret
// int main()
// {
//     // The string of symbols to use
//     char symbols[33];
//     scanf("%[^\n]", symbols);
//     // The desired width of the target
//     int width;
//     // The desired height of the target
//     int height;
//     int l = strlen(symbols);
//     scanf("%d%d", &width, &height);
//     char tab[height][width];
//     for (int i = 0; i<height/2+1;i++) {
//         for (int y = i; y<height-i;y++) {
//             for (int x = i; x<width-i;x++) {
//                 tab[y][x] = symbols[i%l];
//             }
//         }
//     }
//     for (int i = 0; i < height; i++) {

//         for (int j = 0 ; j < width;j++) {
//             putchar(tab[i][j]);
//         }
//         putchar('\n');
//     }

//     return 0;
// }