/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:27:18 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/30 11:02:34 by tarchimb         ###   ########.fr       */
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

Point	&Point::operator=(Point const &)
{
	// this->_x = rhs.getX();
	// this->_y = rhs.getY();
	return (*this);
}

/* ************************************************************************** */
/* 				 				Getters	& Setters			  				  */
/* ************************************************************************** */
const Fixed	&Point::getX(void) const 
{
	return (_x);
}

const Fixed	&Point::getY(void) const 
{
	return (_y);
}

std::ostream	&operator<<(std::ostream &o, Point const &rhs)
{
	o << "(" << rhs.getX() << ", " << rhs.getY() << ")";
	return (o);
}
/* ************************************************************************** */