/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:24:38 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 16:14:44 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

float	get_area(Point const a, Point const b, Point const c)
{
	float	area;
	
	area = abs(((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()))
		+ (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()))
		+ (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))) / 2);
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float totalArea = get_area(a, b, c);
	float abpArea = get_area(a, b, point);
	float bcpArea = get_area(b, c, point);
	float acpArea = get_area(a, c, point);
	if (totalArea != abpArea + bcpArea + acpArea || abpArea == 0 
		|| bcpArea == 0 || acpArea == 0)
		return (false);
	return (true);
}