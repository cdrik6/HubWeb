/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 04:45:11 by caguillo          #+#    #+#             */
/*   Updated: 2024/11/09 04:59:17 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int N;
	scanf("%d", &N);
	int value[99];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &value[i]);
	}
	// for (int i = 0; i < N; i++)
	// {
	// 	printf("%d ", value[i]);
	// }
	int tmp;	
	for (int i = 0; i < N; i++)
	{		
        for (int j = i + 1; j < N; j++)
		{
			if (value[i] > value[j])
			{
				tmp = value[i];
				value[i] = value[j];
				value[j] = tmp;
			}			
		}        
		if (i == N - 1)
			printf("%d\n", value[i]);
		else
			printf("%d ", value[i]);		
	}

	return (0);
}