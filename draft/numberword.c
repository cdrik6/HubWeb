/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numberword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:38:24 by caguillo          #+#    #+#             */
/*   Updated: 2025/05/09 04:54:29 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char l[10][100] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Height","Nine"};
    char str[2] = {0};
	//
    char d[61];
    scanf("%[^\n]", d);
	//
    int k = 1;
    for (int i = 0; i < strlen(d); i = i + k)
    {
        k = 1;
		for (int j = i; j < strlen(d); j++)
		{
			if (d[j+1] == d[j])            
               k++;
            else   
               break;            
		}
        sprintf(str, "%c", d[i]);
        if (i == 0)
        {            
            if (k == 1)
                printf("%s", l[atoi(str)]);
            else
			{
                printf("%s", l[k]);
				printf(" %s", l[atoi(str)]);
				printf("s");
			} 
        }
        else
        {
            if (k == 1)
                printf(" %s", l[atoi(str)]);
			else
			{
				printf(" %s", l[k]);
				printf(" %s", l[atoi(str)]);
				printf("s");
			}
        } 
    }
	printf("\n");
    return 0;
}