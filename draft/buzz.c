
// https://www.codingame.com/ide/demo/9773828c4b33e669594ab468332383ec6caf18

// A contribution by __yel__p
// Approved by Harry.B. , Unnamed CodinGamer and Eulero314
//  Goal
// For Buzz Lightyear to defeat Zurg, the toys need to spell the keyword to infinity and beyond using Mr. Spell. To do so, some of them are arranged in a queue of n toys and ready to spell the keyword.
// The rules are:
// 1. The first toy in the queue will spell the first character of the keyword, "t", if this character is part of his name, regardless of the case (case insensitive).
// 2. If the character "t" is not found in the toy's name, we continue to the next toy in the queue, etc., until the character is found.
// 3. Once "t" is finally spelled by a toy, we restart from the beginning of the queue to spell the "o", then the " ", then "i","n","f", "i", ... until "d" the last character of the keyword.
// 4. Whitespaces are treated just like any other character of the keyword.
// 5. A toy within the queue can be used only once.

// If the keyword to infinity and beyond can be spelled, given the toys' queue and following the above rules, then print the used toys, one per line and in the order they have in the queue ;
// Otherwise, print Red alert!!! before it is too late !
// Input
// Line 1: An integer n for the number of toys in the queue.
// Next n lines: The name of each toy in the queue (string that can contain letters, whitespaces, digits and even punctuations).
// Output
// The name of each toy that spells a character of the keyword (one per line, in the same order of use) if the keyword is completely spelled. Red alert!!! otherwise.
// Constraints
// Example
// Input

// 33
// Barrel of Monkeys
// Bo Peep
// Billy
// Buzz Lightyear
// Dolly
// Duckie
// Etch A Sketch
// Green Army Men
// Hamm
// Hockey Puck
// Lenny
// Little Red Car
// Magic 8-Ball
// Mike
// Mr. Potato Head
// Mr. Shark
// Mr. Spell
// RC
// Rex
// Robot
// Rock-a-Stack
// Rocky Gibraltar
// Roly Poly Clown
// See n Say
// Slinky Dog
// Snake
// Teddy
// Tikes
// Toy Train
// Troikas
// Troll
// Woody
// Goat and Gruff

// Output

// Buzz Lightyear
// Barrel of Monkeys
// Bo Peep
// Billy
// Green Army Men
// Goat and Gruff
// Duckie
// Lenny
// Little Red Car
// Etch A Sketch
// Dolly
// Hockey Puck
// Hamm
// Roly Poly Clown
// Mr. Potato Head
// Magic 8-Ball
// Robot
// Mike
// Rocky Gibraltar
// Rock-a-Stack
// See n Say
// Slinky Dog

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * It's a toy story !
 **/

// int main()
// {    
//     int n;
//     scanf("%d", &n); fgetc(stdin);	
// 	//
// 	char out[n][51];
// 	for (int i = 0; i < n; i++)
// 	{
// 		out[i][0] = 0;
// 	}
// 	//
// 	char toy[n][51];
// 	for (int i = 0; i < n; i++)
// 	{
//         scanf("%[^\n]", toy[i]); fgetc(stdin);
// 	}
// 	//
// 	printf("\n");
// 	//	
// 	char m[50] = "to infinity and beyond";
//     int k = 0;
// 	int r = 0;
// 	int red = 0;
// 	int l = 0;	
//     while (m[k])
//     {      
// 		r = 0;		
// 		for (int i = 0; i < n; i++)
// 		{
// 			int j = 0;
// 			while (toy[i][j])
// 			{                
// 				if (toy[i][j] == m[k] || toy[i][j] == m[k] - 32)
// 				{
// 					// printf("--> %s\n", toy[i]);
// 					strcpy(out[l],toy[i]);
// 					// printf("copy %s\n", out[i]);
// 					l++;
// 					r = 1;					
// 					toy[i][0] = 0;
// 					break;
// 				}					
// 				j++;
// 			}
// 			if (r == 1)
// 				break;
// 		}
// 		if (r == 0)
// 		 	red = 1;
// 		k++;
//     }
// 	if (red == 1)
// 		printf("Red alert!!!\n");
// 	else
// 	{
// 		for (int i = 0; i < n; i++)
// 		{
// 			if (out[i][0] != 0)
// 				printf("%s\n", out[i]);
// 		}
// 	}	
//     return 0;
// }

// avec sprintf 

int main()
{    
    int n;
    scanf("%d", &n); fgetc(stdin);	
	
	char str[1000] = {0};
	char toy[n][51];
	for (int i = 0; i < n; i++)
	{
        scanf("%[^\n]", toy[i]); fgetc(stdin);
	}
	//
	printf("\n");
	//	
	char m[50] = "to infinity and beyond";
    int k = 0;
	int r = 0;
	int red = 0;
	// int l = 0;	
    while (m[k])
    {      
		r = 0;		
		for (int i = 0; i < n; i++)
		{
			int j = 0;
			while (toy[i][j])
			{                
				if (toy[i][j] == m[k] || toy[i][j] == m[k] - 32)
				{
					if (str[0])
						sprintf(str, "%s\n%s", str, toy[i]);
					else
						sprintf(str, "%s", toy[i]);
					r = 1;					
					toy[i][0] = 0;
					break;
				}					
				j++;
			}
			if (r == 1)
				break;
		}
		if (r == 0)
		 	red = 1;
		k++;
    }
	if (red == 1)
		printf("Red alert!!!\n");
	else
		printf("%s\n", str);	
    return 0;
}

// N;t;i;j;main(){scanf("%d",&N);int x[N];for(i=0;i<N;i++){scanf("%d",&x[i]);x[i]*=x[i];}for(i=0;i<N;i++){for(j=0;j<N;j++){if(x[i]<x[j]){t=x[i];x[i]=x[j];x[j]=t;}}}printf("%d",x[0]);for(i=1;i<N;i++){if(x[i]!=x[i-1])printf(" %d",x[i]);}}