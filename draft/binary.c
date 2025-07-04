/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 03:52:14 by caguillo          #+#    #+#             */
/*   Updated: 2025/07/04 02:05:51 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Binary (string) to long --> strtol

// convert decimal into binary :

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decToBinary_inorder(int n, char *R)
{
	char	B[33];       

	for (int k = 0; k < 32; k++)
	{
		if (n - (int)pow(2, 31 - k) < 0)
			B[k] = '0';
		else
		{
			B[k] = '1';
			n = n - (int)pow(2, 31 - k);
		}
	}
	B[32] = 0;    	
    int j = 0;
    while (B[j] == '0')
        j++;
    if (j == 32)
        j = 31;    
    for (int i = j; i <= 32; i++)
        R[i - j] = B[i];        
}

void decToBinary_inreverse(int n, char *R)
{
	char	B[33];    
	int		k;

	if (n == 0)
	{
        R[0] = '0';
        R[1] = 0;
        return ;
	}	
    k = 0;	
    while (n > 0)
    {
        B[k] = n % 2 + 48;
        n = n / 2;
        k++;
    }	
	B[k] = 0;
    // return (B);	
    for (int j = k - 1; j >= 0; j--)    
        R[k - 1 - j] = B[j];
    R[k] = 0;	
}

void decToBinary_sprintf(int n, char *buff)
{    
    
    for (int i = 31; i >=0; i--)
        sprintf(buff + 31 - i,"%d", ((n >> i) & 1));    
    buff[32] = 0;   
    // sprintf(buff + 32,"%c", '\0');    
}


int	main(void)
{
	int	dec;
    char	B[33];
    char *end = NULL;
    
	scanf("%d", &dec);
	fgetc(stdin);
	// printf("%d\n", dec);
    decToBinary_inorder(dec, B);
	printf("1: %s\n", B);
    printf("%ld\n", strtol(B, &end, 2));
    decToBinary_inreverse(dec, B);
	printf("2: %s\n", B);
    printf("%ld\n", strtol(B, &end, 2));
    decToBinary_sprintf(dec, B);
    printf("3: %s\n", B);
    printf("%ld\n", strtol(B, &end, 2));    
}
