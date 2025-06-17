/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sumprime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 04:08:14 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/17 04:23:04 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int p(int n)
{
    if (n < 2)
        return (0);
    for (int i = 2; i*i <=n; i++)
    {
        if (n%i == 0)
        return (0);
    }
    return (1);
}

int comp(void *a, void *b)
{        
    return (*(int*)a - *(int*)b);
}

int main()
{
    int c;
    scanf("%d", &c);
    int n[c];
    for (int i = 0; i < c; i++) {        
        scanf("%d", &n[i]);
    }
    // int temp;
    // for (int i = 0; i < c; i++)
    // {
    //     for (int j = i; j < c; j++)
    //     {
    //             if (n[i] > n [j])
    //             {
    //                 temp = n[i];
    //                 n[i] = n[j];
    //                 n[j] = temp;
    //             }
    //     }    
    // }    

    qsort(n,c,sizeof(int), comp); // replace the bubble sort
    // for (int i = 0; i < c; i++)
    // {      
    //     printf("%d\n", n[i]);
    // }


    int s = n[0];
    for (int i = 1; i < c; i++)
    {
        if (n[i] != n[i-1])
            s = s + n[i];
    }
    // printf("%d\n", s);
    if (p(s) == 1)
        printf("%d is prime\n", s);
    else 
        printf("%d is composite\n", s);

    return 0;
}