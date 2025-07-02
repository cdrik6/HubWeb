/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coc250617.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:33:15 by caguillo          #+#    #+#             */
/*   Updated: 2025/07/02 05:22:25 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // shortest
// // https://www.codingame.com/contribute/view/123072713c34e3dd13ffc1d681112cc3cee0ee
// // moi
// c;i;k;main(){char s[27];scanf("%[^\n]",s);c=s[0];for(i=1;i<strlen(s);i++){if(s[i]=='*')k+=c+1;c++;}printf("%d",k);}
// // leo
// r;l;main(c){for(;c=getchar()+1;)c--<65&&(r+=c=l+1),l=c;printf("%d",r);}
// //kholl
// main(){char s[27],c,i=1;gets(s);int n=0;c=*s;while(s[i])n+=(s[i++]==++c?0:c);printf("%i",n);}
// ***********************************  tips  *******************
// s[0] --> *s
// for + strlen --> while
// char s[27];scanf("%[^\n]",s); --> char s[27],c,i=1;gets(s);
// while(s[i]) {} --> macro
// k+=(s[i++]=='*'?c+1:0) --> k+=(s[i++]==++c?0:c) //--> add and incremente same time !
// , !!!!! -->
// n;k;int main()
// {
//     for(int i=0; i<3; i++)
//         n++,printf("%d\n",n),k++,printf("%d\n",k);    
// }
// ***********************************  tips  *******************


// // https://www.codingame.com/contribute/view/4260b86c31459b995a6e1808393b75c3c363

// // moi
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/

// int main()
// {
//     char p[2049];
//     scanf("%[^\n]", p);
//     // // printf("%s\n",p);
//     // int l;
//     // l = pow(2,3) *(p[0] - 48) + pow(2, 2) * (p[1] - 48) + pow(2, 1) * (p[2] - 48) + pow(2, 0) * (p[3] - 48);
//     // printf("%d\n", l);
//     //
//     for (int i = 4; i < strlen(p); i = i + 8 )
//     // for (int i = 4; i < l; i = i + 8 )
//     {
//         int n = 0;
//         n = n + pow(2, 7) * (p[i] - 48);
//         n = n + pow(2, 6) * (p[i+1] - 48);
//         n = n + pow(2, 5) * (p[i+2] - 48);
//         n = n + pow(2, 4) * (p[i+3] - 48);
//         n = n + pow(2, 3) * (p[i+4] - 48);
//         n = n + pow(2, 2) * (p[i+5] - 48);
//         n = n + pow(2, 1) * (p[i+6] - 48);
//         n = n + pow(2, 0) * (p[i+7] - 48);
//         printf("%c", n);
//         // printf("%d\n", n);
//     }

//     // printf("answer\n");

//     return 0;
// }

// // tham
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/

//  int bin_to_dec(const char *bin_segment, int len) {
//     int dec = 0;
//     for (int i = 0; i < len; i++) {
//         dec = dec * 2 + (bin_segment[i] - '0');
//     }
//     return dec;
// }

// int main()
// {
//     char p[2049];
//     scanf("%[^\n]", p);

//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");

//     int current = 0;
//     int len = strlen(p);

//     while (current < len) {
//         if (current + 4 > len) {
//             break; 
//         }

//         int pl_len = bin_to_dec(&p[current], 4);
//         current += 4;

//         for (int i = 0; i < pl_len; i++) {
//             if (current + 8 > len) {
//                 current = len;
//                 break;
//             }
            
//             int ascii_code = bin_to_dec(&p[current], 8);
//             printf("%c", (char)ascii_code);
//             current += 8;
//         }
//     }

//     printf("\n");

//     return 0;
// }

// // orio prisco

// // #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/

// int print_one(char *p) {
//     char len[5] = "\0\0\0\0\0";
//     memcpy(len, p, 4);
    
//     int l = strtol(len, NULL, 2);
//    // printf("%d\n %.4s\n", l,len);
//     for (int i = 0; i <l; i++) {
//         char c[9];
//         memcpy(c, p+4 + i*8, 8);
//         int ch= strtol(c, NULL, 2);
//         printf("%c", ch);
//     }
//     return l;
// }

// int main()
// {
//     char p[2049];
//     scanf("%[^\n]", p);
//     int i= 0;
//     int c;
//     while (p[i] && (c = print_one(p+i)) ) {
//         i+=4+c*8;
//         //printf("%d\n", c);
//     }


//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");

//     printf("\n");

//     return 0;
// }



// shortest
// https://www.codingame.com/contribute/view/17457d0d791ffda1c343518b964f48a069ea

// tham
// long long x[100],m;char c,d;int n,l,i,j;main(){scanf("%d %c %c",&n,&c,&d);for(i=0;i<n;scanf("%lld",x+i),x[i]>m?m=x[i]:0,i++);l=0;do l++;while(m>>l);for(i=0;i<n;i++,puts(""))for(j=l;j--;)putchar(x[i]>>j&1?d:c);}

// alexdelia
// main(N,l,i,j,m,A,B){scanf("%d %c %c",&N,&A,&B);long X[65],b[65],n[N],t;for(i=0;i<N;i++){scanf("%ld",&n[i]);for(t=n[i]?n[i]:1,l=0;t;t>>=1,l++);m=l>m?l:m;}for(i=0;i<N;i++){for(l=0,t=n[i];l<m;b[m-1-l++]=(t&1)+'0',t>>=1);for(j=0;j<m;j++)putchar(b[j]=='0'?A:B);puts("");}}





