/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyword.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 22:32:24 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/22 23:12:06 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // https://www.codingame.com/contribute/view/7442f775a87f5625cef86f6d25c2b9fb3956

// // moi
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/

// int main()
// {
//     char k[101];
//     scanf("%[^\n]", k); fgetc(stdin);
//     char s[501];
//     scanf("%[^\n]", s);

//     char *t;
//     t = strdup(s);
//     for (int i = 0; i < strlen(s); i++)
//     {
//         t[i] = toupper(s[i]);

//     }
//     char *v;
//     v = strdup(k);
//     for (int i = 0; i < strlen(k); i++)
//     {
//         v[i] = toupper(k[i]);
        
//     }
//     char *str;
//     str = strstr(t,v);
//     for (int i = 0; i < strlen(s) - strlen(str); i++)    
//         printf("%c", (s[i]));
//     for (int i = 0; i < strlen(k); i++)
//     {
//         printf("%c", toupper(k[i]));
//     }
    
//     printf("%s\n", s+strlen(s) - strlen(str)+strlen(k));

//     return 0;
// }

// // onora

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// #include <ctype.h>

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/

// int main()
// {
//     char keyword[101];
//     scanf("%[^\n]", keyword); fgetc(stdin);
//     char sentence[501];
//     scanf("%[^\n]", sentence);

//     char s[501];
//     for (int j = 0; j < strlen(sentence); j++) {
//         s[j] = tolower(sentence[j]);
//     }

//     for (int j = 0; j < strlen(keyword); j++) {
//         keyword[j] = tolower(keyword[j]);
//     }

//     while (strstr(s, keyword) != NULL) {
//         char *s2 = strstr(s, keyword);
//         int idx = s2-s;
//         for (int i = 0; i < strlen(keyword); i++) {
//             sentence[idx+i] = toupper(s2[i]);
//             s2[i] = toupper(s2[i]);
//         }
//     }

//     printf("%s", sentence);

//     return 0;
// }


// 2e strtok does not work --> must keep extra spaces

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// char *ups(char *str)
// {
//     int n = strlen(str);
//     char *up;

//     // strcpy(up, str);
//     up = malloc(sizeof(char) * (strlen(str)+1));
//     //
//     int i;
//     int j = 0;
//     for(i = 0; i < strlen(str); i++)
//     {
//         if (str[i] != ',')
//         {
//             up[j] = toupper(str[i]);
//             j++;
//         }
//     }    
//     up[j] = 0;
//     // printf("%s\n", up);
//     return (up);
// }

// char *up(char *str)
// {
//     int n = strlen(str);
//     char *up;
 
//     up = malloc(sizeof(char) * (strlen(str)+1)); 
//     int i; 
//     for(i = 0; i < strlen(str); i++)          
//         up[i] = toupper(str[i]);        
//     up[i] = 0;
//     // printf("%s\n", up);
//     return (up);
// }

// int main()
// {
//     char k[101];
//     scanf("%[^\n]", k); fgetc(stdin);
//     char s[501];
//     scanf("%[^\n]", s);
//     // printf("%s\n", s);
//     char *tok = strtok(s, " ");
//     int t = 0;
//     while (tok)
//     {
//         // printf("%s\n", tok);
//         if (t)
//             printf(" ");
//         if (strcmp(ups(tok),ups(k)) == 0)
//             printf("%s", up(tok));
//         else
//             printf("%s", tok);
//         t++;
//         tok = strtok(NULL, " ");
//     }
//     return 0;
// }


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *up(char *str)
{
    int n = strlen(str);
    char *up;
 
    up = malloc(sizeof(char) * (strlen(str)+1)); 
    int i; 
    for(i = 0; i < strlen(str); i++)          
        up[i] = toupper(str[i]);        
    up[i] = 0;
    // printf("%s\n", up);
    return (up);
}

int main()
{
    char k[101];
    scanf("%[^\n]", k); fgetc(stdin);
    char w[101];
    char s[501];
    scanf("%[^\n]", s);    
    // printf("%s\n", s);
    int i = 0;
    int j = 0;
    while (s[i])
    {
        j = 0;
        while (s[i] && isalpha(s[i]))
        {
            w[j] = s[i];
            j++;
            i++;
        }
        w[j] = 0;        
        if (strcmp(up(w), up(k)) == 0)                        
            printf("%s", up(k));               
        else if (w[0])        
            printf("%s", w);                
        else
        {
            printf("%c", s[i]);  
            i++;
        }        
    }    
    return 0;
}