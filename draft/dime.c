/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dime.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 02:21:10 by caguillo          #+#    #+#             */
/*   Updated: 2024/11/22 02:37:09 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * quarter = $0.25
 * dime = $0.10
 * nickel = $0.05
 * penny = $0.01
 **/

int main()
{
    char s[10001];
    scanf("%[^\n]", s);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    char m[30];
    float r = 0;
    int i = 0;
    while (s[i])
    {
                
        int j = 0;
        while (s[i] && s[i] != 32 )
        {
            m[j] = s[i];
            i++;
            j++;
        }
        m[j] = 0;
        if (strcmp(m,"dime") == 0)
            r = r + 0.10;
        if (strcmp(m,"penny") == 0)
            r = r + 0.01;
        if (strcmp(m,"nickel") == 0)
            r = r + 0.05;
        if (strcmp(m,"quarter") == 0)
            r = r + 0.25;
        i++;
    }

    printf("$%.2f\n", r);

    

// avec strtok

    r = 0;    
    char *tok = strtok(s, " ");
    while (tok)
    {
        if (strcmp(tok,"dime") == 0)
            r = r + 0.10;
        if (strcmp(tok,"penny") == 0)
            r = r + 0.01;
        if (strcmp(tok,"nickel") == 0)
            r = r + 0.05;
        if (strcmp(tok,"quarter") == 0)
            r = r + 0.25;
        tok = strtok(NULL, " ");
    }       
    printf("$%.2f\n", r);

    return 0;
}
