/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapvalue.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 23:15:20 by caguillo          #+#    #+#             */
/*   Updated: 2025/05/23 01:16:10 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//shortest

// In a list a of n integers, your goal is to swap the value m and the value at index m.
// The list is 0-indexed.
// If m is not a key of the list a, output 'OUT OF RANGE'.
// If m is not a value of the list a, output 'NOT IN LIST'
// Input
// Line 1 : an integer n (the length of the list)
// Line 2 : a list a of n integers separated with spaces.
// Line 3 : an integer m (the value and the key to invert).
// Output
// A single line : the list a with value m and value at index m swapped, or 'OUT OF RANGE', or 'NOT IN LIST'
// Constraints
// 0 < n
// 0 <= m
// Array a includes at most 1 value m
// m can not be 'OUT OF RANGE' and 'NOT IN LIST' at the same time
// Example
// Input

// 9
// 9 8 7 6 5 4 3 2 1
// 2

// Output

// 9 8 2 6 5 4 3 7 1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// int main()
// {
//     int n;
//     scanf("%d", &n); fgetc(stdin);
//     char a[101];
//     scanf("%[^\n]", a);
//     int m;
//     scanf("%d", &m);
//     if (m >= n)
//         return(puts("OUT OF RANGE"));    
//     for (int i = 0; i < 2*n-1; i=i+2) //ne marche plus pour integers > 9
//     {        
//         char str[2];
//         sprintf(str,"%c",a[i]);
//         if (atoi(str)==m)
//         {            
//             a[i] = a[2*m]; 
// 			   a[2*m] = m + 48;           
//             return(printf("%s\n", a));
//         }
//     }    
//     puts("NOT IN LIST");
//     return 0;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n); fgetc(stdin);
//     char a[101];
//     scanf("%[^\n]", a);
//     int m;
//     scanf("%d", &m);
//     if (m >= n)
//         return(puts("OUT OF RANGE")); 
// 	char *tok = strtok(a," ");	
// 	char *b[n];
// 	int i = 0;
// 	while (tok)	
// 	{
// 		b[i] = tok;
// 		i++;			
// 		tok = strtok(NULL," ");	
// 	}    
//     puts("NOT IN LIST");
//     return 0;
// }

int main()
{
    int n;
    scanf("%d", &n); fgetc(stdin);    
    int k[99];
    for (int i = 0; i < n; i++)        
        scanf("%d", &k[i]);        
    int m;
    scanf("%d", &m);
    if (m >= n)
        return(puts("OUT OF RANGE")); 
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if (k[i] == m)
        {
            k[i] = k[m];
            k[m] = m;
            l = 1;   
        }                              
    }
    if (l == 0)    	
        return(puts("NOT IN LIST"));
    printf("%d", k[0]);    
    for (int i = 1; i < n; i++)
        printf(" %d", k[i]);    
}