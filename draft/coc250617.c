/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coc250617.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:33:15 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/17 21:54:56 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.codingame.com/contribute/view/5901d05fb163f21e42e58add76c96c4c8672

// jgiron
// #include <stdio.h>
// #include <string.h>
// main()
// {
//     char s[99];
//     int n,t=0,m;
// scanf("%d%d\n", &n, &m); 
// for (;n;n--) {
// gets(s);
// for (char*a=strchr(s,'#');a!=strrchr(s,'#');a++)
// t+=*a==' ';
// }
// printf("%d\n",t);}

// Khollybri
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// int main()
// {int n,m,N=0;scanf("%d%d", &n, &m);fgetc(stdin);for (int i = 0; i < n; i++){
// char row[m + 1];
// scanf("%[^\n]", row); fgetc(stdin);char* u1 = strchr(row, '#');if (u1 == 0)
// continue;
// char *u2 = strrchr(u1 +1, '#');
// if (u2 == 0)
// continue;       
// for (char *u =u1; u<u2;u++)
// if (*u==' ')
// N++;
//     }
//     printf("%i",N);
//     return 0;
// }


// nk;int main(){
//     int n;
//     int m;
//     scanf("%d%d", &n, &m); fgetc(stdin);
//     for (int i = 0; i < n; i++) {
//         char r[m + 1];
//         scanf("%[^\n]", r); fgetc(stdin);
//         // printf("%s\n", r);
//         int l=strlen(r)-1;
//         // //
//         // int l = 0;
//         // for(int i = 1; i <strlen(r); i++)
//         // {
//         //     if (r[i]=='#')
//         //         l = i;

//         // }
//         //
//         if (r[l]== '#')
//         {            
//             for(int i = 1; i <strlen(r)-1; i++)
//             // for(int i = 1; i <l-1; i++)
//             {
//                 if (r[i]==' ')
//                     k++;
//             }
//         }

//     }
//     char base[m + 1];
//     scanf("%[^\n]", base);

    

//     printf("%d", k);

//     return 0;
// }


// // https://www.codingame.com/contribute/view/463147a57e5045e8a87e09c575650c3143def

// // pantouflon

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
//     char s[31];
//     scanf("%[^\n]", s);
//     char *miss = strchr(s, '?');
//     char *under = strchr(s, '_');
//     if (under == 0) {
//         *miss = '_';
//     } else if (miss < under) {
//         int n = atoi(under + 1);
//         int sum = 0;
//         char *s2 = s;
//         while (s2 != under) {
//             if (s2 != miss) {
//                 sum += *s2;
//             }
//             s2++;
//         }
//         *miss = n - sum;
//     } else {
//         int sum = 0;
//         char *s2 = s;
//         while (s2 != under) {
//                 sum += *s2;
//             s2++;
//         }
//         sprintf(under + 1, "%d", sum % 256);
//     }

//     printf("%s\n", s);

//     return 0;
// }

// // tgallet

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
//     char s[31];
//     scanf("%[^\n]", s);
//     char    *mark = strchr(s, '?');
//     char    *under = strchr(s, '_');

//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");

//     int i = 0;
//     int c = 0;
//     int question;
//     while (s[i] != '_' && s[i])
//     {
//         if (s[i] != '?')
//             c+=s[i];
//         if (s[i] == '?')
//             question = i;
//         i++;
//     }
//     i++;
//     c = c%256;
//     int n = atoi(s + i);
//     if (under == NULL)
//     {
//         s[mark - s] = '_';
//     }
//     else if (mark > under)
//     {
//         char idk[30];
//         sprintf(idk, "%d", c);
//         strcpy(under+1, idk);
//     }
//     else
//     {
//         s[question] = n - c;

//     }
//     printf("%s\n", s);
//     return 0;
// }


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
//     char n[10];
//     char s[31];
//     scanf("%[^\n]", s);
//     int  k = 0;
//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (s[i] == '_')
//         // if (s[i] >= 48 && s[i] < 58)
//         {
//             for (int j = i+1;  j < strlen(s); j++)
//             {
//                 n[j - i - 1] = s[j];
//             }
//             break;

//         }            
//         if (s[i] != '?')
//             k = k + s[i];
//     }
//     // printf("%d\n",atoi(n));
//     // printf("%d\n",k%256);
//     int i;
//     for (i = 0; i < 256; i++)
//     {
//         if ( (k + i)%256 == atoi(n) )
//             break;
//     }
//     // printf("%c\n",i);
//     for (int j = 0; j < strlen(s); j++)
//     {
//         if (s[j] != '?')
//             printf("%c", s[j]);
//         else 
//             printf("%c", i);
//     }

//     // printf("pass_183\n");

//     return 0;
// }


// // shortest
// // https://www.codingame.com/contribute/view/123072713c34e3dd13ffc1d681112cc3cee0ee

// // moi
// c;i;k;main(){char s[27];scanf("%[^\n]",s);c=s[0];for(i=1;i<strlen(s);i++){if(s[i]=='*')k+=c+1;c++;}printf("%d",k);}

// // leo
// r;l;main(c){for(;c=getchar()+1;)c--<65&&(r+=c=l+1),l=c;printf("%d",r);}

// //kholl
// main(){char s[27],c,i=1;gets(s);int n=0;c=*s;while(s[i])n+=(s[i++]==++c?0:c);printf("%i",n);}


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



// // https://www.codingame.com/contribute/view/7442f775a87f5625cef86f6d25c2b9fb3956

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
//     char k[101];
//     scanf("%[^\n]", k); fgetc(stdin);
//     char s[501];
//     scanf("%[^\n]", s);

//     char *t;
//     t = strdup(s);
//     for (int i = 0; i < strlen(s); i++)
//     {
//         t[i] = toupper(s[i]);

//     }
//     char *v;
//     v = strdup(k);
//     for (int i = 0; i < strlen(k); i++)
//     {
//         v[i] = toupper(k[i]);
        
//     }
//     char *str;
//     str = strstr(t,v);
//     for (int i = 0; i < strlen(s) - strlen(str); i++)    
//         printf("%c", (s[i]));
//     for (int i = 0; i < strlen(k); i++)
//     {
//         printf("%c", toupper(k[i]));
//     }
    
//     printf("%s\n", s+strlen(s) - strlen(str)+strlen(k));

//     return 0;
// }

// // onora

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// #include <ctype.h>

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/

// int main()
// {
//     char keyword[101];
//     scanf("%[^\n]", keyword); fgetc(stdin);
//     char sentence[501];
//     scanf("%[^\n]", sentence);

//     char s[501];
//     for (int j = 0; j < strlen(sentence); j++) {
//         s[j] = tolower(sentence[j]);
//     }

//     for (int j = 0; j < strlen(keyword); j++) {
//         keyword[j] = tolower(keyword[j]);
//     }

//     while (strstr(s, keyword) != NULL) {
//         char *s2 = strstr(s, keyword);
//         int idx = s2-s;
//         for (int i = 0; i < strlen(keyword); i++) {
//             sentence[idx+i] = toupper(s2[i]);
//             s2[i] = toupper(s2[i]);
//         }
//     }

//     printf("%s", sentence);

//     return 0;
// }


// // orio
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// #include <math.h>
// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/

// int strncmpi(const char *s1, const char *s2, size_t i) {
//    // printf("%.*s %.*s\n", i, s1, i, s2);
//     while (i--) {
//         if (tolower(*s1++) != tolower(*s2++))
//             return 0;
//     }
    
//     return 1;
// }

// void replace(char* s1, char*s2, int len) {
//     while(len--) {
//         *s1 = toupper(*s2);
//         s1++;
//         s2++;
//     }
// }

// int main()
// {
//     char keyword[101];
//     scanf("%[^\n]", keyword); fgetc(stdin);
//     char sentence[501];
//     scanf("%[^\n]", sentence);
//     for (int i = 0; i < strlen(sentence) - strlen(keyword) + 1; i++) {
//         if (strncmpi(sentence+i, keyword, strlen(keyword))) {
//             replace(sentence+i, keyword, strlen(keyword));
//         }
//     }

//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");
//     printf("%s\n", sentence);

//     return 0;
// }