/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:24:38 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/29 15:08:53 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	long	s = 0;
	long	t = 0;
	long	d = 0;
    s = (a.getX().toFloat() - c.getX().toFloat()) * (point.getY().toFloat() - c.getY().toFloat()) - (a.getY().toFloat() - c.getY().toFloat()) * (point.getX().toFloat() - c.getX().toFloat());
    t = (b.getX().toFloat() - a.getX().toFloat()) * (point.getY().toFloat() - a.getY().toFloat()) - (b.getY().toFloat() - a.getY().toFloat()) * (point.getX().toFloat() - a.getX().toFloat());

    if ((s < 0) != (t < 0) && s != 0 && t != 0)
        return false;

    d = (c.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - b.getY().toFloat()) - (c.getY().toFloat() - b.getY().toFloat()) * (point.getX().toFloat() - b.getX().toFloat());
    return d == 0 || (d < 0) == (s + t <= 0);
	return (true);
}