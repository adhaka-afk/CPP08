/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:44:59 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/05 01:34:57 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./easyfind [number]" << std::endl;
		return 1;
	}
	std::vector<int> vec;
	for (int i = 0; i < 100; i++)
		vec.push_back(i);

	try
	{
		std::vector<int>::iterator it = easyfind(vec, std::stoi(argv[1]));
		std::cout << "Element found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;

}
