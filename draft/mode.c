/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mode.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 01:03:41 by caguillo          #+#    #+#             */
/*   Updated: 2025/05/09 05:31:16 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // mode letters numbers symbols NONE (NONE no modif 0)
// input
// letters -->enleve lettres
// yo231

// ouput 
// 231
// 150
// (somme lettres modifies) --> qui restent en fait


// // Mathieu js

// mode = readline()
// s = readline()
// if(mode.includes("NONE"))
//     console.log(s)
// else{
//     if(mode.includes("letters"))
//         s = s.replace(/[a-zA-Z]/ig,"")
//     if(mode.includes("numbers"))
//         s = s.replace(/[0-9]/ig,"")
//     if(mode.includes("symbols"))
//         s = s.replace(/[^0-9a-zA-Z]/ig,"")
//     console.log(s)
// }
// print([...(new Set(s))].reduce((r,x)=>r + x.charCodeAt(0), 0))

// // victor ruby
// m,s=gets,gets.chomp
// m['NONE']||%w(letters numbers symbols).zip(%w(A-Za-z 0-9 ^A-Za-z0-9)).each{|k,v|s.tr! v,''if m[k]}
// puts s,s.chars.uniq.sum(&:ord)


// twyzzi C 20%

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/

// int main()
// {
//     char mode[31];
//     scanf("%[^\n]", mode); fgetc(stdin);
//     char s[41];
//     scanf("%[^\n]", s);
//     int tot = 0;
//     for (int i =0; s[i];i++)
//     {
//         if (isalpha(s[i]) && *mode == 'l'){}
//         else if (isdigit(s[i]) && *mode == 'n'){}
//         else if (ispunct(s[i]) && *mode == 's'){}
//         else
//         {
//             tot += s[i];
//             printf("%c", s[i]);
//         }
//     }
//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");

//     printf("\n%d", tot);

//     return 0;
// }

#include <ctype.h>

int main()
{
    char mode[31];
    scanf("%[^\n]", mode); fgetc(stdin);
    bool m[4] = {false}; // NONE, letters, numbers, symbol;
    //
    char s[41];
    scanf("%[^\n]", s);
    int tot = 0;
    //
    if (strstr(mode, "N"))
        m[0] = true;
    if (strstr(mode, "let"))
        m[1] = true;
    if (strstr(mode, "num"))
        m[2] = true;
    if (strstr(mode, "sym"))
        m[3] = true; 
    // for (int i = 0; i < 4; i++)    
    // {
    //     if (m[i])
    //         puts("true");
    //     else
    //         puts("false");
    // }        
    if (m[0])
    {
        for (int i = 0; s[i]; i++)
            tot = tot + s[i];
        printf("%s\n",s);
        printf("%d\n",tot);
    }
    else
    {
        for (int i = 0; s[i]; i++)
        {
            if (isalpha(s[i]) && m[1])
            {
                // tot = tot + s[i];
            }
            else if (isdigit(s[i]) && m[2])
            {
                // tot = tot + s[i];
            }
            else if (ispunct(s[i]) && m[3])
            {
                // tot = tot + s[i];
            }
            else
            {                
                tot = tot + s[i];
                printf("%c", s[i]);
            }
        }        
        printf("\n%d\n", tot);
    }  
    return 0;
}