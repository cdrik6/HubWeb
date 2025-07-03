/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 03:52:14 by caguillo          #+#    #+#             */
/*   Updated: 2025/07/03 04:28:52 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// transform a decimal into binary

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int dec;
    scanf("%d", &dec); fgetc(stdin);
    // printf("%d\n", dec);
    char B[33];
    for (int k = 0; k < 32; k++)
    {
        if (dec - (int)pow(2,31-k) < 0)
            B[k] = '0';
        else 
        {
            B[k] = '1';
            dec = dec - (int)pow(2,31-k);            
        }
    }
    B[32] = 0;
    
    printf("%s\n", B);    
}
    
