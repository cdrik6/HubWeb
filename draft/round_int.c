// 1 2
// 3 5 
// --> middle point 2 3.5

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// // with cast
// int main()
// {
//     int x_1;
//     int y_1;
//     scanf("%d%d", &x_1, &y_1);
//     int x_2;
//     int y_2;
//     scanf("%d%d", &x_2, &y_2);

//     if ((double)(x_1 + x_2) / 2 == (double)((x_1 + x_2) / 2))
//         printf("%d ", (x_1 + x_2) / 2);
//     else 
//         printf("%.1f ", (float)(x_1 + x_2) / 2);
//     if ((double)(y_1 + y_2) / 2 == (double)((y_1 + y_2) / 2))
//         printf("%d\n", (y_1 + y_2) / 2);
//     else 
//         printf("%.1f\n", (float)(y_1+ y_2) / 2);

//     return 0;
// }

//with %
int main()
{
    int x_1;
    int y_1;
    scanf("%d%d", &x_1, &y_1);
    int x_2;
    int y_2;
    scanf("%d%d", &x_2, &y_2);
    

    if ((x_1 + x_2) % 2 == 0)
        printf("%d ", (x_1 + x_2) / 2);
    else 
        printf("%.1f ", (float)(x_1 + x_2) / 2);
    if ((y_1 + y_2) % 2 == 0)
        printf("%d\n", (y_1 + y_2) / 2);
    else 
        printf("%.1f\n", (float)(y_1+ y_2) / 2);

    return 0;
}

