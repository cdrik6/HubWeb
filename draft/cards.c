/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cards.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 00:29:31 by caguillo          #+#    #+#             */
/*   Updated: 2025/09/20 05:38:15 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://www.codingame.com/contribute/view/7366843ef92b98269f3187dc606a7e1e6968

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



#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


// // works only for descending order :
// int f(char c)
// {
//     char *o = "AKQJT98765432A";
//     for (int t=0;t<14;t++)
//     {
//         if (c == o[t])
//             return (t);        
//     }
//     return (-1);
// }

// int main()
// {    
//     int n;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {        
//         int t = 0;
//         char c[5][2];
//         for (int j = 0; j < 5; j++)
//         {            
//             scanf("%s", c[j]);
//             if (j>0 && f(c[j][0]) != f(c[j-1][0]) + 1)
//                 t = 1;
//         }
//         if (t)
//             printf("false\n");
//         else    
//             printf("true\n");
//     }
// }

int main()
{
    int n;
    scanf("%d", &n);
    char s[] = "A23456789TJQKA";
    
    for (int i = 0; i < n; i++)
    {                
        int h[14] = {0};
        for (int j = 0; j < 5; j++)
        {
            char c[2] = "";
            scanf("%s", c);
            if (c[0] == 'A') { h[0] = 1; h[13] = 1;}
            else if (c[0] == 'T') { h[9] = 1; }
            else if (c[0] == 'J') { h[10] = 1; }
            else if (c[0] == 'Q') { h[11] = 1; }
            else if (c[0] == 'K') { h[12] = 1; }
            else { h[c[0]-48-1] = 1; }
        }
        int t = 0;
        int win = 0;
        for (int k = 0; k < 14; k++)
        {
            if (h[k] == 1)
                t++;
            else
                t = 0;
            if (t == 5)
            {
                win = 1;
                break;
            }
        }            
        // printf("%d\n", k);        
        if (win == 0)
            printf("false\n");
        else
            printf("true\n");
    }
    return 0;
}

// // js
// const n = parseInt(readline());
// for (let i = 0; i < n; i++) {
//     let c = readline().split(' ');   
//     let h = [0,0,0,0,0,0,0,0,0,0,0,0,0,0];    
//     for (let j = 0; j < 5; j++) {
//         if (c[j] === 'A') { h[0] = 1; h[13] = 1;}
//         else if (c[j] === 'T') { h[9] = 1}
//         else if (c[j] === 'J') { h[10] = 1}
//         else if (c[j] === 'Q') { h[11] = 1}
//         else if (c[j] === 'K') { h[12] = 1}
//         else { h[c[j]-1] = 1}
//     } 
//     let t = 0;
//     let w = false;
//     for (let k = 0; k < 14; k++) {
//         if ( h[k] === 1)
//             t++;
//         else 
//             t = 0;
//         if (t === 5)
//         {
//             w = true
//             break;
//         }
//     }
//     console.log(w);
// }