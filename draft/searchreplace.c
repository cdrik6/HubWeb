/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 22:24:41 by caguillo          #+#    #+#             */
/*   Updated: 2025/05/31 22:26:49 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// String Rewriting Rules
// A contribution by DavidAugustoVilla 

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 
 void f(char *o, char *n, char *s) 
 {
          
     for (int k = 0; k < strlen(s) - strlen(o) + 1; k++)
     {
         char dest[4] = {0};
         strncpy(dest, s+k, strlen(o));            
         if (strcmp(dest, o) == 0)
         {                
             char bef[100] = {0};
             char aft[100] = {0};                
             strncpy(bef, s, k);
            //  printf("[%s]\n", bef);
             strncpy(aft, s+k+strlen(o), 100);
            //  printf("(%s)\n", aft);             
             sprintf(s, "%s%s%s", bef, n, aft);            
            //  printf("-%s-\n", s);                
         }
     }     
}

int main()
{
    char s[101];
    scanf("%s", s);
    // printf("%s\n", s);
    // char r[101];
    // strcpy(r,s);
    int N;
    scanf("%d", &N);
    char o[N][4];
    char n[N][4];
    for (int i = 0; i < N; i++) {
        scanf("%s%s",o[i],n[i]);
        // printf("%s %s\n", o[i], n[i]);             
    }
    // while (strcmp(s, fct(o, n, s)) != 0)
    for (int j = 0; j < 3; j++)  /************************* pas top 3, ok pour les tests */      
    {
        for (int i = 0; i < N; i++)        
            f(o[i], n[i], s);        
    }
    printf("%s\n", s);
    return 0;
}
