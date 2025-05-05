
// A contribution by Hieronymus
// Approved by Marty_kgb , justhalf and Th1nhNg0
//  Goal
// There is a hand sanitizer at the entrance of the museum. The dispenser has a maximum capacity of 1000 ml (one litre), but now contains GelAmount ml of sanitizer gel.
// Every push dispenses 5 ml of sanitizer gel.

// The guests arrived in groups with GuestCount member(s). Each will push the hand sanitizer a number of times depending on their name.

// To calculate how many pushes one guest makes, take the sum of the ASCII codes of letters in their name, and then take the digit sum of this value. Keep taking the digit sum until the result is a single digit.

// For Example: "Joe" -> 74+111+101 = 286 -> 2+8+6 = 16 -> 1+6 = 7 pushes.

// Is there enough sanitizer gel in the dispenser?

// Your task is to print the amount of gel left in percentage of the maximum capacity, rounded down. If there is not enough hand sanitizer left for the whole group, write not enough.
// Input
// Line 1: GelAmount in ml
// Line 2: GuestCount number of guests
// Next GuestCount Lines: The guest names
// Output
// The amount of hand sanitizer left in percentage, or not enough if there is not enough hand sanitizer.
// Constraints
// 0 <= GelAmount <= 1000
// 0 < GuestCount <= 50
// 0 < Length of guest name <= 30
// Example
// Input

// 1000
// 1
// Joe

// Output

// 96%



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
    int g;
    scanf("%d", &g);
    int guest_count;
    scanf("%d", &guest_count); fgetc(stdin);
    
    int t = 0;
    for (int i = 0; i < guest_count; i++) {
        char n[101];
        scanf("%[^\n]", n); fgetc(stdin);
        int k = 0;
        int j = 0;
        while (n[j])
        {
            k = k + n[j];
            j++;
        }
        while (k >= 10)
        {
            char str[100];
            sprintf(str,"%d", k);
            int l = 0;
            k = 0;
            while (str[l])
            {
                k = k + str[l]-48;
                l++;
            }
        }
        t = t + k;
    }    
    // printf("%d\n", t);    
    if ( t * 5 <= g)
        printf("%.f%%\n", 100*(g-(double)t*5)/g);
    else 
        printf("not enough\n");
    
}