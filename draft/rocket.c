/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rocket.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:43:27 by caguillo          #+#    #+#             */
/*   Updated: 2025/04/28 01:57:45 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// A contribution by Storm_Blackthorn
// Approved by Synochrina , Diabetos and PatrickGPT
//  Goal
// It is the end of a Clash Royal match, and to win, you have to summon a fireball and hit the enemy tower so it gets destroyed! A level one fireball deals 200 damage. Each level higher adds 20 to the damage. Figure out if you can win just in time!

// P.S.: if the enemy tower has 0 health, you win!
// Input
// Line 1: An integer health: your enemy's tower's health
// Line 2: An integer level: your rocket level
// Output
// Line 1: a string of hehehehaw if you win, or rawr if you lose.
// followed by a space, and then: an integer for the enemy tower's health left
// Constraints
// 1 <= health <= 1000
// 1 <= level <= 30
// Example
// Input

// 250
// 12

// Output

// hehehehaw -170


// Standard Output Stream:

// 780
// 5
// hehehehaw -140

// Failure
// Found:

// 780

// Expected:

// rawr 500


// Standard Output Stream:

// 220
// 2
// hehehehaw -200

// Failure
// Found:

// 220

// Expected:

// hehehehaw 0



//  dammage = 200 + (leval - 1) * 20 > ou < health