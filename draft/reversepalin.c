// The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
// 01 // Input // Expected output
// What I saw was completely out of the ordinary.
// saw was
// 02 // Input // Expected output 
// I am stressed, need some desserts!
// stressed desserts
// 03 // Input // Expected output
// Step carefully, I have snakes as pets.
// Step pets
// 04 // Input // Expected output
// A reverse spelling of palindromes.
// <missing>
// 05 // Input // Expected output
// One.
// <missing>
// 06 // Input // Expected output
// Mom of my mom is my grandmom. 
// <missing>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

char *reverse(char *str)
{
    int i;
    int n;
    char *rev;

    n = strlen(str);
    rev = malloc(sizeof(char) * (n + 1));

    i = 0;
    while (str[i])
    {
        rev[i] = str[n - 1 - i];
        i++;
    }
    rev[i] = 0;
    return (rev);
}

char *lower(char *str)
{
    int i;
    int n;
    char *low;

    n = strlen(str);    
    low = malloc(sizeof(char) * (n + 1));

    i = 0;
    while (str[i])
    {
        low[i] = tolower(str[i]);
        i++;
    }
    low[i] = 0;
    return (low);
}


int main()
{
    char S[100];
    scanf("%[^\n]", S);
    char R[100];
    strcpy(R, S);
    R[strlen(S) - 1 ] = 0;
    // printf("%s\n", S);
    // printf("%s\n", R);

    bool missing = true;
    
    char *tok = strtok(R, " ");
    char *tab[100];
    int k = 0;
    while (tok)
    {
        tab[k] = tok;
        k++;
        tok = strtok(NULL, " ,");
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = i+1; j < k; j++)
        {
            char *temp = reverse(tab[i]);
            char *l = lower(temp);
            char *li = lower(tab[i]);
            char *lj = lower(tab[j]);
            if (strcmp(li,lj) != 0 && strcmp(l, lj) == 0)
            {                
                printf("%s %s\n",tab[i],tab[j]);
                missing = false;
                free(temp);
                free(l);
                free(li);
                free(lj);
                break;
            }
            free(temp);
            free(l);
            free(li);
            free(lj);
        }
    }
    if (missing)
          printf("<missing>\n");

    return 0;
}

