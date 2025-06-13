/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manhattan.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 03:47:19 by caguillo          #+#    #+#             */
/*   Updated: 2025/06/13 04:08:33 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int abs(int x)
{    
    x>0?x:-x;
}

int main()
{
    int x,y;
    int n;    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char d[2];
        int s;
        scanf("%s%d", d, &s);
        if (d[0]=='N')
            y += s;
        if (d[0]=='S')
            y += -s;
        if (d[0]=='E')
            x += s;
        if (d[0]=='W')
            x += -s;
    }
    // printf("%d\n", abs(x) + abs(y));
    printf("%d\n", (x>0?x:-x) + (y>0?y:-y));
    return 0;
}
