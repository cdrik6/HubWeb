#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int p(int n)
{
    if (n==2 || n==3 || n==5)
        return(1);
    if (n == 1 || n%2==0 || n%3==0 || n%5==0)
        return(0);
    for (int i = 7; i < n && i*i<46340;i++)
    {
        if (n%i==0)
            return(0);
    }
    return(1);
}

int main()
{    
    int k = 0;
    int N;    
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        // printf("%d\n", p(num));
        if (p(num) == 1)
        {
            if (num > k)        
               k = num;
        }
    }
    if (k == 0)
        printf("NO PRIMES\n");
    else 
        printf("%d\n", k);
    return 0;
}

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
