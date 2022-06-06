/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:34:33 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/06 15:39:35 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include "alias.h"

# include <iostream>
# include <string>
# include <exception>
// # include "Array.tpp"

template <class T>
class Array
{
	public:
		T	*array;
		Array();
		Array(unsigned int n);
		Array(const Array<T> & src);
		~Array();

		Array	&operator=(const Array<T> &rhs);
		Array	&operator[](std::size_t idx);
		int		size();
		int		getSize() const;
		// class Array<T>::InvalidIndexException : public std::exception
		// {
		// 	const char	*what(void) const throw();
		// } ;
	private:
		int	_size;
		
};

template <class T>
std::ostream	&operator<<(std::ostream &o, Array<T> const &i);

#endif