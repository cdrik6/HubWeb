/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 01:00:58 by caguillo          #+#    #+#             */
/*   Updated: 2024/11/07 02:05:12 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


int main(void)
{

	int n = 10;	
	int i = 0;	
	while(i < n)
	{
		printf("%d\n", fibo(i)); 	
		i++;		
	}
}
