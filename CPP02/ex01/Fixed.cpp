/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:14:15 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/27 12:59:45 by tarchimb         ###   ########.fr       */
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

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_val = val << this->_bit;
	return ;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = (roundf(val * (1 << this->_bit)));
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
	return ((float)this->_val / (float)(1 << this->_bit));
}

int		Fixed::toInt(void) const
{
	return (this->_val >> _bit);
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

//Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
