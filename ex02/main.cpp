/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:45:19 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/06 20:58:39 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	try
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		std::cout << "Top: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(757);
		mstack.push(12);
		mstack.push(10);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "Iteratorating through the stack: \n";
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	//Additional test
	try
	{
		std::cout << std::endl;
		std::cout << "-----------Additional test-------------- \n";
		std::cout << std::endl;
		MutantStack<int> originalStack;
		for (int i = 0; i < 10; ++i)
		{
			originalStack.push(i * 2);
		}

		MutantStack<int> copiedStack(originalStack);
		copiedStack.push(21);

		std::cout << "Original Stack: \n";
		for (MutantStack<int>::iterator it = originalStack.begin(); it != originalStack.end(); ++it)
		{
			std::cout << *it << std::endl;
		}

		std::cout << "Copied & Modified Stack: \n";
		for (MutantStack<int>::iterator it = copiedStack.begin(); it != copiedStack.end(); ++it)
		{
			std::cout << *it << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
