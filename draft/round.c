
// r; int main()
// {
//     char l[4];
//     scanf("%[^\n]", l);
//     if (l[1]=='+')
//         r= l[0]-96+l[2];
//     if (l[1]=='-')
//         r= l[0]-l[2];
//     if (l[1]=='*')
//         r= (l[0]-48)*(l[2]-48);
//     if (l[1]=='/')    
//         r= round((double)(l[0]-48)/(l[2]-48));
//     printf("%d\n",r);
// }

#include <stdio.h>
#include <math.h>

double rond(double r, int digits)
{
    double f = pow(10, digits);
    return (round(r * f) / f);
}

int main(void)
{
    double r = 3.14159;

    printf("%f\n", rond(r,1));
    printf("%f\n", rond(r,2));
    printf("%f\n", rond(r,3));

    printf("%.1f\n", rond(r,1));
    printf("%.2f\n", rond(r,2));
    printf("%.3f\n", rond(r,3));

    printf("%.1f\n", r);
    printf("%.2f\n", r);
    printf("%.3f\n", r);
}