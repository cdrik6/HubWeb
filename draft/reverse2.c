// 1000 --> 1k1
// 137 --> 137k0
// 10200000 --> 10.2k2
// 598400000 --> 598.4k2

#include <stdio.h>
#include <string.h>

int main(void)
{
    // char *s = argv[1];
    char s[61];
    scanf("%[^\n]", s);
    
    int j;
    if (strlen(s) % 3 == 0)
        j = 2;
    else if (strlen(s) % 3 == 1)
        j = 0;
    else if (strlen(s) % 3 == 2)
        j = 1;
    for (int k = 0; k <= j; k++)    
    {
        printf("%c", s[k]);
    }
    j++;
    int exp = (strlen(s) - j) / 3;            
    int sum = 0;
    for (int k = j; k < strlen(s); k++)        
        sum  = sum + (s[k] - 48);    
    if (sum != 0)
    {
        printf(".");        
        while (sum !=0)
        {
            printf("%c", s[j]);            
            sum = sum - (s[j] - 48);
            j++;
        }        
    }    
    printf("k%d\n", exp);

}
