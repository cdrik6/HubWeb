// Given a number n and d separated by a space, calculate its factorial n!.
// Then, determine the length of the factorial (i.e., the total number of digits)
// and the d-th digit from the end of this factorial result.

// For example, if n=5 and d=3:
// 5!=120, so the length of 120 is 3.
// The 3rd digit from the end of 120 is 1.

// This problem will test your ability to handle large numbers and manipulate strings!
// Input
// Two space-separated integers: n and d.
// Output
// Two space-separated integers: the length of n!, and the d-th digit from the end of n!.
// Constraints
// 1 ≤ n ≤ 150
// 1 ≤ d ≤ length of n!
// Example
// Input // 5 2 // Output // 3 2

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int d;
    scanf("%d%d", &n, &d);

    double f = 1 ;
    for (int i = 1; i <=n ; i++ )
        f = f * i;

    // char w[11];
    // for (int i = 1; i <= 10; i++)
    // {       
    //     w[10-i] = (int)(f / pow(10, i))  % 10;
    // }
    // w[10] = 0;

    printf("%.0f\n", f);
    char str[300];
    sprintf(str, "%.0f", f);    
    printf("%s\n", str);
    printf("%c\n", str[strlen(str)-d]);


    return 0;
}