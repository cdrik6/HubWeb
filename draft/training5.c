#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int fibo(int n)
{
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);    
    int a = 0;
    int b = 1;
    int r;
    for (int i = 2; i <= n; i++)
    {
        r = a + b;
        a = b;
        b = r;
    }
    return (r);
}
// int main(void)
// {
//     for( int i = 0; i <=10; i++)
//     {
//         if (i == 0)
//             printf("%d", fibo(i));    
//         else     
//             printf(" %d", fibo(i));
//     }
// }

int fact(int n)
{
    if (n <= 0)
        return (1);
    if (n == 1)
        return (1);    
    return (n * fact(n -1));
}

// // -(op) 2(position de l'op) 123 => 12 - 3 = 9

// int main()
// {
//     char O[3];
//     int X;
//     int N;
//     scanf("%s%d%d", O, &X, &N);    

//     char s[20];
//     sprintf(s, "%d", N);
//     char a[20] = {0};
//     char b[20] = {0};
//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (i < X)
//             a[i] = s[i];
//         else     
//             b[i-X] = s[i];
//     }
//     if (O[0] == '-')
//         printf("%d\n", atoi(a) - atoi(b));
// }

// output the n-1 number
//  2, 4, 8, 24 --> 8

int main()
{
    char S[101];
    scanf("%[^\n]", S); 
    
    char R[101];
    strcpy(R, S);
    int n = 0;
    char *tok = strtok(S, ",");
    while (tok)
    {
        n++; //printf("%s ", tok);
        tok = strtok(NULL, ",");
    }
    char *tk = strtok(R, ", ");
    int k = 0;
    while (k < n-2)
    {
        k++;
        tk = strtok(NULL, ", ");
    }
    printf("%s\n", tk);
}

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