/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:01:04 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/06 15:41:16 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Array.hpp"


template <class T>
Array<T>::Array() : _size(0)
{
	array = new T[0];
}

template <class T>
Array<T>::Array(unsigned int n) : _size(n)
{
	array = new T[n];
	for (unsigned int i = 0; i < n; i++)
	{
		array[i] = 0;
	}
}

template <class T>
int		Array<T>::size()
{
	std::cout << "In size function" << std::endl;
	return (0);
}

template <class T>
Array<T>::Array(const Array<T> &src)
{
	_size = src.getSize();
	array = new T[_size];
	for (int i = 0; i < _size; i++)
	{
		array[i] = src.array[i];
	}
}

template <class T>
Array<T>::~Array()
{
	delete array;
}

template <class T>
Array<T>	&Array<T>::operator=(const Array<T> &rhs)
{
	if (rhs.getSize() > _size)
	{
		std::cout << "Tab is to small to copy this one:" << std::endl;
		return (*this);
	}
	for (int i = 0; i < _size; i++)
	{
		array[i] = rhs.array[i];
	}
	return (*this);
}

template <class T>
int		Array<T>::getSize() const
{
	return (_size);
}

template <class T>
Array<T>	&Array<T>::operator[](std::size_t idx)
{
	if (static_cast<int>(idx) < _size)
	{
		std::cout << array[idx];
	}
	else
		std::cout << "Out of range";
	std::cout << std::endl;
	return (*this);
}

template <class T>
std::ostream &                  operator<<( std::ostream & o, Array<T> const & i )
{
	std::cout << "This array has a size of " << i.getSize() << " and contains :\n";
	for (int j = 0; j < i.getSize(); j++)
	{
		std::cout << i.array[j];
	}
	std::cout << std::endl;
	return o;
}