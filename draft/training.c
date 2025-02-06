#include <stdio.h>


int main()
{
    int N;
    scanf("%d", &N);
    int D;
    scanf("%d", &D);
    double f = 1;
    for (int i = 1; i <=N; i++)
    {
        f = f * i;
    }
    printf("%.f\n", f);
    char str[300];
    sprintf(str, "%.f", f);
    printf("%s\n", str);
    printf("%c\n", str[strlen(str) -D]);
}

// int main()
// {

//     char *str;
//     char *tok = strtok(str, " ");
//     while (tok)
//     {

//         tok = strtok(NULL, " ");
//     }

// }

// int fibo(int n)
// {
//     if (n <=0)
//         return (0);
//     if (n == 1)    
//         return (1);
//     if (n == 2)    
//         return (1);
//     if (n >= 3)    
//         return (fibo(n-1) + fibo(n-2));
// }

// int fibo(int n)
// {
//     if (n <= 0)
//         return (0);
//     if (n == 1)    
//         return (1);
//     if (n == 2)    
//         return (1);
//     int a = 1;
//     int b = 1;    
//     int res = 0;
//     for (int i = 3; i <= n; i++)
//     {
//         res = a + b;
//         a = b;
//         b = res;    
//     }
//     return (res);
// }

// int main()
// {
//     int N;
//     scanf("%d", &N);
//     printf("%d\n", fibo(N));
// }


// int main()
// {
//     int i = 0;
//     int j;

//     int N;
// 	scanf("%d", &N);
// 	int v[99];
// 	for (int i = 0; i < N; i++)
// 	{
// 		scanf("%d", &v[i]);
// 	}
//     // sort
//     int temp;
//     for (int i = 0; i < N; i++)
//     {
//         // v[i]
//         for (int j = i + 1; j < N; j++)
//         {
//             if (v[j] < v[i])
//             {
//                 temp = v[i];
//                 v[i] = v[j];
//                 v[j] = temp;
//             }    
//         }
//     }
//     //
//     printf ("%d", v[0]);
//     for (int i = 1; i < N; i++)
//     {
//         printf (" %d", v[i]);
//     }
//     printf ("\n");
// }