/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 03:42:05 by caguillo          #+#    #+#             */
/*   Updated: 2024/10/16 05:36:58 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	int	a;
	int	b;

	std::cout << "a ?" << std::endl;
	std::cin >> a;
	std::cout << "b ?" << std::endl;
	std::cin >> b;
	std::cout << " a + a * b = " << a + a * b << std::endl;
	return (0);
}

// int	main(void)
// {
// 	std::cout << "age?" << std::endl;
// 	int age;
// 	std::cin >> age;

// 	std::cin.ignore();

// 	std::cout << "nom prenom?" << std::endl;
// 	std::string nom;
// 	std::getline(std::cin, nom);

// 	std::cout << nom << " = " << age << std::endl;

// 	return (0);
// }