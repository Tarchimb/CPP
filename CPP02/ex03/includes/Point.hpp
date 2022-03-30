/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:27:21 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/30 15:52:55 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point
{
	public:
/* ************************************************************************** */
/* 						  Constructors && Destructors		  				  */
/* ************************************************************************** */
		Point();
		Point(const float x, const float y);
		Point(Point const & src);
		~Point();

/* ************************************************************************** */
/* 						 Overload arithmetic operators		  				  */
/* ************************************************************************** */
		Point	&operator=( Point const & rhs );
		
/* ************************************************************************** */
/* 				 				Getters	& Setters			  				  */
/* ************************************************************************** */
		const Fixed	&getX(void) const;
		const Fixed	&getY(void) const;
	private:
		Fixed const	_x;
		Fixed const	_y;

};

std::ostream	&operator<<( std::ostream & o, Point const & i );

#endif /* *********************************************************** POINT_H */