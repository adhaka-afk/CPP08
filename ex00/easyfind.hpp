/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:44:55 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/05 01:33:04 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <exception>
#include <list>

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return "Element not found";
		}
};


template <typename T>
typename T::iterator easyfind(T &container, int val)
{
	typename T::iterator it = std::find(container.begin(), container.end(), val);
	if (it == container.end())
		throw NotFoundException();
	return it;
}
#endif
