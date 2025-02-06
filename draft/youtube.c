#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int t;
    scanf("%d", &t);
    int lt;
    scanf("%d", &lt);
    int v;
    scanf("%d", &v);
    int ads;
    scanf("%d", &ads);
    for (int i = 0; i < ads; i++) {
        int l;
        int s;
        int st;
        scanf("%d%d%d", &l, &s,&st);

        if (s==1)            
                l = st;
        else
            l = l - 1;     

        if (t>=lt+l+v)
        {
               printf("Stay on Earth\n");
               if (t>=lt+v)
                    printf("I still hate ads\n");

        }     
            
        else
            printf("A ticket to Heaven\n");
            printf("Ads are still annoying\n");
    }
}