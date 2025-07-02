/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pillars.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 04:41:12 by caguillo          #+#    #+#             */
/*   Updated: 2025/07/02 04:43:03 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// https://www.codingame.com/contribute/view/5901d05fb163f21e42e58add76c96c4c8672

// jgiron
// #include <stdio.h>
// #include <string.h>
// main()
// {
//     char s[99];
//     int n,t=0,m;
// scanf("%d%d\n", &n, &m); 
// for (;n;n--) {
// gets(s);
// for (char*a=strchr(s,'#');a!=strrchr(s,'#');a++)
// t+=*a==' ';
// }
// printf("%d\n",t);}

// Khollybri
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// int main()
// {int n,m,N=0;scanf("%d%d", &n, &m);fgetc(stdin);for (int i = 0; i < n; i++){
// char row[m + 1];
// scanf("%[^\n]", row); fgetc(stdin);char* u1 = strchr(row, '#');if (u1 == 0)
// continue;
// char *u2 = strrchr(u1 +1, '#');
// if (u2 == 0)
// continue;       
// for (char *u =u1; u<u2;u++)
// if (*u==' ')
// N++;
//     }
//     printf("%i",N);
//     return 0;
// }


// nk;int main(){
//     int n;
//     int m;
//     scanf("%d%d", &n, &m); fgetc(stdin);
//     for (int i = 0; i < n; i++) {
//         char r[m + 1];
//         scanf("%[^\n]", r); fgetc(stdin);
//         // printf("%s\n", r);
//         int l=strlen(r)-1;
//         // //
//         // int l = 0;
//         // for(int i = 1; i <strlen(r); i++)
//         // {
//         //     if (r[i]=='#')
//         //         l = i;

//         // }
//         //
//         if (r[l]== '#')
//         {            
//             for(int i = 1; i <strlen(r)-1; i++)
//             // for(int i = 1; i <l-1; i++)
//             {
//                 if (r[i]==' ')
//                     k++;
//             }
//         }

//     }
//     char base[m + 1];
//     scanf("%[^\n]", base);

    

//     printf("%d", k);

//     return 0;
// }


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    int n;
    int m;
    int k;
    scanf("%d%d", &n, &m); fgetc(stdin);
    for (int i = 0; i < n; i++)
    {
        char r[m + 1];
        scanf("%[^\n]", r); fgetc(stdin);
        int j = 0;        
        while (r[j] && r[j] != '#')        
            j++;
        if (j != m)
        {
            int t = 0;
            while (r[j])
            {            
                if (r[j] != '#')
                    t++;
                if (r[j] == '#')
                {
                    k = k + t;
                    t = 0;
                }
                j++;    
            }
        }            
    }
    char b[m + 1];
    scanf("%[^\n]", b);
    
    printf("%d\n", k);

    return 0;
}

