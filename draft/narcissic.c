/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   narcissic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 01:51:27 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/25 02:12:02 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// n;m;main()
// {  
//     scanf("%d%d",&m,&n);    
//     double k = 0;
//     for (int i = m+1; i<n;i++)     
//     {
//         char s[99999];
//         sprintf(s,"%d",i);        
//         int p = strlen(s);
//         double t = 0;
//         for (int j = 0; j<p;j++)
//         {
//             // printf("%c\n",s[j]);
//             // printf("%d\n",p);
//             t = t + pow(s[j],p);
//             // printf("%d\n",pow(s[j],p));
//         }
        
//         if (i == t)
//             k++;
//     }
//     printf("%.f",k);    
// }


n;m;main()
{  
    scanf("%d%d",&m,&n);    
    int k = 0;
    for (int i = m+1; i<n;i++)     
    {
        char s[99999];
        sprintf(s,"%d",i);        
        int p = strlen(s);
        int t = 0;
        for (int j = 0; j<p;j++)
            t = t + pow(s[j]-48,p);
        if (i == t)
            k++;
    }
    printf("%d",k);    
}

// shortest
// p;i;j;k;n;m;main(t){scanf("%d%d",&m,&n);for(i=m+1;i<n;i++){char s[99999];sprintf(s,"%d",i);p=strlen(s);t=0;for(j=0;j<p;j++)t+=pow(s[j]-48,p);if(i==t)k++;}printf("%d",k);}