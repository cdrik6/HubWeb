#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[101];
    scanf("%[^\n]", s);

    char *t[101];     
    char *tok = strtok (s, " ");
    
    int i = 0;
    while (tok != NULL)
    {
        // printf("%d\n", i);
        // strcpy(t[i], tok);
        t[i] = strdup(tok);        
        // printf("tok = %s ", tok);
        // printf("t = %s", t[i]);
        
        tok = strtok ( NULL, " ");
        i++;
    }
    for (int k = i - 1; k >= 0; k--)
    {
        if (k == i-1)
            printf("%s", t[k]);
        else 
            printf(" %s", t[k]);
    }       

    printf("\n");
    return 0;
}
