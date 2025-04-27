/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cards.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 00:29:31 by caguillo          #+#    #+#             */
/*   Updated: 2025/04/28 01:11:33 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// shortest
// A contribution by ZweiPunktFuenf
// Approved by nuss_ecke , xzxy and vinc-r
//  Goal
// You must determine for every hand if it is a straight in Texas Holdem Poker.

// CARDS
// A card is represented by one character for the value (we ignore the suit).
// • values (descending order): A, K, Q, J, T, 9, 8, 7, 6, 5, 4, 3, 2, A

// HANDS
// Each input line containts a player's hand of 5 cards.
// You only have to determine whether a hand is a straight. A straight is 5 consecutive cards.
// An Ace counts as both high value (A, K, Q, J, T) and low value (5, 4, 3, 2, A).
// Input
// Line 1: An integer N for the number of hands to check.
// Next N lines: Five space separated cards, each one character for the value of the card.
// Output
// N Lines:true if the hand is a straight, false otherwise.
// Constraints
// 1 ≤ N ≤ 100
// Example
// Input

// 3
// 9 8 7 6 5
// K Q J T 9
// K Q J 8 7

// Output

// true
// true
// false

// works only for descending order :

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int f(char c)
{
    char *o = "AKQJT98765432A";
    for (int t=0;t<14;t++)
    {
        if (c == o[t])
            return (t);        
    }
    return (-1);
}

int main()
{    
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {        
        int t = 0;
        char c[5][2];
        for (int j = 0; j < 5; j++)
        {            
            scanf("%s", c[j]);
            if (j>0 && f(c[j][0]) != f(c[j-1][0]) + 1)
                t = 1;
        }
        if (t)
            printf("false\n");
        else    
            printf("true\n");
    }
}