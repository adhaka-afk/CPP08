/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:44:59 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/06 21:19:42 by adhaka           ###   ########.fr       */
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
	for (int a = 0; a < 100; a++)
		vec.push_back(a);

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
		std::cout << "Element found (v): " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// Testing with a list

	std::list<int> lst;
	for (int b = 0; b < 10; b++)
		lst.push_back(b);

	try
	{
		std::istringstream iss(argv[1]);
		int value;
		if (!(iss >> value))
		{
			std::cerr << "Invalid input: Not an integer" << std::endl;
			return 1;
		}
		std::list<int>::iterator it = easyfind(lst, value);
		std::cout << "Element found in list: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
