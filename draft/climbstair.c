// escalier 1 marche ou 2 marches, pour un total de n marches
// combien de possibilite

// ca suit en fait une suite de fibo !

// 3e cas fibo par add
int climbStairs(int n) {
    if (n == 0 || n == 1 || n == 2 || n == 3) 
        return (n);
    int a = 2, b = 3, res;
    for (int i = 4; i <= n; i++)
    {
        res = a + b;
        a = b;
        b = res;
    }    
    return (res); 
}

// 2e cas fibo en reccur
int fibo(int n)
{
    if (n == 1)
        return (1);
    else if (n == 2)
        return (2);
    else if (n == 3)
        return (3);    
    else if (n == 4)
        return (5);     
    else if (n == 5)
        return (8);     
    else
        return (fibo(n - 1) + fibo(n - 2));    
}

int climbStairs(int n) {
       if (n == 0) 
        return(0);
       else
        return (fibo(n)); 
}

// 3e cas, recherche = combinaisons
long long int fact(int m)
{
    long long int res = 1;
    for (int i = 1; i <= m; i++)
        res = res * i;
    return(res);
}

int climbStairs(int n) {

    int t = 0;

    for (int k = 0; k <= n/2; k++) //nb de 2 
    {
        int N = n - k; //nb de place
        // t = t + fact(N)/ (fact(k) * fact(N - k)); --> trop long
        long long int f = 1;
        for (int i = 0; i <= k - 1; i++)
        {
            f = f * (N - i) / (i + 1);
        }
        // for (int i = 1; i <= k ; i++) --> trop long
        // {
        //     f = f / i ;
        // }
        t = t + f ;
    }
    
   return(t);
}

// // formule combinaisons
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int k;
//     scanf("%d", &k);
 
//     double m = 1;
//     for (int i = 0; i <= k - 1; i++)
//     {
//         m = m * (n - i ) / (i + 1);
//     }
//     printf("%.0f\n", m);

//     return 0;
// }
