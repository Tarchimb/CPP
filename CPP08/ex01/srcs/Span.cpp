/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:25:22 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/07 18:43:50 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(const Span &src) {*this = src;}

Span::Span(unsigned int n) {_array.reserve(n);}

std::vector<int>	&Span::getArray() {return (_array);}

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{

	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Span &src)
{
	std::vector<int>	&cpy = src.getArray();
	
	o << "Capacity : " << cpy.capacity() << std::endl;
	o << "Is Empty : " << (cpy.empty() ? "Yes" : "No") << std::endl;
	o << "Size : " << cpy.size() << std::endl;
	try
	{
		o << "Shortest Span : " << src.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		o << "Longest Span : " << src.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (o);
}

void	Span::addNumber(int value)
{
	if (_array.size() == _array.capacity())
		throw(FullArrayException());
	_array.push_back(value);
}

int	Span::shortestSpan(void)
{
	if (_array.size() <= 1)
		throw(NotEnoughValueException());
	int	min = *std::min_element(_array.begin(), _array.end());
	int	min_2 = _array[1];
	for (int i = 0; i < static_cast<int>(_array.size()); i++)
	{
		if (_array[i] < min_2 && _array[i] > min)
			min_2 = _array[i];
	}
	return (min_2 - min);
}

int	Span::longestSpan(void)
{
	if (_array.size() <= 1)
		throw(NotEnoughValueException());
	int	min = *std::min_element(_array.begin(), _array.end());
	int	max = *std::max_element(_array.begin(), _array.end());
	return (max - min);
}

void	Span::addMultipleNumber(unsigned int number)
{
	if (number > _array.capacity() - _array.size())
		throw(TooMuchNumberException());
	for (unsigned int i = 0; i < number; i++)
	{
		_array.push_back(rand() % 2147483647);
	}
}