/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   happyface.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 03:55:40 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/17 03:55:54 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.codingame.com/ide/demo/1002585538d881f47ae3ea2e7b0c153df0c82e6

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
    int r = 0;
    char f[36];
    scanf("%[^\n]", f);
    // printf("%s", f);
    // char h1[3];
    // char h2[4];
    // char s1[3];
    // char s2[4];    
    // for (int i=0; i < strlen(f); i++)
    // {        
    //     if (i < strlen(f) - 2)
    //     {
    //         h2[0] = f[i];
    //         h2[1] = f[i+1];
    //         h2[2] = f[i+2];
    //         h2[3] = 0;
    //         if (strcmp(h2, "^_^") == 0) 
    //             r++;
    //         // printf("%s\n", h2);
    //     }
    //     if (i < strlen(f) - 1)
    //     {
    //         h1[0] = f[i];
    //         h1[1] = f[i+1];
    //         h1[2] = 0;            
    //         if (strcmp(h1, "=)") == 0) 
    //             r++;
    //         // printf("%s\n", h1);
    //     }
    //     if (i < strlen(f) - 2)
    //     {
    //         s2[0] = f[i];
    //         s2[1] = f[i+1];
    //         s2[2] = f[i+2];
    //         s2[3] = 0;
    //         if (strcmp(s2, ">_<") == 0) 
    //             r--;
    //     }
    //     if (i < strlen(f) - 1)
    //     {
    //         s1[0] = f[i];
    //         s1[1] = f[i+1];
    //         s1[2] = 0;           
    //         if (strcmp(s1, ":(") == 0) 
    //             r--;
    //     }
    // }   
    char *str;
    str = strstr(f, "=)");    
    while (str)
    {
        r++;
        str = strstr(str+2, "=)");
    }
    str = strstr(f, "^_^");    
    while (str)
    {
        r++;
        str = strstr(str+3, "^_^");
    }
    str = strstr(f, ":(");    
    while (str)
    {
        r--;
        str = strstr(str+2, ":(");
    }
    str = strstr(f, ">_<");    
    while (str)
    {
        r--;
        str = strstr(str+3, ">_<");
    }

    printf("%d\n",r);
    return 0;
}