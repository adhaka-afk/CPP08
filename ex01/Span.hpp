/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:45:16 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/05 13:16:24 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <limits>

class Span
{
	private:
		Span();
		unsigned int _maxS;
		std::vector<int> _numbers;
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &span);
		Span &operator=(const Span &span);

		void addNumber(int number);

		template <typename InputIterator>
		void addRange(InputIterator begin, InputIterator end);

		int shortestSpan();
		int longestSpan();

		class SpanException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Span is full";
				}
		};

		class NoSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: Span is empty or contains only one element";
				}
		};
};

template <typename InputIterator>
void Span::addRange(InputIterator begin, InputIterator end)
{
	if (_numbers.size() + std::distance(begin, end) > _maxS)
		throw SpanException();
	_numbers.insert(_numbers.end(), begin, end);
}
#endif
