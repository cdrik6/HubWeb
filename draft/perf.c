// 20% !!! --> total return 

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
    
    int p;
    scanf("%d", &p);
    float r = p;
    float g = 1;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int rate;
        scanf("%d", &rate);
        r = r * ( 100 + rate);
        
        
        r = r /100;
        
        
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    

    printf("%0.f %0.f\n", r, r - pow(100, n-1));

    return 0;
}


// tam
// int main() {
//     int p,n;
//     scanf("%d%d",&p,&n);
//     float v=p;
//     for(int i=0;i<n;i++){
//         int rate;
//         scanf("%d",&rate);
//         v*=(1+rate/100.0);
//     }
//     int total_value=(int)v;
//     int total_return=total_value-p;
//     printf("%d %d\n",total_value,total_return);
//     return 0;
// }

// vegret
// int main()
// {
//     int p;
//     scanf("%d", &p);
//     int n;
//     double total = p;
//     double total_r = 0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         int rate;
//         scanf("%d", &rate);
//         total_r += (double)p * (double)rate / 100.0;
//         total += total * rate / 100.0;
//     }

    
//     printf("%d %d\n", (int)total, (int)total - p);

//     return 0;
// }