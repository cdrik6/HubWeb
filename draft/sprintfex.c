// - 2(position de l'op) 123 => 12 - 3 = 9

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
    char O[3];
    int X;
    int N;
    scanf("%s%d%d", O, &X, &N);    
    char s[11];
    sprintf(s,"%d",N);
    // printf("%s\n", s);
    char r[11];
    char t[11];
    for (int i = 0; i < strlen(s); i++)
    {
        if (i < X)
            r[i] = s[i];
        else 
            t[i-X] = s[i];
    }
    // printf("%d\n", atoi(r));
    // printf("%d\n", atoi(t));
    if ( O[0] == '-')
        return (printf("%d\n", atoi(r) - atoi(t)));
    if ( O[0] == '+')
        return (printf("%d\n", atoi(r) + atoi(t)));
    if ( O[0] == '*')
        return (printf("%d\n", atoi(r) * atoi(t)));    
    if ( O[0] == '/')
        return (printf("%d\n", atoi(r) / atoi(t)));
    

    

    return 0;
}