/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_nbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 05:21:47 by caguillo          #+#    #+#             */
/*   Updated: 2025/07/02 05:22:36 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[31];
    scanf("%[^\n]", s);
    if (strchr(s,'_') == NULL)
    {
        int i = 0;
        while (s[i])
        {
            if (s[i] == '?')
                s[i] = '_';
            i++;
        }
        printf("%s\n",s);
    }
    else
    {
        char m[31];
        char n[31]; 
        int t = 0;
        int i = 0;       
        int j = 0;
        while (s[i])        
        {
            if (s[i] == '_')
            {
                t = 1;
                m[i] =0;
                i++;
            }
            if (t == 0)
                m[i] = s[i];
            else            
            {
                n[j] = s[i];
                j++;
            }
            i++;
        }
        n[j] = 0;
        // printf("%s\n",m);
        // printf("%s\n",n);
        if (strchr(m,'?'))
        {
            int r = 0;
            int l = 0;
            for (int k=0;k < strlen(m); k++)
            {
                if (m[k] != '?')
                    r = r + m[k];
                else     
                    l = k;
            }
            m[l] = (atoi(n) - r )% 256;
            // printf("%c\n",m[l]);
        }
        else
        {
            int r = 0;
            int l = 0;
            for (int k=0;k < strlen(m); k++)            
                r = r + m[k];
            l = r %256;    
            char str[31];
            sprintf(str, "%d", l);
            for (int k=0;k < strlen(n); k++)
            {
                n[k] = str[k];
            }            
            
        } 
        printf("%s_%s\n",m,n);
    }    
    return 0;
}

// // https://www.codingame.com/contribute/view/463147a57e5045e8a87e09c575650c3143def

// // pantouflon

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
//     char s[31];
//     scanf("%[^\n]", s);
//     char *miss = strchr(s, '?');
//     char *under = strchr(s, '_');
//     if (under == 0) {
//         *miss = '_';
//     } else if (miss < under) {
//         int n = atoi(under + 1);
//         int sum = 0;
//         char *s2 = s;
//         while (s2 != under) {
//             if (s2 != miss) {
//                 sum += *s2;
//             }
//             s2++;
//         }
//         *miss = n - sum;
//     } else {
//         int sum = 0;
//         char *s2 = s;
//         while (s2 != under) {
//                 sum += *s2;
//             s2++;
//         }
//         sprintf(under + 1, "%d", sum % 256);
//     }

//     printf("%s\n", s);

//     return 0;
// }

// // tgallet

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
//     char s[31];
//     scanf("%[^\n]", s);
//     char    *mark = strchr(s, '?');
//     char    *under = strchr(s, '_');

//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");

//     int i = 0;
//     int c = 0;
//     int question;
//     while (s[i] != '_' && s[i])
//     {
//         if (s[i] != '?')
//             c+=s[i];
//         if (s[i] == '?')
//             question = i;
//         i++;
//     }
//     i++;
//     c = c%256;
//     int n = atoi(s + i);
//     if (under == NULL)
//     {
//         s[mark - s] = '_';
//     }
//     else if (mark > under)
//     {
//         char idk[30];
//         sprintf(idk, "%d", c);
//         strcpy(under+1, idk);
//     }
//     else
//     {
//         s[question] = n - c;

//     }
//     printf("%s\n", s);
//     return 0;
// }


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
//     char n[10];
//     char s[31];
//     scanf("%[^\n]", s);
//     int  k = 0;
//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (s[i] == '_')
//         // if (s[i] >= 48 && s[i] < 58)
//         {
//             for (int j = i+1;  j < strlen(s); j++)
//             {
//                 n[j - i - 1] = s[j];
//             }
//             break;

//         }            
//         if (s[i] != '?')
//             k = k + s[i];
//     }
//     // printf("%d\n",atoi(n));
//     // printf("%d\n",k%256);
//     int i;
//     for (i = 0; i < 256; i++)
//     {
//         if ( (k + i)%256 == atoi(n) )
//             break;
//     }
//     // printf("%c\n",i);
//     for (int j = 0; j < strlen(s); j++)
//     {
//         if (s[j] != '?')
//             printf("%c", s[j]);
//         else 
//             printf("%c", i);
//     }

//     // printf("pass_183\n");

//     return 0;
// }
