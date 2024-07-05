/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:45:03 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/05 02:30:25 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(12);
		sp.addNumber(7);
		sp.addNumber(1);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		Span bigSpan(1000);
		std::vector<int> num;
		for (int i = 0; i < 1000; i++)
			num.push_back(i);
		bigSpan.addRange(num.begin(), num.end());

		std::cout << " (For bigSpan) Shortest span: " << bigSpan.shortestSpan() << std::endl;
		std::cout << "(For bigSpan) Longest span: " << bigSpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;

}
