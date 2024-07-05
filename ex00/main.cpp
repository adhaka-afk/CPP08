/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:44:59 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/05 11:28:38 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <sstream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./easyfind [number]" << std::endl;
		return 1;
	}

	// Testing with a vector

	std::vector<int> vec;
	for (int i = 0; i < 100; i++)
		vec.push_back(i);

	try
	{
		std::istringstream iss(argv[1]);
		int val;
		if (!(iss >> val))
		{
			std::cerr << "Invalid input: Not an integer" << std::endl;
			return 1;
		}
		std::vector<int>::iterator it = easyfind(vec, val);
		std::cout << "Element found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// Testing with a list

	std::list<int> lst;
	for (int i = 0; i < 10; i++)
		lst.push_back(i);

	try
	{
		std::istringstream iss(argv[1]);
		int val;
		if (!(iss >> val))
		{
			std::cerr << "Invalid input: Not an integer" << std::endl;
			return 1;
		}
		std::list<int>::iterator it = easyfind(lst, val);
		std::cout << "Element found in list: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
