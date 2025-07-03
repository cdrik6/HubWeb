/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binaryArt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 03:45:08 by caguillo          #+#    #+#             */
/*   Updated: 2025/07/03 03:50:14 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// shortest
// https://www.codingame.com/contribute/view/17457d0d791ffda1c343518b964f48a069ea

// tham
// long long x[100],m;char c,d;int n,l,i,j;main(){scanf("%d %c %c",&n,&c,&d);for(i=0;i<n;scanf("%lld",x+i),x[i]>m?m=x[i]:0,i++);l=0;do l++;while(m>>l);for(i=0;i<n;i++,puts(""))for(j=l;j--;)putchar(x[i]>>j&1?d:c);}

// alexdelia
// main(N,l,i,j,m,A,B){scanf("%d %c %c",&N,&A,&B);long X[65],b[65],n[N],t;for(i=0;i<N;i++){scanf("%ld",&n[i]);for(t=n[i]?n[i]:1,l=0;t;t>>=1,l++);m=l>m?l:m;}for(i=0;i<N;i++){for(l=0,t=n[i];l<m;b[m-1-l++]=(t&1)+'0',t>>=1);for(j=0;j<m;j++)putchar(b[j]=='0'?A:B);puts("");}}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int N;
    char B[2];
    char A[2];
    scanf("%d%s%s", &N, B, A); fgetc(stdin);    
    char X[N][64];
    for (int i = 0; i < N; i++) {        
        long long x;
        scanf("%lld", &x); fgetc(stdin);
        // printf("%lld\n", x);
        for (int k = 0; k < 63; k++)
        {            
            if (x % (long long)pow((double)2, (double)(k+1)) == 0)
                X[i][k] = B[0];
            else 
                X[i][k] = A[0];
            x = x - x % (long long)pow((double)2, (double)(k+1));
        }
        X[i][63] = 0;
        // printf("%s\n", X[i]);
    }

    int l = 0;
    for (int i = 0; i < N; i++)
    {
        int j = 62;
        for (j; j >=0; j--)
        {
            if (X[i][j] == A[0])
                break;
        }
        j++;
        l=(l<j)?j:l;
        // printf("%d\n", l);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = l-1; j >=0; j--)
        {
            printf("%c", X[i][j]);
        }
        printf("\n");
    }
    return 0;
}