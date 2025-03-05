// 67 
// 15
// --> 60

// 11345
// 2
// --> 11344

// 729
// 3
// --> 729

// 873123
// 883
// --> 872404

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    int m = atoi(argv[1]);
    int n = atoi(argv[2]);

    printf("%d\n", m - m%n);
}