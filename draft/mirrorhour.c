// shortest
// error 24:42
// 169 (moi)
main(){char n[9];scanf("%[^\n]",n);char m[3];m[0]=n[1];m[1]=n[0];if(atoi(n)>24)return printf("NONE");printf("%s:%s",n,n);if(n[0]!=n[1]&&atoi(m)<60)printf(" %s:%s",n,m);}
// 155:
main(b,x,y){scanf("%d",&y);if(y<25)b=0,printf("%02d:%02d",y,y);x=10*(y%10);x+=y/10;if(y!=x&&x<61)printf("%s%02d:%02d",b?"":" ",y,x),b=0;if(b)puts("NONE");}
// 130 (sans error vegret)
X;main(N){scanf("%d",&N);if(N>23)return puts("NONE");printf("%02d:%02d",N,N);(X=N%10*10+N/10)!=N&&X<23&&printf(" %02d:%02d",N,X);}