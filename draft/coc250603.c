/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coc250603.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 00:36:42 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/14 03:06:23 by caguillo         ###   ########.fr       */
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







// shortest
// Trouble with FizzBuzz By User123 
// https://www.codingame.com/contribute/view/123930058477373f4030bd24af65ddd402d7a6

// int main(){int N;scanf("%d", &N);printf("%d",N-N/3-N/5+N/15);}

// moi ok mais
// k;j;main(n){scanf("%d",&n);for(j;j<=n;j++){if(j%3!=0&&j%5!=0)k++;}printf("%d",k);}
