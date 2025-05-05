/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 03:11:49 by caguillo          #+#    #+#             */
/*   Updated: 2025/04/29 04:05:45 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A contribution by StepBack13
// Approved by Gorbit99 , gareve and Manwi23
//  Goal
// Take an input integer and print:
// Letters if there are more letters (a-f) in its hexadecimal representation
// Digits if there are more digits (0-9); or
// Equal if digits and letters are balanced

// Example:
// For input 29 the hex representation is 1d so the result is Equal.
// Input
// Line 1: An integer n to be converted into hexadecimal
// Output
// A single line: indicating Letters, Digits or Equal depending on the balance of letters and digits in the hexadecimal representation of the integer.
// Constraints
// 0 ≤ n ≤ 100,000
// Example
// Input // 15 // Output // Letters
// Tests
// 15 letters
// 150 digits
// 30 equla
// 444 letters
// 13020 equal

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    char str[99];
    sprintf(str, "%x", n);
    // printf("%s\n", str);    
    int d = 0;
    int i = 0;
    while (str[i])
    {
        if (isdigit(str[i]))
            d++;        
        i++;
    }
    if (i - d == d)
        printf("Equal\n");
    else if (i - d > d)
        printf("Letters\n");
    else if (i - d < d)
        printf("Digits\n");
}


// strtol(hexstr, NULL, 16); Read a hex string into an integer 
// long a = strtol(str, NULL, 16);