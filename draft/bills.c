/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bills.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:31:38 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/04 01:47:48 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A lazy banker By informaticienzero 
// https://www.codingame.com/contribute/view/1121feae3b94d146df78469feac62b33ede2


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[27];
    scanf("%[^\n]", s);
    int n;
    scanf("%d", &n);
    int b[30];
    char *tok = strtok(s, " ");
    int  k = 0;
    while (tok)
    {
        b[k]= atoi(tok);
        // printf("%d ",b[k]);                
        k++;
        tok = strtok(NULL, " ");
    }
    int r = 0;
    int p = 0;
    for (int i = k - 1; i >=0; i--)
    {        
        if (p == 0)
        {
            r = n/b[i];            
            if (r!=0)
            {
                printf("%dx%d",r,b[i]);                
                n = n - r * b[i];
                p++; //******************************* ce qu'il manquait */
            }
        }
        else 
        {
            r = n/b[i];
            if (r!=0)
            {

                printf(" %dx%d",r,b[i]);                
                n = n - r * b[i];
            }
        }
    }
    
    // printf("total\n");

    return 0;
}