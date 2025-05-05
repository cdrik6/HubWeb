/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polar.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 23:40:50 by caguillo          #+#    #+#             */
/*   Updated: 2025/05/02 23:53:33 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Given width and height. find all stars represented with * and send their polar coordinate rounded to 1 decimal, the angle is in Degree.
// The origine of the space is the top left character, similar to screen coordinate.
// The formulas to convert Euclidean coordinate into Polar coordinate are:
// r=sqrt(x²+y²) //Give you the radius
// φ=atan2(y,x) //Give you the angle

// You must convert the angle from radian to degree.

// When the space are empty, you must print "Dead".
// Input
// Line 1: The width and height of the space.
// The rest is all the row represent the space.
// Output
// Polar coordinate of each star.
// Constraints
// 1≤width≤100
// 1≤height≤100
// Example
// Input

// 2 2
// --
// *-

// Output

// 1.0 90.0

