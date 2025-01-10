// Given a number n, find out how many numbers obtained by removing one of the digits of n are divisible by 3.
// Input Line 1: A number n
// Output
// Line 1: A number x that represents how many numbers obtained by removing one of the digits of n are divisible by 3.
// Constraints
// 1 ≤ n ≤ 2,000,000,000.
// - If n only has 1 digit, then the number obtained by removing one of the digits is 0.
// - In the case that after removing one of the digits, the obtained number starts with 0, the zeros from the start will be erased.
// - In the case that after removing different digits and the obtained numbers are the same, you will count all of them (if they are all divisible by 3).

// Example
// Input 23701
// Output 2

#include <stdio.h>
#include <string.h>

int main(void)
{
    char nbr[11];
    // fgets(nbr, sizeof(nbr), stdin); 
    scanf("%[^\n]", nbr);    
    // printf("%s\n", nbr);    
    int k = strlen(nbr);    
    // printf("%d\n", k);
    int r = 0;

    int i = 0;
    while(i < k)
    {
        int j = 0;
        int n = 0;
        while(j < k)
        {
            if (j != i)
            {
                n = n * 10 + (nbr[j] - 48);
            }
            j++;            
        }
        // printf("%d\n", n);
        if (n % 3 == 0) 
        r++;
        i++;
    }
    printf("%d\n", r);
}