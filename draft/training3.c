#include <stdio.h>
#include <string.h>

// long long fibo(int n)
// {
//     if (n == 0)
//         return (0);
//     if (n == 1)
//         return (1);
//     int a = 0;
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

// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     printf ("%lld\n", fibo(n));

// }

// //reverse words
// int main()
// {
//     char s[101];
//     scanf("%[^\n]", s);
//     char *tab[101];
//     int i = 0;
//     char *tok = strtok(s, " ");
//     while (tok)
//     {
//         tab[i] = tok;
//         i++;
//         tok = strtok(NULL, " ");
//     }
//     for (int k = i - 1; k >=0; k--)
//     {
//         printf("%s", tab[k]);
//         if (k > 0)
//             printf(" ");
//         else     
//             printf("\n");
//     }
// }    

// // bubble.c small to big
// int main()
// {
//     int n;
// 	scanf("%d", &n);
// 	int v[99];
// 	for (int i = 0; i < n; i++)	
// 		scanf("%d", &v[i]);
//     int tmp;
//     for (int i = 0; i < n; i++)    
//     {
//         for (int j = i + 1; j < n; j++)    
//         {
//             if (v[i] > v[j])
//             {
//                 tmp = v[i];
//                 v[i] = v[j];
//                 v[j] = tmp;
//             }        
//         }
//     }
//     for (int i = 0; i < n; i++)    
//     {
//         if (i != n - 1)
//             printf("%d ", v[i]);
//         else     
//             printf("%d\n", v[i]);
//     }
// }

// // sprintf
// int main (void)
// {
//     int n;
//     scanf("%d", &n);

//     char nb[100];
//     sprintf(nb, "%d", n);
//     for (int i = 0; i < strlen(nb); i++)
//     {
//         if (i%2 != 0)
//         {            
//             if (i == 1)            
//                 printf("%c", nb[i]);
//             else
//                 printf(" %c", nb[i]);    
//         }            
//     }
//     printf("\n");
// }

// //  is_prime
// int is_prime(int n)
// {
//     if (n <= 1)
//         return (0);
//     if (n == 2 || n == 3 || n == 5 || n == 7)
//         return (1);
//     if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
//         return (0);
//     int i = 7;    
//     while ( i * i < n && i < 46340)
//     {   
//         if (n % i == 0)
//             return (0);
//         i++;
//     }
//     return (1);
// }

// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     // printf("%d\n", is_prime(n));
//     if (is_prime(n) == 1)
//         printf("prime\n");
//     else        
//         printf("nope\n");
// }

// a reprendre
// #include <math.h> 
// gcc -lm
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     float fl;
//     scanf("%f", &fl);

//     for (int i = 0; i <= n; i++)
//     {
//         printf("%.f\n", fl * pow((double)10, (double)i));
//     }
//     printf("%.3f\n", fl);
// }

// // macro
// int main(void)
// {
//     int n;
//     scanf("%d", &n);

//     (n>3?puts("oui"):puts("non"));

// }

// facto

long long f(int n)
{
    if (n < 0 )
        return (0);
    if (n == 0 )
        return (1);    
    if (n == 1 )
        return (1);        
    if (n == 2 )
        return (2);
    if (n == 3 )
        return (6);                
    return ( n * f(n -1));
}

long long fact(int n)
{
    long long r = 1;
    if (n < 0 )
        return (0);
    if (n == 0 )
        return (1);    
    if (n == 1 )
        return (1);        
    if (n == 2 )
        return (2);
    if (n == 3 )
        return (6);
    int i = 1;    
    while ( i <= n )
    {
        r = r * i;
        i++;
    }
    return (r);
}


int main(void)
{
    int n;
    scanf("%d", &n);  

    printf("%lld\n", f(n));
    printf("%lld\n", fact(n));
}
