#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int min(int a, int b)
{
    if (a < b)  
        return (a);
    return (b); 
}
// marche que pour les entiers <= 9
int main()
{
    char s[257];    
    int t[257];
    scanf("%[^\n]", s);

    // long v[257];
    // char *end;
    // long num;
    // while (s)
    // {
    //     num = strtol(s, end, 10);
    //     if (s == end)
    //         break;
    //     printf("%ld ", num);
    //     s = end;
    // }
    

    int i = 0;
    int m = 100; 
    int r = 0;   
    while(s[i])
    {
        if (s[i] == 32)
            i++;
        int j = 0;
        int k = 0;
        while(s[j])
        {
            if (s[j] == 32)
                j++;
            if (s[i] == s[j])
                k++;            
            j++;// = j + 2;
        }
        t[i] = k;
        // printf("%d\n", t[i]);
        // i = i + 2;
        i++;
    }
    i = 0;
    while(s[i])
    {
        if (s[i] == 32)
            i++;
        if (t[i] % 2 != 0 )
            r = min(s[i] - 48, m);
        i++;
    }

    printf("%d\n", r);

    return 0;
}