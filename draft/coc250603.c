/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coc250603.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 00:36:42 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/04 01:29:54 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Sort the words reverse-wise By StepBack13 
//https://www.codingame.com/contribute/view/12175206a039a13c2ddf35b8741224b48b51dd

// axel
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// /**
//  * Sort words for rhyming - it's not hard!
//  **/

// void strrev(char*s) {
//     int n=strlen(s);
//     for (int i = 0;i<n/2;++i) {
//         char tmp=s[i];
//         s[i]=s[n-i-1];
//         s[n-i-1]=tmp;
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n); fgetc(stdin);
//     char* words[99];
//     for (int i = 0; i < n; i++) {
//         words[i] = malloc(999);
//         scanf("%[^\n]", words[i]); fgetc(stdin);
//     }

//     for (int j=0;j<n;++j) {
//         strrev(words[j]);
//     }


//     char*tmp;
//     for (int j=0;j<n;++j) {
//         for (int i=0;i<n-1;++i) {
//             if (strcmp(words[i],words[i+1]) > 0) {
//                 tmp=words[i];
//                 words[i]=words[i+1];
//                 words[i+1]=tmp;
//             }
//         }
//     }

//     for (int j=0;j<n;++j) {
//         strrev(words[j]);
//         puts(words[j]);
//     }

//     return 0;
// }

// // tam tam tam
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// char words[30][16];
// char rev[30][16];

// void reverse(char* src, char* dst) {
//     int len = strlen(src);
//     for (int i = 0; i < len; i++) {
//         dst[i] = src[len - 1 - i];
//     }
//     dst[len] = '\0';
// }

// int cmp(const void* a, const void* b) {
//     int ia = *(int*)a;
//     int ib = *(int*)b;
//     return strcmp(rev[ia], rev[ib]);
// }

// /**
//  * Sort words for rhyming - it's not hard!
//  **/

// int main()
// {
//     int n;
//     scanf("%d", &n); fgetc(stdin);
//     for (int i = 0; i < n; i++) {
//         char word[16];
//         scanf("%[^\n]", word); fgetc(stdin);
//         strcpy(words[i], word);
//         reverse(words[i], rev[i]);
//     }

//     int idx[30];
//     for (int i = 0; i < n; i++) {
//         idx[i] = i;
//     }
    
//     qsort(idx, n, sizeof(int), cmp);

//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");

//     for (int i = 0; i < n; i++) {
//         printf("%s\n", words[idx[i]]);
//     }

//     return 0;
// }


// // OrioPrisco 
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// /**
//  * Sort words for rhyming - it's not hard!
//  **/

// char * reversed(char *in) {
//     size_t s = strlen(in);
//     char *out = malloc(s + 1);
//     for (int i = 0; i < s; i++) {
//         out[i] = in[s - i - 1];
//     }
//     out[s] = 0;
//     return out;
// }

// int main()
// {
//     int n;
//     char *strs[30];
//     scanf("%d", &n); fgetc(stdin);
//     for (int i = 0; i < n; i++) {
//         char word[16];
//         scanf("%[^\n]", word); fgetc(stdin);
//         strs[i]= reversed(word);
//     }
//     for (int _ = 0; _ < 30; _++) {
//         for (int i = 0; i <  n - 1; i++) {
//             if (strcmp(strs[i], strs[i+1]) > 0) {
//                 char *temp = strs[i];
//                 strs[i] = strs[i+1];
//                 strs[i+1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%s\n", reversed(strs[i]));
//     }

//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n


//     return 0;
// }


// False Fibonacci? By volumeoverheight 
// https://www.codingame.com/contribute/view/122346426f2d4557d821e3f6692b28b128b066

// // moi
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/
// int f(int n)
// {
//     if (n == 0)
//         return (1);
//     if (n == 1)
//         return (1);
//     int a = 1;
//     int b = 1;
//     int r;
//     for (int i = 2; i <=n; i++)
//     {
//         r = a + b;
//         a = b;
//         b = r;
//     }
//     return (r);
// }

// int main()
// {
//     int length;
//     scanf("%d", &length);
//     int t = 0;
//     for (int i = 0; i < length; i++) {
//         int x;
//         scanf("%d", &x);
//         // printf("%d", x);
//         t = 0;        
//         if (x == 0)
//             t = 1;
//         for (int k = 0; k <= 15; k++)
//         {
//             if ( x == f(k))
//                 t = 1;              
//         }
//         if (t == 0)
//             return (printf("%d", x));        

//     }
//     printf("fib");
    

    

//     return 0;
// }

// // rRyoTa
// #include <stdio.h>

// int main()
// {
//     int length;
//     scanf("%d", &length);
//     int numbers[10];
//     for (int i = 0; i < length; i++)
//         scanf("%d", &numbers[i]);
//     for (int i = 2; i < length; i++)
//     {
//         if (numbers[i] != numbers[i-1] + numbers[i-2])
//         {
//             printf("%d\n", numbers[i]);
//             return 0;
//         }
//     }
//     printf("fib\n");
    
//     return 0;
// }

// // james Garrigou
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
//     int length;
//     scanf("%d", &length);
//     int x;
//     int j;
//     int k;
//     scanf("%d%d", &j, &k);
//     for (int i = 2; i < length; i++) {
//         scanf("%d", &x);
//         if (x != k + j)
//             return (printf("%d\n", x), 0);
//         k += j;
//         j = k - j;
//     }

//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");
//     printf("fib\n");

//     return 0;
// }



// Treasure Map By Flxw 
// https://www.codingame.com/contribute/view/12294045b71a884d321d6908eb6842b3da2076

// // moi
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/
// int f(int x1, int x2, int y1, int y2)
// {
//     int d = 0;
//     if ( x1 > x2)
//         d = x1-x2;
//     else 
//         d = -x1+x2;
//     if ( y1 > y2)
//         d = d + y1-y2;
//     else 
//         d = d + -y1+y2;
//     return (d);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int x =0;
//     int y =0;
//     int r = 0;
//     for (int i = 0; i < n; i++) {
//         char d[2];
//         int s;
//         scanf("%s%d", d, &s);
//         if (d[0]=='N')
//         {
//             r = r + f(x,0,y,s);
//             x = x + 0;
//             y = y + s;
//             // printf("%d\n", r);
//         }            
//         else if (d[0]=='S')
//         {
//             r = r + f(x,0,y,-s);
//             x = x + 0;
//             y = y -s;
//             // printf("%d\n", r);
//         }
//         else if (d[0]=='E')
//         {
//             r = r + f(x,s,y,0);
//             x = x + s;
//             y = y + 0;
//             // printf("%d\n", r);
//         }
//         else if (d[0]=='W')
//         {
//             r = r + f(x,-s,y,0);
//             x = x - s;
//             y = y + 0;
//         }
//     }   

//     printf("%d\n", r);

//     return 0;
// }

// // axel 
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int x=0;
//     int y=0;
//     for (int i = 0; i < n; i++) {
//         char d[2];
//         int s;
//         scanf("%s%d", d, &s);
//         if (d[0]=='N')y+=s;
//         if (d[0]=='S')y-=s;
//         if (d[0]=='E')x+=s;
//         if (d[0]=='W')x-=s;
//     }   
//     printf("%d\n",(x>0?x:-x)+(y>0?y:-y));
//     return 0;
// }

// // jl23
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
//     int x,y;
//     x=y=0;
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         char d[2];
//         int s;
//         scanf("%s%d", d, &s);
//         x+= d[0] == 'E' ? s : d[0]=='W' ? -s : 0;
//         y+= d[0] == 'N' ? s : d[0]=='S' ? -s : 0;

//     }

//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");

//     printf("%d\n",abs(x)+abs(y));

//     return 0;
// }


// shortest 
// Cleaning code length By CCCStudioGame 
// https://www.codingame.com/contribute/view/122643ab3830e735cca09722dde2685d06e885

// rRyoTa 314 size
// #include<stdio.h>
// l,r,i,j,k;char s[257];main(){scanf("%d",&l);fgetc(stdin);for(i=0;i<l;i++){fgets(s,257,stdin);k=strlen(s);if(k>0&&s[k-1]=='\n')s[--k]=0;j=0;while(j<k&&s[j]==' ')j++;if(j<k-1&&s[j]=='/'&&s[j+1]=='/'){r+=k;continue;}r+=j;j=k-1;while(j>=0&&s[j]==' ')j--,r++;if(j>=0&&s[j]==';')r++;}printf("%d\n",r);}


// reverse
// Largest Prime By User123 
// https://www.codingame.com/contribute/view/124029995afa7477e4c7a400368817b29c7ddc 

// // moi
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// int is_p(int n)
// {
//     if (n%3==0 ||n%2==0 || n%5==0)
//         return (0);
//     if (n%3 !=0 ||n%2 !=0 || n%5!=0)
//         return (1);
//     for (int i = 7; i * i < 46340; i++ )
//         if (n % i == 0)
//             return (0);
//     return (1);
// }

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int n[N];
//     for (int i = 0; i < N; i++) {        
//         scanf("%d", &n[i]);
//     }
//     int t = 0;
//     int r = 0;
//     for (int k = 0; k < N; k++)
//     {        
//         if (is_p(n[k]) == 1)
//         {
//             r++;
//             if (t < n[k] )
//                 t = n[k];
//             // else 
//             //     t = n[k];
//         }
            
//     }
//     if (r == 0) 
//         printf("NO PRIMES\n");
//     else
//         printf("%d\n", t);
//     return 0;
// }


// // axel
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

//  int is_prime(int n) {
//     if (n<2)return 0;
//     for (int i=2;i<n;++i) {
//         if (n%i==0) {
//             return 0;
//         }
//     }
//     return 1;
//  }

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int b=-1;
//     for (int i = 0; i < N; i++) {
//         int num;
//         scanf("%d", &num);
//         if (is_prime(num)&&num>b) {
//             b=num;
//         }
//     } 

//     if (b==-1)printf("NO PRIMES\n");
//     else printf("%d\n",b);

//     return 0;
// }

// // jl23
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/
// r;
// int main()
// {
//     int prime=0;
//     int N;
//     scanf("%d", &N);
//     for (int i = 0; i < N; i++) {
//         int num;
//         scanf("%d", &num);
//         int f= 1;
//         for(int j=2;j*j<=num;j++)
//         {
//             if (num%j<1)
//                 f=0;
//         }
//         if (f)prime = num > prime ? num : prime;
//         r+=f!=0;
//     }

//     // Write an answer using printf(). DON'T FORGET THE TRAILING \n
//     // To debug: fprintf(stderr, "Debug messages...\n");
//     if (r==0 || prime<2)puts("NO PRIMES");
//     else printf("%d\n",prime);

//     return 0;
// }


// shortest
// Trouble with FizzBuzz By User123 
// https://www.codingame.com/contribute/view/123930058477373f4030bd24af65ddd402d7a6

// int main(){int N;scanf("%d", &N);printf("%d",N-N/3-N/5+N/15);}

// moi ok mais
// k;j;main(n){scanf("%d",&n);for(j;j<=n;j++){if(j%3!=0&&j%5!=0)k++;}printf("%d",k);}
