// Several copper cups are laid out in a row, upside-down. The magician places a ball under one of them, and starts swapping cups very quickly. Where is the ball?
// Input
// Line 1: A string with underscores _ for the top of the cups.
// Line 2: A string with pipes | for the sides of the cups and a lower-case o for the ball.
// Line 3: N, the integer number of swaps.
// Next N lines: Two integers separated by a whitespace, for the based-1 indexes of the cups that are swapped.
// Output
// Line 1: A string for the top of the cups (unchanged).
// Line 2: A string for the sides of the cups, and the ball.
// Constraints
// 1 ≤ N ≤ 10
// Example
// Input

//  _   _   _ 
// | | | | |o|
// 1
// 1 3

// Output

//  _   _   _ 
// |o| | | | |

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char tops[257];
    scanf("%[^\n]", tops); fgetc(stdin);
    char s[257];
    scanf("%[^\n]", s);
    int N;
    scanf("%d", &N);
    char temp;
    for (int i = 0; i < N; i++) {
        int s1;
        int s2;
        scanf("%d%d", &s1, &s2);        
        // if (s1 == 2)
        //     s1 = 5;
        // if (s1 == 3)
        //     s1 = 9;
        // if (s2 == 2)
        //     s2 = 5;
        // if (s2 == 3)
        //     s2 = 9;
        s1 = 4*s1-3;
        s2 = 4*s2-3;
        temp = s[s1];
        s[s1] = s[s2];
        s[s2] = temp;        

    }
    // printf(" _   _   _ \n");
    printf("%s\n", tops);    
    printf("%s\n", s);    
    return 0;
}