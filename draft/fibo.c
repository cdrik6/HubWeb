/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 01:00:58 by caguillo          #+#    #+#             */
/*   Updated: 2025/02/19 22:21:25 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int fibo( int i)
{
	if (i == 0)
		return(0);
	else if (i == 1)
		return(1);	
	else if (i == 2)
		return(1);		
	
	return(fibo(i - 1)  + fibo(i -2));
	
}

int f(int n)
{
	if (n == 0)
		return(0);
	if (n == 1)
		return(1);	
	int a = 0;	
	int b = 1;
	int r;
	for (int i = 2; i <= n; i++)
	{
		r = a + b;
		a = b;
		b = r;
	}
	return (r);
}


int main(int argc, char **argv)
{

	int n = atoi(argv[1]);	
	int i = 0;
	while(i <= n)
	{
		if (i == n)
			printf("%d\n", fibo(i));
		else
			printf("%d ", fibo(i)); 	
		i++;		
	}	
	i = 0;
	while(i <= n)
	{
		if (i == n)
			printf("%d\n", f(i));
		else
			printf("%d ", f(i)); 	
		i++;		
	}	
}
