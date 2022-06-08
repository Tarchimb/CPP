/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:59:50 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/07 18:16:53 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <exception>
# include <stack>
# include "alias.h"

template <typename T>
class	MutantStack : public std::stack<T>
{
	public :
		MutantStack() {};
		MutantStack(const MutantStack &src) {*this = src;}
		virtual ~MutantStack() {}
		
		MutantStack	&operator=(const MutantStack &rhs)
		{
			if (this != &rhs)
			{
				
			}
			return (*this);
		}
	private :
	
};

template <typename T>
std::ostream	&operator<<(std::ostream &o, MutantStack<T> &src);

#endif