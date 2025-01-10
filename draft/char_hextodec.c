#include <stdlib.h>
#include <stdio.h>

int main()
{
    char c[3] = "6c";    
    long a = strtol(c, NULL, 16);
    printf("%c\n", (char)a);


}
