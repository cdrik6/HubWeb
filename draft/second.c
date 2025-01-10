k;int main()
{
    int b[99]; //tab int
    int c[99]; //tab occurence
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++) {        
        scanf("%d", &b[i]);        
    }
    for (int i = 0; i < n; i++) {
        k = 0;
        for (int j = 0; j < n; j++) {
            if (b[i] == b[j]) 
                k++;
        }
        c[i] = k; 
        printf("%d ", k);
    }
    printf("\n");
    k=0;
    for (int i = 0; i < n; i++) {
        if (k < c[i])
            k = c[i];
    }
    for (int i = 0; i < n; i++) {
        c[i] = c[i]-k;
        printf("%d ", c[i]);
    }
    k=c[0];
    int r = 0;
    for (int i = 0; i < n; i++) {
        if (k < c[i] && c[i] !=0)
        {
            k = c[i];
            r = i;
        }
            
    }
    printf("\n");
    printf("%d\n", b[r]);

    return 0;
}