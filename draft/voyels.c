/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   voyels.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 23:28:27 by caguillo          #+#    #+#             */
/*   Updated: 2025/04/28 00:29:28 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    char s[257];
    scanf("%[^\n]", s); 

    char *v = "aeiouAEIOU";    // read-only sinon v[] 
    int i = 0;
    while(s[i])
    {   
        char *fd = strchr(v, s[i]);        
        if (fd == NULL)        
            printf("%c", s[i]);        
        else
            printf("%s\n", fd);        
        i++;   
    }
    printf("\n");
}
