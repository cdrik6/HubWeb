#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

// compile avec -lm !!!!!!!!!!!

// char *sep = " "; // --> definir les separateurs
// char *tok = strtok (str, sep); // --> appeler strtok
// while (tok != NULL)
// {
//     /******to do with tok str********* */
//     tok = strtok (NULL, sep); // --> demander le token suivant avec NULL (str a ete modifie)
// }

int main()
{
    char str[256];
    scanf("%[^\n]", str);

    char *sep = " "; // --> definir les separateurs
    char *tok = strtok (str, sep); // --> appeler strtok
    while (tok != NULL)
    {
        // pour recup le token
        printf("token = %s\n", tok);
        // pour une chaine d'entier a recup
        int i = 0;
        double res = 0;
        while(tok[i])
        {
            res = res + (tok[i]-48) * pow(10, strlen(tok) - i-1);
            i++;
        }
        //printf("%.f\n", res);
        printf("%d\n", (int)res);
        int tot;
        tot  = tot + (int)res;
        printf("%d\n", tot);
        //
        tok = strtok (NULL, sep); // --> demander le token suivant avec NULL (str a ete modifie)
    }
}

/*
#include <stdbool.h>


int main()
{
    char str[256];
    scanf("%[^\n]", str);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int res = 0;
    const char * separators = " ";

    // On cherche à récupérer, un à un, tous les mots (token) de la phrase
    // et on commence par le premier.
    char * strToken = strtok ( str, separators );
    while ( strToken != NULL ) {
        if (!strcmp(strToken, "inc")) {
            res += 1;
        } 
        if (!strcmp(strToken, "dec")) {
            res -= 1;
        } 
        if (!strcmp(strToken, "double")) {
            res <<=1;
        } 
        if (!strcmp(strToken, "half")) {
            res >>=1;
        } 
        if (!strcmp(strToken, "print")) {
            printf("%d", res);
        } 
        if (!strcmp(strToken, "exit")) {
            return 0;
        } 
        strToken = strtok ( NULL, separators );
    }

    return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    char s[256];
    scanf("%[^\n]", s);
    int g = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    char m[20];
    while (s[i])
    {
        // m[0] = 0;
        j = 0;
        while (s[i] && s[i] != 32)
        {
            m[j] = s[i];
            j++;
            i++;
        }
        m[j] = 0;
        if ( strcmp(m, "inc") == 0)
            k++;
        else if ( strcmp(m, "dec") == 0)
            k--;
        else if ( strcmp(m, "half") == 0)
            k  = k /2;
        else if ( strcmp(m, "double") == 0)
            k  = k *2;
        else if ( strcmp(m, "print") == 0)
        {
            printf("%d", k);
            // k = 0;
            g = 1;
        }
            
        else if ( strcmp(m, "exit") == 0)
            break;
        i++;
    }

    if (g == 0)
        printf("%d\n", k);

    return 0;
}

*/