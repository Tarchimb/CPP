/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:27:18 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/29 14:22:57 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y) 
{
	
}

Point::Point(const Point &src)
{
	*this = src;
	return ;
}

Point::~Point()
{
}


/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */

Point	&Point::operator=(Point const &rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return (*this);
}

/* ************************************************************************** */
/* 				 				Getters	& Setters			  				  */
/* ************************************************************************** */
const Fixed	&Point::getX(void) const 
{
	Fixed const &tmp = _x;
	return (tmp);
}

const Fixed	&Point::getY(void) const 
{
	Fixed const &tmp = _y;
	return (tmp);
}

std::ostream	&operator<<(std::ostream &o, Point const &rhs)
{
	(void)rhs;
	o << "(" << rhs.getX() << ", " << rhs.getY() << ")";
	return (o);
}
/* ************************************************************************** */