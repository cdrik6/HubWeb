// 2
// 2
// blabla FATAL: blabla
// blabla DEBUG: blabla
// --> blabla FATAL: blabla

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/************************ le pb strtok c'est que ca modifie la str de depart !!!!!!!!!!! */

int main()
{
    int lvl;
    scanf("%d", &lvl);
    char *t[5] = {"FATAL:", "ERROR:", "WARNING:", "INFO:", "DEBUG:"};
    int n;
    // char *l = t[lvl];
    scanf("%d", &n); fgetc(stdin);
    for (int i = 0; i < n; i++) {
        char line[129];
        scanf("%[^\n]", line); fgetc(stdin);
        char *r = strdup(line);        
        char *tok = strtok(line, " ");
        tok = strtok(NULL, " ");
        // printf("%s\n", tok);
        int k = 0;
        while (strcmp(tok, t[k]) !=0 )
            k++;
        if (k <= lvl)
            printf("%s\n", r);
    }
 
    return 0;
}