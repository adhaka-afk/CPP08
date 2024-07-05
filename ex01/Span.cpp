/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:45:10 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/05 02:26:08 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _maxS(n)
{
}
Span::~Span()
{
}
Span::Span(const Span &span) : _maxS(span._maxS), _numbers(span._numbers)
{
}

Span &Span::operator=(const Span &span)
{
	if (this != &span)
	{
		_maxS = span._maxS;
		_numbers = span._numbers;
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (_numbers.size() >= _maxS)
		throw SpanException();
	_numbers.push_back(number);
}

int Span::shortestSpan()
{
	if (_numbers.size() <= 1)
		throw NoSpanException();
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int min = std::numeric_limits<int>::max();
	for (unsigned int i = 0; i < sorted.size() - 1; i++)
	{
		int diff = sorted[i + 1] - sorted[i];
		if (diff < min)
			min = diff;
	}
	return min;
}

int Span::longestSpan()
{
	if (_numbers.size() <= 1)
		throw NoSpanException();
	std::vector<int>::iterator min = std::min_element(_numbers.begin(), _numbers.end());
	std::vector<int>::iterator max = std::max_element(_numbers.begin(), _numbers.end());
	return *max - *min;
}
