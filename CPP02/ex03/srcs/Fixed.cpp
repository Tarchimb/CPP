/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:14:15 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 16:07:54 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */

Fixed::Fixed() : _val(0)
{
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return ;
}

Fixed::Fixed(const int val)
{
	this->_val = val << this->_bit;
	return ;
}

Fixed::Fixed(const float val)
{
	this->_val = (roundf(val * (1 << this->_bit)));
	return ;
}

Fixed::~Fixed()
{
	return ;
}

/* ************************************************************************** */
/* 						 Overload comparison operators		  				  */
/* ************************************************************************** */

bool	Fixed::operator>(Fixed const & rhs)
{
	if (rhs._val < this->_val)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const & rhs)
{
	if (rhs._val > this->_val)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const & rhs)
{
	if (rhs._val <= this->_val)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const & rhs)
{
	if (rhs._val >= this->_val)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const & rhs)
{
	if (rhs._val == this->_val)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const & rhs)
{
	if (rhs._val != this->_val)
		return (true);
	return (false);
}

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */

Fixed &Fixed::operator=(Fixed const & rhs)
{
	this->_val = rhs.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const & rhs)
{
	Fixed	temp = *this;
	temp._val += rhs.getRawBits();
	return (temp);
}

Fixed Fixed::operator-(Fixed const & rhs)
{
	Fixed	temp = *this;
	temp._val -= rhs.getRawBits();
	return (temp);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	Fixed	temp = *this;
	temp._val *= rhs.toFloat();
	return (temp);
}

Fixed 	Fixed::operator/(Fixed const & rhs)
{
	Fixed	temp = *this;
	temp._val /= rhs.toFloat();
	return (temp);
}

/* ************************************************************************** */
/* 						 Overload increment operators		  				  */
/* ************************************************************************** */

Fixed &Fixed::operator++(void)
{
	this->_val++;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->_val--;
	return (*this);
}

Fixed 		Fixed::operator++(int nb)
{
	Fixed	temp = *this;
	if (!nb)
		++*this;
	else
		this->_val += (nb << _bit);
	return temp;
}

Fixed 		Fixed::operator--(int nb)
{
	Fixed	temp = *this;
	if (nb == 0)
		--*this;
	else
		this->_val -= (nb << _bit);
	return temp;
}

/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */

int	Fixed::getRawBits(void) const
{
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

Fixed	&Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if (nb1.getRawBits() > nb2.getRawBits())
		return (nb2);
	return (nb1);
}

Fixed	&Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if (nb1.getRawBits() < nb2.getRawBits())
		return (nb2);
	return (nb1);
}

Fixed 	Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
	if (nb1.getRawBits() > nb2.getRawBits())
		return (nb2);
	return (nb1);
}

Fixed	Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
	if (nb1.getRawBits() < nb2.getRawBits())
		return (nb2);
	return (nb1);
}

/* ************************************************************************** */
/* 								Others's functions				  			  */
/* ************************************************************************** */

//Overload << operator
std::ostream	&operator<<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
