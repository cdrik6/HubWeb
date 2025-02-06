
r; int main()
{
    char l[4];
    scanf("%[^\n]", l);
    if (l[1]=='+')
        r= l[0]-96+l[2];
    if (l[1]=='-')
        r= l[0]-l[2];
    if (l[1]=='*')
        r= (l[0]-48)*(l[2]-48);
    if (l[1]=='/')    
        r= round((double)(l[0]-48)/(l[2]-48));
    printf("%d\n",r);}