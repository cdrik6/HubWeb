/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleancode.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 23:32:14 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/14 00:07:54 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// shortest 
// Cleaning code length By CCCStudioGame 
// https://www.codingame.com/contribute/view/122643ab3830e735cca09722dde2685d06e885

// rRyoTa 314 size
// #include<stdio.h>
// l,r,i,j,k;char s[257];main(){scanf("%d",&l);fgetc(stdin);for(i=0;i<l;i++){fgets(s,257,stdin);k=strlen(s);if(k>0&&s[k-1]=='\n')s[--k]=0;j=0;while(j<k&&s[j]==' ')j++;if(j<k-1&&s[j]=='/'&&s[j+1]=='/'){r+=k;continue;}r+=j;j=k-1;while(j>=0&&s[j]==' ')j--,r++;if(j>=0&&s[j]==';')r++;}printf("%d\n",r);}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

i;int main()
{
    int r;
    int k;
    scanf("%d", &k); fgetc(stdin);
    for (int j = 0; j < k; j++) {
        char l[257];
        scanf("%[^\n]", l); fgetc(stdin);
        // printf("%s\n",l);
        int g=strlen(l);        
        i=0;
        while(isspace(l[i]))
        {
            r++;
            i++;
        }
        if (i<g-1 && l[i]=='/' && l[i+1]=='/')
        {
            r+=g-i;
            continue;
        }
        i=g-1;
        while(isspace(l[i]))
        {
            r++;
            i--;
        }            
        if (l[i]==';')                    
            r++;            
        
    }
    printf("%d\n",r);
    return 0;
}

// //
// #include <stdio.h>
// g;j;r;k;main(i){scanf("%d",&k);fgetc(stdin);for(j=0;j<k;j++){char l[257];scanf("%[^\n]",l);fgetc(stdin);g=strlen(l);i=0;while(isspace(l[i])){r++;i++;}if(i<g-1&&l[i]=='/'&&l[i+1]=='/'){r+=g-i;continue;}i=g-1;while(isspace(l[i])){r++;i--;}if(l[i]==';')r++;}printf("%d",r);}