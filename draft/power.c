// 

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    double A;
    double X;
    scanf("%lf%lf", &A, &X);
    // printf("%f\n",A);
    // printf("%f\n",X);
    int B;
    int Y;
    scanf("%d%d", &B, &Y);
    // printf("%d\n",B);
    // printf("%d\n",Y);	

	double a = pow(A,B);
	double b = pow(X,Y);
	double r = a - b;		
	// long double a = powl((long double)A,B);
	// long double b = powl((long double)X,Y);
	// long double r = a - b;	
	// printf("%.15Lf\n",a);
    // printf("%.15Lf\n",b);
    if (r >= 0)
        printf("%.0f", round(r));
    else
        printf("%.0f", round(-r));

	// long double a = powl(41.72L, 6);
    // long double b = powl(41.720001L, 6);
	// printf("a = %.15Lf\n", a);
    // printf("b = %.15Lf\n", b);
    // printf("diff = %.10Lf\n", b - a);    

	// float x = 41.72;
    // float x2 = 41.720001;
    // long double a = powl((long double)x, 6);
    // long double b = powl((long double)x2, 6);

    // printf("a = %.15Lf\n", a);
    // printf("b = %.15Lf\n", b);
    // printf("diff = %.10Lf\n", b - a);

    return 0;
}