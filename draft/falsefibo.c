/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   falsefibo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 22:33:51 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/14 22:41:51 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// int f(int n)
// {
//     if (n==0)
//         return (1);
//     if (n==1)
//         return (1);
//     int a=1;
//     int b=1;
//     int r;
//     for (int i = 2; i<=n; i++)
//     {
//         r = a + b;
//         a = b;
//         b = r;        
//     }
//     return (r);
// }

int main()
{
    int n;
    scanf("%d", &n);
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    for (int i =2; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x != a + b)
            return (printf("%d\n", x));
        else
        {
            a = b;
            b = x;    
        }
    }
    printf("fib\n");

    return 0;
}