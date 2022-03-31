/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:14:19 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 16:25:01 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>
#include <Point.hpp>

int main(void)
{
	Point	a(0, 0);
	Point	b(2, 2);
	Point	c(2, 0);
	Point	point1(1, 0.5f);
	Point	point2(1, 1);
	Point	point3(10, 10);
	
	std::cout << "Point1 is:\t" << (bsp(a, b, c, point1) ? "IN" : "OUT")
		<< std::endl;
	std::cout << "Point2 is:\t" << (bsp(a, b, c, point2) ? "IN" : "OUT")
		<< std::endl;
	std::cout << "Point3 is:\t" << (bsp(a, b, c, point3) ? "IN" : "OUT")
		<< std::endl;
	return (0);
}