/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mode.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 01:03:41 by caguillo          #+#    #+#             */
/*   Updated: 2025/05/06 01:07:43 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// mode letters numbers symbols NONE (NONE no modif 0)
input
letters -->enleve lettres
yo231

ouput 
231
150
(somme lettres modifies)


// Mathieu js

mode = readline()
s = readline()
if(mode.includes("NONE"))
    console.log(s)
else{
    if(mode.includes("letters"))
        s = s.replace(/[a-zA-Z]/ig,"")
    if(mode.includes("numbers"))
        s = s.replace(/[0-9]/ig,"")
    if(mode.includes("symbols"))
        s = s.replace(/[^0-9a-zA-Z]/ig,"")
    console.log(s)
}
print([...(new Set(s))].reduce((r,x)=>r + x.charCodeAt(0), 0))

// victor ruby
m,s=gets,gets.chomp
m['NONE']||%w(letters numbers symbols).zip(%w(A-Za-z 0-9 ^A-Za-z0-9)).each{|k,v|s.tr! v,''if m[k]}
puts s,s.chars.uniq.sum(&:ord)


// twyzzi C 20%

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    char mode[31];
    scanf("%[^\n]", mode); fgetc(stdin);
    char s[41];
    scanf("%[^\n]", s);
    int tot = 0;
    for (int i =0; s[i];i++)
    {
        if (isalpha(s[i]) && *mode == 'l'){}
        else if (isdigit(s[i]) && *mode == 'n'){}
        else if (ispunct(s[i]) && *mode == 's'){}
        else
        {
            tot += s[i];
            printf("%c", s[i]);
        }
    }
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("\n%d", tot);

    return 0;
}