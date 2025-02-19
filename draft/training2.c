

int is_prime(int n)
{
    if (n <= 1)
        return (0);
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return (1);
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return (0);
    int i = 11;
    while (i * i <= n  && i <= 46340)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}


int fibo(int n)
{
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    if (n == 2)
        return (1);
    if (n == 3)
        return (2);    
    if (n == 4)
        return (3);    
    if (n == 5)
        return (5);        
    return (fibo(n-1) + fibo(n-2));
}

int fibo_add(int n)
{
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    if (n == 2)
        return (1);
    if (n == 3)
        return (2);    
    if (n == 4)
        return (3);    
    if (n == 5)
        return (5);        
    int a = 3;
    int b = 5;
    int r = 0;        
    for (int i = 6; i <= n; i++)
    {
        r = a + b;
        a = b;
        b = r;    
    }        
    return (r);
}

int fact(int n)
{
    if (n < 0)
        return(0);
    if (n == 0)
        return(1);    
    if (n <= 2)
        return(2);
    if (n == 3)
        return(6);    
    return (n * fact(n-1));
}


int fact_iter(int n)
{

    if (n < 0)
        return(0);
    if (n == 0)
        return(1);        
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return(f);
}


int main()
{
  
  
  
    

}