// 8 Palindromified asdf --> fdsa --> afsddsfa
// my version
int main()
{
    char n[101];
    scanf("%[^\n]", n);
    char m[101];
    int i = strlen(n)-1;
    while(i>=0)
    {
        m[strlen(n) - i -1] = n[i];
        i--;
    }
    for (int j = 0; j < strlen(n); j++)
    {
        printf("%c", n[j]);
        printf("%c", m[j]);
    }
    return 0;
}
// rRyoTa  
int main()
{
    char name[101];
    scanf("%[^\n]", name);int len=strlen(name), i=0;
    while (len--)
        printf("%c%c", name[i++], name[len]);
    printf("\n");
    return 0;
}

// 7 shortest nbrede consonnes a l puissance le nbre de voyelles
int main()
{
    char s[257];
    scanf("%[^\n]", s);
    // printf("%s\n",s);
    char *v = "aeuioy"; // ---- AEIOUY
    int k = 0;
    int c = strlen(s);
    for (int i=0;i<c;i++)
    {
        for (int j=0;j<7;j++)
        {
            if (s[i]==v[j])            
                k++;

        }        
        if (!(( 65<=s[i] && s[i]<= 90) || !(97<=s[i] && s[i]<= 122 )  ))
            c--;
    }
    // printf("%d\n",k);
    // printf("%d\n",c);
    printf("%.f\n", pow(c-k,k));
    return 0;
}
// vegret
long v,c;main(i){char s[257];gets(s);for(i=c=v=0;s[i];i++){v+=strchr("aeiouyAEIOUY",s[i])>0;c+=isalpha(s[i])>0;}printf("%.f",pow(c-v,v));}
//WowLeDore 
i=-1;c;v;main(){char S[99];gets(S);while(S[++i]){S[i]=tolower(S[i]);strchr("aeuioy",S[i])?v++:S[i]>97&&S[i]<123?c++:0;}printf("%.0f\n",pow(c, v));}
// Onora
// #define a long long
// a v;b;i;main(){char s[257],*c="aeiouyAEIOUY";for(gets(s);s[i];i++)if(isalpha(s[i]))if(strchr(c,s[i]))v++;else b++;printf("%ld",(a)pow(b,v));}

// 6 crazy facto 5! = 120 --> 1 + 2 + 0 = 3 --> 120 / 3 = 40
long long f(int n)
{
    if (n <=0)
        return (1);
    if (n <=1)
        return (1);
    return (n * f(n-1));

}
int main()
{
    int n;
    scanf("%d", &n);
    // printf("%d\n", n);
    char l[99];
    sprintf(l, "%ld", f(n));
    // printf("%d\n", f(n));
    // printf("%ld\n", strlen(l));
    long long r = 0;
    for (int i = 0; i < strlen(l); i++)
    {
        r = r + l[i]-48;
    }
    long long k = f(n) / r;
    printf("%lld\n", k);
    return 0;
}
// // vegret python
// import sys
// import math

// # Auto-generated code below aims at helping you parse
// # the standard input according to the problem statement.

// n = int(input())
// n=math.factorial(n)
// print(n // sum(map(int,str(n))))

// rRyoTa 
long long factorial(int nb)
{
    if (nb < 0)
        return 0;
    if (nb == 0 || nb == 1)
        return 1;
    return (long long)nb * factorial(nb - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    
    long long fact = factorial(n);
    long long sum_digits = 0;
    while (fact > 0)
    {
        sum_digits += fact % 10;
        fact /= 10;
    }
    long long result = factorial(n) / sum_digits;
    printf("%lld\n", result);
    
    return 0;
}

// 5: carre magique, il faut remplacer le -1 par le bon chiffre
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int s[10];
    int r = 0;
    int k = 0;
    for (int i = 0; i < 5; i++) {
        char l[129];
        scanf("%[^\n]", l); fgetc(stdin);        
        char *tok = strtok(l, " ");
        while (tok)
        {            
            if (atoi(tok) != -1)
                s[k] = s[k] + atoi(tok);            
            tok = strtok(NULL, " ");
        }
        k++;
    }
    for (int i = 1; i < k; i++)
    {
        if (s[i] > s[0])
        {
            printf("%d\n", s[i] - s[0]);
            break;
        }
        if (s[i] < s[0])
        {
            printf("%d\n", -s[i] + s[0]);
            break;
        }
    }
    return 0;
}

// Onora
int main()
{
    int total = -1;
    int missing = -1;
    for (int i = 0; i < 5; i++) {
        char line[129];
        scanf("%[^\n]", line); fgetc(stdin);
        char *tok = strtok(line, " ");
        int r = 0;
        int valid = 1;
        while (tok != NULL) {
            int val = atoi(tok);
            if (val != -1) {
                r += val;
            } else {
                valid = 0;
            }
            tok = strtok(NULL, " ");
        }
        if (valid == 1) {
            total = r;
        } else {
            missing = r;
        }
    }
    printf("%i\n", total-missing);
    return 0;
}

//vegret 
int main()
{
    int mat[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (mat[i][j] == -1) {
                int x = 0;
                for (int k = 0; k < 5; k++) {
                    if (k != j)
                        x -= mat[i][k];
                }
                for (int k = 0; k < 5; k++) {
                    x += mat[i ? i-1 : i + 1][k];
                }
                mat[i][j] = x;
                printf("%d\n", mat[i][j]);
            }
        }
    }
    return 0;
}

// 4: distance entre 2 lettres (si Z A):  AB --> C
// my version
int main()
{
    char M[3];
    scanf("%[^\n]", M);
    // printf("%c\n", M[1]);
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int k = M[1] - M[0];
    // printf("%d\n", k);
    if (M[1] + k > 'Z')
        printf("%c\n", M[1] - 26 + k );
    else 
        printf("%c\n", M[1] + k);
    return 0;
}
// rRyota
int main()
{
    char MESSAGE[3];
    scanf("%[^\n]", MESSAGE);
    char a = MESSAGE[0];
    char b = MESSAGE[1];
    int distance = (b - a + 26) % 26;
    char c = 'A' + (b - 'A' + distance) % 26;
    printf("%c\n", c);
    return 0;
}
// twyzzi 
int main()
{
    char MESSAGE[3];
    scanf("%[^\n]", MESSAGE);

    char un = MESSAGE[0] - 'A';
    char deux = MESSAGE[1] - 'A';
    printf("%c\n", 'A' + (deux + abs(un - deux)) % 26);

    return 0;
}

//3: shortest remplacer la voyelle par la suivante, tout est uppercase 
// my
f;j;i;main(){char s[257];scanf("%[^\n]",s);char v[8]={'A','E','I','O','U','Y','A'};for(i=0;i<strlen(s);i++){f=0;for(j=0;j<7;j++){if(s[i]==v[j]){f=1;break;}}if(f==1)printf("%c",v[j+1]);else printf("%c",s[i]);}}
// vegret
char s[257],*r;main(i){gets(s);for(i=0;s[i];i++)(r=strchr("AEIOUY",s[i]))&&(s[i]=*++r|65);puts(s);}
// onora
i;main(){char s[257],*v="AEIOUY";for(scanf("%[^\n]",s);s[i];i++){char*p=strchr(v,s[i]);putchar(p?p[1]?p[1]:65:s[i]);}}
// maix
char*v="AEIOUYA",s[99];a;main(){read(0,s,99);while(s[a]){if(strchr(v,s[a]))s[a]=*(strchr(v,s[a])+1);a++;}write(1,s,a);}

// 2 reverse : deux lignes une ligne avec des ? ou  des #
// une 2e ligne de mots, qu'il faut mettre a la place de ? ou #
// my 
int main()
{
    char Q[151];
    scanf("%[^\n]", Q); fgetc(stdin);
    char W[151];
    scanf("%[^\n]", W);
    int i = 0;
    char *tok = strtok(W, ",#");
    char *r[66];
    int k = 0;
    while(tok)
    {
        r[k] = tok;
        k++;
        tok = strtok(NULL, ",#");
    }
    k = 0;
    while(Q[i])
        {
            if (Q[i] == '?' || Q[i] == '#')
            {
                printf("%s", r[k]);                
                k++;
            }    
            else 
                printf("%c", Q[i]);            
            i++;
        }
    return 0;
}
// // vegret python
// q = input()
// w = input()
// for x in w.split(','):
//     a = q.find("?")
//     if a == -1:
//         a = '#'
//     else:
//         a = '?'
//     q = q.replace(a, x, 1)
// print(q)

// WhatEvR 
int main()
{
    char Q[151];
    scanf("%[^\n]", Q); fgetc(stdin);
    char W[151];
    scanf("%[^\n]", W);

    int i = 0;
    int j = 0;
    while (Q[i])
    {
        if (Q[i] == '?' || Q[i] == '#')
        {
            while (W[j] && W[j] != ',')
            {
                printf("%c", W[j]);
                j++;
            }
            j++;
            i++;
        }
        else
        {
            printf("%c", Q[i]);
            i++;
        }
    }
    return 0;
}

// 1 reverse fibo
int fibo (int n)
{
   if (n == 0)
       return (0);
   if (n == 1)
       return (1);
   int a  = 0;
   int b = 1 ;
   int r;
   for (int i = 2; i <=n; i++)
   {
       r = a +b;
       a = b;
       b = r;

   }
   return (r);
}

int main()
{
   int N;
   scanf("%d", &N);
   printf("%d\n", fibo(N));
   return 0;
}
// marche en recurssive pour une fois