// output the n-1 number
//  2, 4, 8, 24 --> 8

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// tableau
int main()
{
    char S[101];
    scanf("%[^\n]", S);        
    char *r[101];
            
    int k = 0;    
    char *tok = strtok(S,", ");        
    while (tok)
    {          
        r[k] = tok;
        k++;        
        tok = strtok(NULL,", ");        
    }
    k--;    
    if (k >= 1)
    {       
        printf("%s\n", r[k-1]);
    }
    return 0;
}


// // version lourde 1ere idee
// int main()
// {
//     char S[101];
//     scanf("%[^\n]", S);        
//     char D[101];
//     int i = 0;
//     while(S[i])
//     {
//         D[i] = S[i];
//         i++;
//     }
//     D[i] = 0;
//     // printf("%s\n", D);   
//     int k = 0;    
//     char *tok = strtok(S,", ");        
//     while (tok)
//     {          
//         // printf("%s\n", tok);
//         k++;        
//         tok = strtok(NULL,", ");        
//     }
//     k--;
//     k--;
//     // printf("%d\n", k);   
//     if (k >=0)
//     {
//         int j = 0;
//         char *tik = strtok(D,", ");    
//         while (j < k )
//         {
//             j++;        
//             // printf("ici %s\n", tik);        
//             tik = strtok(NULL,", ");        
//         }    
//         printf("%s\n", tik);
//     }
//     return 0;
// }