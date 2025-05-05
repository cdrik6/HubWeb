/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 21:37:24 by caguillo          #+#    #+#             */
/*   Updated: 2025/05/06 00:36:34 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    // printf("%d\n", n);
	
    // int d = 0;
    // while ( n/3 > 0)
    // {
    //     d++;
    //     n = n / 3;
    // }
    // // d = d + n /3;
    // // int k = n % 3;
    // if (n%3 == 0)
    //     printf("%d\n", n / 3);
    // else 
    //     printf("%d\n", n/3 + (n%3)/3);
    //     // printf("%d\n", n / 3 + n%3);
	
	
    // printf("%d\n", n/3 + (n/3)/3 + ((n/3)/3)/3 + (((n/3)/3)/3)/3 + ((((n/3)/3)/3)/3)/3 + );

	// int d = 0;
	// int r = 0;
	// while (n / 3 > 0)
	// {
	// 	d = d + n/3;
	// 	r = r + n%3;
	// 	n = n/3;
	// }
	// r = r + n%3;
	// while (r / 3 > 0)
	// {
	// 	d = d + r/3;
	// 	r = r + n%3;
	// 	r = r/3;
	// }
	
	int d = 0;	
	while (n >= 3)
	{
		d++;
		n = n - 3;
		if (d % 3 == 0)		
			d++;
	}
	// printf("%d\n", d);
	// printf("%d\n", r);
    printf("%d\n", d + (n + d%3)/3);
	
    return 0;
}

// // Victor
// import sys
// import math

// n = int(input())
// r=0
// while n>=3:
//     n += 1
//     n -= 3
//     r += 1

// print(r)

// // Leo
// printf("%d\n", n/2 -1 + n%2);

// // tuteur_
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int total;
//     int tmp = n;
//     while (tmp >= 3) 
//     {
//         int new = tmp / 3;
//         total += new;
//         tmp = tmp % 3 + new;
//     }

//     printf("%d\n", total);

//     return 0;
// }