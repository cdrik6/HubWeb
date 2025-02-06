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
    int n;
    scanf("%d", &n);
    char str[100];
    sprintf(str, "%d", n);
    int r = strlen(str) % 3;
    if (n >= 0)
    {
        for (int i = 0; i < r; i++)
            printf("%c", str[i]);
        int k = 0;
        for (int i = r; i < strlen(str); i++)
        {
            if (k%3 == 0 )
            printf(",");
            printf("%c", str[i]);
            k++;
        }
    }
    else
    {
        r = (strlen(str) - 1) % 3;
        printf("%c", str[0]);
        for (int i = 1; i < r+1; i++)
            printf("%c", str[i]);
        int k = 0;
        for (int i = r+1; i < strlen(str); i++)
        {
            if (k%3 == 0 )
            printf(",");
            printf("%c", str[i]);
            k++;
        }
    }       
    
    printf("\n");    
    return 0;
}