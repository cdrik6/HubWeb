#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/



int main()
{
    char t[513];
    scanf("%[^\n]", t);
    int r[513];
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int j = 0;
    int i = 0;
    int min;
    int tmp;
    while( t[i])
    {
        while(t[i] && t[i] != '-')
        {            
            r[j] = t[i] - 48;
            j++;
            i = i + 2;
        }        
        for (int k = 0; k < j; k++)
        {            
            for (int l = k+1; l < j; l++)            {  
                
                if (r[k] > r[l])
                {
                    tmp = r[k];
                    r[k] = r[l];            
                    r[l] = tmp;
                }                
            }
            if (k == 0)
                printf("%d", r[k]);
            else 
                printf(" %d", r[k]);
        }
        if (t[i] == '-')
            printf(" - ");    
        j = 0;
        i = i + 2;
        // fprintf(stderr, "%d\n", i);
    }

    


    printf("\n");

    return 0;
}