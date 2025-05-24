// Ulen Mosk drives an electric car from point A to point B. He drives at a constant speed of 100 km/hour. You have to calculate if he can reach point B within the time given.
// The battery of his electric car has a capacity of 400 km, and starts with a full battery. Each charging takes 30 minutes.

// Will he reach point B within the time given?
// Input
// Line 1: An integer d = distance to travel in km
// Line 2: An integer t = time given to reach point B in hours
// Output
// Answer: Will he reach point B within the time given? (Yes, made it with time left!, Exactly on time! or Not enough time!)
// Constraints
// 500 < d < 5000
// 1 < t < 50
// Example
// Input

// 1000
// 12

// Output

// Yes, made it with time left!

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int d;
    scanf("%d", &d);
    int t;
    scanf("%d", &t);
    
    int r = d % 400;    
	double dt;
	if (r == 0)
	 	dt = (double)d/100 + ((double)d/400 - 1)/2;
	else
		dt = (double)d/100 + ((double)d/400)/2;
	printf("%f\n", dt);
    if (dt  < (double)t)
        printf("Yes, made it with time left!\n");
    else if (dt == (double)t )
        printf("Exactly on time!\n");
    else 
        printf("Not enough time!\n"); 

    return 0;
}

