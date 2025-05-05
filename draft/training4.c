#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int fibo(int n)
{
    if (n <= 0)
        return (0);
    if (n == 1)
        return (1);
    int a = 0;
    int b = 1;
    int r;
    for (int i = 2; i <=n; i++)
    {
        r = a + b;
        a = b;
        b = r;
    }
    return (r);
}

int fac(int n)
{
    if (n <= 0)
        return (1);
     if (n == 1)
        return (1);
    return (n * fac(n -1));
}

// -(op) 2(position de l'op) 123 => 12 - 3 = 9

int main()
{
    char O[3];
    int X;
    int N;
    scanf("%s%d%d", O, &X, &N);    
    char nb[99];
    sprintf(nb, "%d", N);
    char n1[99];
    char n2[99];
    for (int i = 0; i < strlen(nb); i++)
    {
        if (i < X)
            n1[i] = nb[i];
        else    
            n2[i-X] = nb[i];
    }
    if (O[0] == '-')
        return (printf("%d\n", atoi(n1) - atoi(n2)));

}
// // output the n-1 number
// //  2, 4, 8, 24 --> 8

// int main()
// {
//     char S[101];
//     scanf("%[^\n]", S);        
//     char *r[101];
//     // int n = strlen(S);
//     int i = 0;
//     char *tok = strtok(S, ", ");
//     while (tok)
//     {
//         r[i] = tok;
//         i++;
//         tok = strtok(NULL, ", ");
//     }
//     if (i-2 >= 0)
//     printf("%s\n", r[i-2]);    
// }    

// // tableau
// int main()
// {
//     char S[101];
//     scanf("%[^\n]", S);        
//     // char *r[101];
//     int n = strlen(S);
//     int i = n;
//     while (S[i] != ',')
//         i--;
//     int j = i-1;
//     char r[101];
//     for (int h = 0; h <100; h++)
//         r[h] = '0';
//     r[100] = 0;
//     printf("%s\n", r);
//     int k = 0;
//     while (S[j] != ' ')
//     {
//         r[99-k] = S[j];
//         printf("%s\n", r);
//         j--;
//         k++;
//     }
//     return (printf("%d\n", atoi(r)));
// }    