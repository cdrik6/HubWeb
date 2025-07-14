/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   training6.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 01:03:56 by caguillo          #+#    #+#             */
/*   Updated: 2025/07/15 01:20:23 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// int main()
// {
//     char s[257];
//     scanf("%[^\n]", s); 
// 	int k = 0;
//     char *v = "aeiouAEIOU";    // read-only sinon v[] 
//     int i = 0;	
//     while(s[i])
//     {   
//         char *fd = strchr(v, s[i]);        
//         // if (fd == NULL)        
//         //     printf("%c no voyel\n", s[i]);        
//         // else
//         //     printf("%c voyel\n", s[i]);
// 		if (!fd)
// 			k+=s[i];
//         i++;   
//     }
//     printf("%d\n", k);
// }

int p(int n)
{
	if (n < 2)
		return (0);
	for (int i = 2; i*i<=n; i++)
	{
		if (n%i == 0)
			return (0);
	}
	return (1);
}



