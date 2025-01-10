/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguillo <caguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 00:15:25 by caguillo          #+#    #+#             */
/*   Updated: 2024/10/19 01:00:40 by caguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int	main(void)
{
	std::string const path = "test2.cpp";
	// std::ifstream file(path.c_str());
    std::ifstream file;
    
    file.open(path);

	if (file)
	{
		std::string line;
		while (getline(file, line))
			std::cout << line << std::endl;
	}
}