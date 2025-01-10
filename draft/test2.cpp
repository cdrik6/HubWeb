/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:35:17 by caguillo          #+#    #+#             */
/*   Updated: 2024/10/18 23:54:03 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

// test tableau de vector

void	ShowTab(std::vector<int> tab[], int n);

int	main(int argc, char **argv)
{
	std::vector<int> tab[3];
	tab[0].push_back(0);
	tab[0].push_back(1);
	tab[0].push_back(2);
	tab[1].push_back(3);
	tab[1].push_back(4);
	tab[1].push_back(5);
	tab[2].push_back(6);
	tab[2].push_back(7);
	tab[2].push_back(8);
	tab[2].push_back(9);
	tab[1].pop_back();
	// tab.pop_back();
	// tab.pop_back();
	// tab.pop_back();
	ShowTab(tab, 3);
}

void	ShowTab(std::vector<int> tab[], int n)
{
	int	i;
	int	j;

	j = 0;
	while (j < n)
	{
		std::cout << "j = " << j << std::endl;
		std::cout << "size j = " << tab[j].size() << std::endl;
		i = 0;
		while (i < tab[j].size())
		{
			std::cout << tab[j][i] << /*" " << tab[i].size() << */ std::endl;
			i++;
		}
		j++;
	}
}

// test trop de pop

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	std::vector<int> tab;
// 	tab.push_back(0);
// 	tab.push_back(1);
// 	tab.push_back(2);

//     tab.pop_back();
//     tab.pop_back();
//     tab.pop_back();
//     tab.pop_back();

// 	i = 0;
// 	while (i < tab.size())
// 	{
// 		std::cout << tab[i] << tab.size() << std::endl;
// 		i++;
// 	}
// }

// test allez au dela de size
// dans le cas sans pop --> echec
// puis pop --> ca passe !?

// int main (int argc, char **argv)
// {
//     std::vector<int> tab;

//     tab.push_back(0);
//     tab.push_back(1);
//     tab.push_back(2);
//     tab.push_back(3);
//     tab.pop_back();

//     int i = 0;
//     while(i <= tab.size())
//     {
//         std::cout << tab[i] << tab.size() << std::endl;
//         i++;
//     }

// }