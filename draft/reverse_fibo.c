// probleme de time out

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>


long long fibo(int N)
{
    if (N == 1 || N == 2)
        return (1);
    else if (N == 3)
        return (2);
    else if (N == 4)
        return (3);
    else if (N == 5)
        return (5);
    else if (N == 6)
        return (8);
    else if (N == 7)
        return (13);
    else if (N == 8)
        return (21);
    else if (N == 9)
        return (34);
    else if (N == 10)
        return (55);
    else
        return (fibo(N-1) + fibo(N-2));
}


int main()
{
    long long Y;
    scanf("%lld", &Y);

    for ( int i = 1; i < INT_MAX; i++)
    {
        if ( fibo(i) == Y)
            return(printf("%d\n",i));
    }
        

    

    return 0;
}

