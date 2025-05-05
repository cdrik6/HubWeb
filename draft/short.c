//mine = 84
a;d;n;main(){scanf("%d",&a);scanf("%d",&d);scanf("%d",&n);printf("%d\n",a+(n-1)*d);}

//--> -2 
a;d;n;main(){scanf("%d",&a);scanf("%d",&d);scanf("%d",&n);printf("%d",a+(n-1)*d);}

// best c = 66
main(){int a,d,n;scanf("%d%d%d",&a,&d,&n);printf("%d",a+(n-1)*d);}

//--> ca passait en 62 !


// in 13:05 --> out 785

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>

// int main()
// {
//     char duration[257];
//     scanf("%s", duration);
//     int s = 0;
//     int k = 0;
//     char *tok = strtok(duration, ":");
//     while (tok)
//     {
//         // printf("%s\n", tok);
//         if  (k == 0)
//             s = s + atoi(tok)*60;
        
//         if  (k == 1)
//             s = s + atoi(tok);
//         k++;
//         tok = strtok(NULL, ":");
//     }

//     printf("%d\n", s);

//     return 0;
// }