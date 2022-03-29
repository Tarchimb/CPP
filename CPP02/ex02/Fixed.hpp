/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:14:17 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/29 09:21:57 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define END "\033[0m"

class Fixed
{
private:
	int					_val;
	static const int	_bit = 8;
	
public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
	Fixed			();
	Fixed			(Fixed const & src);
	Fixed			(const int);
	Fixed			(const float);
	~Fixed			();
/* ************************************************************************** */
/* 						 Overload comparison operators		  				  */
/* ************************************************************************** */
	bool			operator>(Fixed const & rhs);
	bool			operator<(Fixed const & rhs);
	bool			operator>=(Fixed const & rhs);
	bool			operator<=(Fixed const & rhs);
	bool			operator==(Fixed const & rhs);
	bool			operator!=(Fixed const & rhs);
/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
	Fixed 			&operator=(Fixed const & rhs);
	Fixed 			operator+(Fixed const & rhs);
	Fixed 			operator-(Fixed const & rhs);
	Fixed 			operator*(Fixed const & rhs);
	Fixed 			operator/(Fixed const & rhs);
/* ************************************************************************** */
/* 						 Overload increment operators		  				  */
/* ************************************************************************** */
	Fixed			&operator++(void);
	Fixed 			operator++(int nb);
	Fixed			&operator--(void);
	Fixed 			operator--(int nb);
/* ************************************************************************** */
/* 							Member's class functions			  			  */
/* ************************************************************************** */
	static Fixed	&min(Fixed &nb1, Fixed &nb2);
	static Fixed	&max(Fixed &nb1, Fixed &nb2);
	static Fixed	min(const Fixed &nb1, const Fixed &nb2);
	static Fixed	max(const Fixed &nb1, const Fixed &nb2);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const & rhs);

#endif