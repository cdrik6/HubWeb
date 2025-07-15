/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coc250715.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:45:39 by caguillo          #+#    #+#             */
/*   Updated: 2025/07/15 23:37:53 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// training G S B 
// https://www.codingame.com/ide/demo/725972bcca262e1b13f73a35db519e2453e6a1

// enough space -- shortest
// https://www.codingame.com/contribute/view/68826edf2bb31ff943486897ecb632447222a

// axbrisse
// #include<string.h>
// w,c;char f[301],*t;main(l){scanf("%d\n%[^\n]",&l,f);for(t=strtok(f," ");t&&l-c>strlen(t);t=strtok(0," "))c+=printf(" %s"+!w++,t);printf("\n%d words\n%d characters long",w,c);}

// tamtam
// w=1;main(l){char s[999],*p=s,*q=s;scanf("%d\n",&l);gets(s);while(*p){for(;*p&&*p!=32;p++);if(p-s<=l)q=p;else break;if(*p)p++;}*q=0;for(p=s;*p;p++)if(*p==32)w++;printf("%s\n%d words\n%d characters long",s,w,strlen(s));}


// dec to binary -- shortest
// https://www.codingame.com/contribute/view/577653a55b06719a3e7020ceaa6e0e28738a7

// Nabil
// main(l){int N,R;scanf("%d",&N);while(N){R=R<<1|N&1;N>>=1;}printf("%d",R);}

// Malfa
// #include <stdio.h>
// int main(){int N,n,t,j;scanf("%d",&N);n = 0;t = N;j = 0;for (;t>0;t/=2){j++;}for (int i=0;i<j;i++){n=n*2+((N>>i)&1);}printf("%i\n",n);}

// c++ flying pudding
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int n;cin >> n; cin.ignore();
//     string res = "";
//     while (n > 0){res = (n % 2 ? "1" : "0") + res;n /= 2;}
//     size_t pos = res.find('1');
//     string r = res.substr(pos);
//     reverse(r.begin(), r.end());
//     int f = stoi(r, nullptr, 2);
//     cout << f << endl;
// }

// Zig Zag shortest
// https://www.codingame.com/contribute/view/126504864e7133e8ebd16e670b7e00f3797c70

// tam tam
// main(n,s,i,j,r){for(scanf("%d%d",&n,&s),i=0;i<n*n;j=i%n,r=i/n,printf("%d%c",s+j*n+(j&1?n-1-r:r),++i%n?32:10));}

// axel
// i,j;main(n,s){for(scanf("%d\n%d",&n,&s);i++<n;)for(j=0;j++<n;)printf("%d%c",s+j*n-(j%2?n-i+1:i),j==n?'\n':' ');}

// alter GNU
// #include <stdio.h>
// int main()
// {
//     int n;scanf("%d",&n);int s;scanf("%d", &s);
//     int M[n][n];
//     for (int i=0;i<n;i++)
//     {
//         if(i%2)
//         {
//             for (int j=n-1;j>=0;j--)
//                 M[j][i]=s++;
//         }
//         else
//         {
//             for (int j=0;j<n;j++)
//                 M[j][i]=s++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d",M[i][j]);
//             if (j + 1 < n)
//                 printf(" ");
//         }
//       printf("\n");
//     }
//     return 0;
// }

// candy
// https://www.codingame.com/contribute/view/9677195cdfa1a9e1af1806a02e277a52650a9

// axel
// int main()
// {
//     int r;
//     scanf("%d", &r);
//     int n;
//     scanf("%d", &n);
//     int z=0;
//     for (int i = 0; i < n; i++) {
//         char l[101];
//         scanf("%s", l);
//         if (strcmp("Gumball",l)==0)z+=4;
//         else if (strcmp("Chocolate",l)==0)z+=7;
//         else if (strcmp("Jellybeans",l)==0)z+=10;
//         else if (strcmp("Cotton_Candy",l)==0)z+=11;
//         else {
//             printf("Invalid Input.");
//             exit(0);
//         }
//     }
//     printf(z>r+5 ? "Too Sweet!" : z>=r-5 ? "Just Right." : "Blegh!");
//     return 0;
// }

// moi
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     int n;
//     scanf("%d", &n);
//     int r = 0;
//     for (int i = 0; i < n; i++) {
//         char l[101];
//         scanf("%s", l);
//         if (l[0]=='G')
//             r =r + 4;
//         else if (l[0]=='C')
//             r =r + 7;
//         else if (l[0]=='J')
//             r =r + 10;
//         else if (l[0]=='C' && l[1]=='o')
//             r =r + 11;
//         else
//             return (printf("Invalid Input.\n"));
//     }    
//     if (r <= t + 5 && r >= t - 5)
//             printf("Just Right.\n");
//     else if ( r > t + 5)
//     {
//         printf("Too Sweet!\n");
//     }
//     else
//          printf("Blegh!\n");    
//     return 0;
// }

// % letter
// https://www.codingame.com/contribute/view/6732d50333a9df2cda79f241473239b11ef6

// Abourgeo
// a=input().lower()
// print(*[b+str(c)for b,c in dict((k,int(a.count(k)/len(a)*100))for k in sorted(set(a))if k.isalpha()).items()])

// Nabil
// main(){char t[351],l[26],c;scanf("%[^\n]", t);int f=1,i,ln=0;while(t[ln]){l[t[ln]>='a'&&t[ln]<='z'?t[ln]-'a':t[ln]>='A'&&t[ln]<='Z'?t[ln]-'A':-1]++;ln++;}for(i=0;i<26;i++){if(l[i]>0){if(!f)printf(" ");printf("%c%d",i+'a',l[i]*100/ln);f=0;}}}

// import export
// https://www.codingame.com/contribute/view/715687481836c970c197f89a364beec22b3f

// Axel
// int main()
// {
//     char e_prices[10001];
//     scanf("%[^\n]", e_prices); fgetc(stdin);
//     char i_prices[10001];
//     scanf("%[^\n]", i_prices);

//     long long x=0;
//     for (char*t=strtok(e_prices," ");t;t=strtok(0," ")) {
//         x+=atoll(t);
//     }

//     long long y=0;
//     for (char*t=strtok(i_prices," ");t;t=strtok(0," ")) {
//         y+=atoll(t);
//     }
//     printf("%lld%%\n",x*100/y);
//     return 0;
// }

// chimie orga
// https://www.codingame.com/contribute/view/12515111da52d07c0f5408f1cca2bf7b1dc87b

// moi
// int main()
// {
//     int n;
//     scanf("%d", &n); fgetc(stdin);
//     char w[n][11];
//     for (int i = 0; i < n; i++) {
//         char s[11];
//         scanf("%[^\n]", w[i]); fgetc(stdin);
//     }
//     int c = 0;
//     int h = 0;
//     for (int i = 0; i < n; i++) {
//         if (w[i][0] == 'C')
//             c++;
//         if (w[i][0] == 'H')
//             h++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (w[i][0] > w[j][0])
//             {
//                 char t = w[i][0];
//                 w[i][0] = w[j][0];
//                 w[j][0] = t;
//             }        
//         }
//     }
//     if (c == 1)
//         printf("C");
//     else
//         printf("C%d",c);
//     if (h == 1)
//         printf("H");
//     else
//         printf("H%d",h);
//     //
//     // int k = 0;
//     // for (int i = h+1+1; i < n-1; i++)
//     // {
//     //     if (w[i][0] == w[i+1][0]) 
//     //         k++;
//     //     else
//     //     {
//     //         if (k == 1)
//     //             printf("%s", w[i]);
//     //         else
//     //             printf("%s%d",w[i],k);
//     //         k = 0;
//     //     }
//     // }   

//     // printf("Chemical formula - C, H, Alphabetical order\n");
//     return 0;
// }

// tamtam
// import sys
// import math

// n = int(input())
// d ={}
// for i in range(n):
//     a = input()
//     d[a] = d.get(a, 0) + 1

//     r = ""
//     if "C" in d:
//         r += "C" + (str(d["C"]) if d["C"] > 1 else "")
//         if "H" in d:
//             r += "H" + (str(d["H"]) if d["H"] > 1 else "")

//             for k in sorted(d.keys()):
//                 if k not in ["C", "H"]:
//                     r += k + (str(d[k]) if d[k] > 1 else "")

// print(r)
