//shortest
//  probleme avec le round
// 
// 20 la remise sur le plus gros prix
// 3 le nbre de prix a suivre
// 100
// 400
// 200
// --> 620


n;s; int main(){scanf("%d",&s);scanf("%d",&n);int r=0; int t = 0;
    for (int i = 0; i < n; i++) {
        int p;
        scanf("%d", &p);        
        t = t + p;
        if (p*s > r ) r = p*s;}  printf("%.f\n", round((t*100 - r)/100));}

// S,P,m,s,k;main(){for(scanf("%d%d",&S,&P);P--;)scanf("%d",&k),m=k>m?k:m,s+=k;printf("%d",s-S*m/100);}
        
