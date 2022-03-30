/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:24:38 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/30 16:11:54 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float abpArea = (((b.getX().toFloat() - a.getX().toFloat()) * (point.getY().toFloat() - a.getY().toFloat())) - ((point.getX().toFloat() - a.getX().toFloat()) * (b.getY().toFloat() - a.getY().toFloat()))) * -0.5;
	float bcpArea = (((b.getX().toFloat() - point.getX().toFloat()) * (c.getY().toFloat() - point.getY().toFloat())) - ((c.getX().toFloat() - point.getX().toFloat()) * (b.getY().toFloat() - point.getY().toFloat()))) * -0.5;
	float acpArea = (((point.getX().toFloat() - a.getX().toFloat()) * (c.getY().toFloat() - a.getY().toFloat())) - ((c.getX().toFloat() - a.getX().toFloat()) * (point.getY().toFloat() - a.getY().toFloat()))) * -0.5;
	if ((abpArea == 0 && bcpArea == 0) || (abpArea == 0 && acpArea == 0)
		|| (bcpArea == 0 && acpArea == 0) || abpArea < 0 || bcpArea < 0
			|| acpArea < 0)
		return (false);
	return (true);
}