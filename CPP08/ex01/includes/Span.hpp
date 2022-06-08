/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:25:32 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/07 18:36:47 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <exception>
# include "alias.h"

class	FullArrayException : public std::exception
{
	const char	*what() const throw()
	{
		return ("Array is already full!");
	}
};

class	NotEnoughValueException : public std::exception
{
	const char	*what() const throw ()
	{
		return ("Not enough value in array!");
	}
};

class	TooMuchNumberException : public std::exception
{
	const char	*what() const throw ()
	{
		return ("Size of array isn't high enough.");
	}
};

class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &src);
		~Span();

		Span				&operator=(const Span &rhs);
	
		void				addNumber(int value);
		int					shortestSpan(void);
		int					longestSpan(void);
		void				addMultipleNumber(unsigned int number);
		std::vector<int>	&getArray(void);
		
	private:
		std::vector<int>	_array;
		
};

std::ostream	&operator<<(std::ostream &o, Span &src);

#endif