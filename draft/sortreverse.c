/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortreverse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 22:44:09 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/14 23:47:46 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// shortest
// Trouble with FizzBuzz By User123 
// https://www.codingame.com/contribute/view/123930058477373f4030bd24af65ddd402d7a6

// int main(){int N;scanf("%d", &N);printf("%d",N-N/3-N/5+N/15);}

// moi ok mais
// k;j;main(n){scanf("%d",&n);for(j;j<=n;j++){if(j%3!=0&&j%5!=0)k++;}printf("%d",k);}

/**** ici  */

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





#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *f(char *str)
{
    char *rev;
    rev = malloc(sizeof(char)*(strlen(str) + 1));        
	for (size_t i = 0; i < strlen(str); i++)	
		rev[i] = str[strlen(str) - 1 - i];		
    rev[strlen(str)] = 0;
    // printf("%s\n", rev);
    return (rev);
}

int comp(const void *s1, const void *s2)
{
    // return (strcmp(s1,s2));
    return (strcmp(*(char **)s1,*(char **)s2));
}

int main()
{
    int n;
    scanf("%d", &n); fgetc(stdin);
    char *m[n];
    for (int i = 0; i < n; i++) {
        char w[16];
        scanf("%[^\n]",w); fgetc(stdin);
        m[i] = f(w);        
    }
    // arr, size arr, sizeof 1 element, comp function
	qsort (m, n, sizeof(char *), comp);
    
	char *r[n];
    for (int i = 0; i < n; i++) {
		r[i] = f(m[i]);
        // printf("%s\n", f(m[i]));
		printf("%s\n", r[i]);
		free(m[i]);
		free(r[i]);
    }
    return 0;
}