/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:14:19 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/30 16:12:04 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	Point	a(0, 50);
	Point	b(40, 50);
	Point	c(30, 40);
	Point	point(30, 49.99999999f);
	if (bsp(a, b, c, point) == false)
		std::cout << "OUT" << std::endl;
	else
		std::cout << "IN" << std::endl;
	return (0);
}