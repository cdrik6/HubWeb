// In Nuremberg, we have a famous Bratwurst.
// Whatever the taste, the size is exceptional as it is tiny.
// There are various legends as to why this is so. One is: In the Middle Ages, visitors could be served 
// at night through the keyhole of the closed city wall gates.

// Now the quest: We have 4 city wall gates. Each has a different keyhole diameter, given in [mm].
// Also given is the amount of GroundMeatMix in [kg] with a density ρ = 1200 kg/m³ (kilogram per cubic meter).

// Every gate needs the exact same count of Nuremberg Bratwurst with a length of 8 cm.
// How much can the butcher deliver to each entrance, if you give each gate the thickest Bratwurst possible?
// (Different cylindrical volumes for each, but same number of Bratwurst for each)

// If the result isn't a exact number, the shifty Nuremberg butchers round it to the closest integer. :-)
// Input
// Line 1: GroundMeatMix in [kg]
// Line 2: North gate keyhole diameter in [mm]
// Line 3: West gate keyhole diameter in [mm]
// Line 4: East gate keyhole diameter in [mm]
// Line 5: South gate keyhole diameter in [mm]
// Output
// 1 <= GroundMeatMix <= 1000 [kg]
// Example
// Input
// 1
// 20
// 19
// 22
// 17
// Output
// 9

//??????????????????????????????????????????????
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int g;
    scanf("%d", &g);
    int r = 0;    
    for (int i = 0; i < 4; i++) {
        int d;
        scanf("%d", &d);
        if (i == 0)       
            r = d;
        else
        {
            if (r < d)
                r = d;
        }
    }
    // printf("%d\n",r);
    double t = (double)r;
    double l = 0;
    l = 1000000000 * g / (1200 * 3.14159 * (t/2)*(t/2));
    printf("%f\n", l);
    printf("%d\n", (int)(l/(4*80)));

    return 0;
}