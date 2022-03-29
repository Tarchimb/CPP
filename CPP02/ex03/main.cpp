/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:14:19 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/29 15:04:26 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	Point	a(0, 0);
	Point	b(0, 0);
	Point	c(0, 0);
	Point	point(1, 1);
	if (bsp(a, b, c, point) == true)
		std::cout << "OUT" << std::endl;
	else
		std::cout << "IN" << std::endl;
	return (0);
}