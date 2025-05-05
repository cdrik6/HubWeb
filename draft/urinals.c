// s[11]
// OXX = 0
// OOOX = 2

// int main()
// {
//     char s[11];
//     scanf("%[^\n]", s); 
//     // printf("%s", s)   ; 
//     int r = 0;
//     int n = strlen(s);
//     for (int i = 0; i<n; i++)
//     {
//         if (s[i-1] && s[i+1] && s[i-1] == '0' && s[i]=='O' && s[i+1]=='O') 
//                 r++;
//         else if (s[0]=='O' && s[1] == 'O' )
//             r++;
//         else if (s[n-2]=='O' && s[n-1] == 'O')
//              r++;
         
//     }
//     printf("%d\n", r);    
// }

// vegret
// r;main(i){char s[11];gets(s);for(i=r=0;s[i];){r+=s[i]+(i?s[i-1]:79)+(s[++i]|79)<238;}printf("%d",r);}

// vantavoids
// int main()
// {
//     char s[11];
//     int count;
//     scanf("%[^\n]", s);
//     for (int i = 0; i < strlen(s); i++)
//         if (s[i] == 'O' && (i == 0 || s[i-1] != 'X') && (s[i+1] == '\0' || s[i+1] != 'X'))
//             count++;
//     printf("%d\n", count);
//     return 0;
// }

#include <stdio.h>

int main()
{
    char s[11];
    scanf("%[^\n]", s); 
    
    int r = 0;
    int i = 0;
    while (s[i])
    {
        if (s[i] == 'O')
        {
            if (i == 0 && s[i+1] && s[i+1] == 'O')
                r++;
            else if (!s[i+1] && s[i-1] && s[i-1] == 'O')
                r++;
            else if (s[i-1] == 'O' && s[i+1] == 'O')        
                r++;
        }
        i++;
    }
    printf("%d\n", r);
}    