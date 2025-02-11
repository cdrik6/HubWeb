// 135 (moi)
n;main(){int i,j,v;long s;scanf("%d",&n);for(i=0;i<n;i++){for(j=0;j<n;j++){scanf("%d",&v);if(i==j||i+j==n-1)s=s+v;}}printf("%ld\n",s);}

// Chaewon 127
n;v;i;j;main(){long s;scanf("%d",&n);for(i;i<n;i++){for(j=0;j<n;j++){scanf("%d",&v);{s+=v*(i==j||i+j==n-1);}}}printf("%ld",s);}

// vegret 123
i;x;v;main(n){scanf("%d",&n);long s;for(s=x=0;x<n*n;x++){i=x/n;scanf("%d",&v);s+=v*(x/n==x%n||x%n==n+~i);}printf("%ld",s);}