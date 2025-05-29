#include <stdio.h>
// N;t;i;j;main(){scanf("%d",&N);int x[N];for(i=0;i<N;i++){scanf("%d",&x[i]);x[i]*=x[i];}for(i=0;i<N;i++){for(j=0;j<N;j++){if(x[i]<x[j]){t=x[i];x[i]=x[j];x[j]=t;}}}printf("%d",x[0]);for(i=1;i<N;i++){if(x[i]!=x[i-1])printf(" %d",x[i]);}}
// l;t;i;j;x[10000];main(N){scanf("%d",&N);for(;l<N;l++){scanf("%d",&x[l]);x[l]*=x[l];}for(;i<N;i++){for(j=0;j<N;j++){if(x[i]<x[j]){t=x[i];x[i]=x[j];x[j]=t;}}}printf("%d",x[0]);for(i=1;i<N;i++){if(x[i]!=x[i-1])printf(" %d",x[i]);}}



// i;l;L;t[10000];main(n){for(;~scanf("%d",&n);)l++&&t[n*n]++;for(;i<10000;i++)if(t[i])L++&&putchar(32),printf("%d",i);}

int main(){
	int i = 0;int l = 0;int L = 0;int t[10000]= {0}; int n;
	for(;~scanf("%d",&n);) //!= EOF ctrl+d 
		l++ && t[n*n]++;
	for(;i<10000;i++)
		if(t[i])
		{
			L++ && putchar(32);
			printf("%d",i);
		}
	}

