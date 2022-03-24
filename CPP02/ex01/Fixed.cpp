/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:14:15 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/24 14:43:51 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructor
Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

//Constructor by copy
Fixed::Fixed(Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float)
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits(int const raw)
{
	this->_val = raw;
}

float		Fixed::toFloat(void) const
{
		
}

int		Fixed::toInt(void) const
{
		
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.getRawBits();
	return (o);
}

//Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
