/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:34:33 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/07 11:16:51 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include "alias.h"

# include <iostream>
# include <string>
# include <exception>
# include <stdlib.h>
# include <time.h>

template <class T>
class Array
{
	public:
		Array() : _size (0) {}
		Array(unsigned int n) : _size(n), _array(new T[n]) {}
		Array(const Array<T> & src) : _size(0), _array(NULL) {*this = src;}
		~Array(){delete [] _array;}

		Array	&operator=(const Array<T> &rhs)
		{
			if (this != &rhs)
			{
				if (_size > 0)
					delete [] _array;
				_size = rhs.getSize();
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return (*this);
		}
		
		T	&operator[](unsigned int i)
		{
			if (i < 0 ||  i > _size)
				throw InvalidIndexException();
			return (_array[i]);
		}
		
		int					size();
		unsigned int		getSize() const {return (_size);}
		T					getArray(int i) const {return (_array[i]);}
		class InvalidIndexException : public std::exception
		{
			const char	*what(void) const throw()
			{
				return ("Invalid index");
			}
		} ;
	private:
		unsigned int	_size;
		T				*_array;
		
};

template <class T>
std::ostream	&operator<<(std::ostream &o, Array<T> const &i)
{
	o << "Tab size : " << i.getSize() << std::endl;
	for (unsigned int j = 0; j < i.getSize(); j++)
	{
		o << "Index [" << j << "]: " << i.getArray(j) << std::endl;
	}
	return (o);
}

#endif