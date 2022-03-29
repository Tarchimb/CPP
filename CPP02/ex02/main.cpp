/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:14:19 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/28 17:07:40 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	comparisons_operators(Fixed a, Fixed b)
{
	std::cout << "Value of a: " << RED << a << END << "\tValue of b: " << RED 
		<< b << END <<  std::endl;
	if (a > b)
		std::cout << "a is " << GREEN << "superior" << END << " to b" << std::endl;
	if (a < b)
		std::cout << "a is " << GREEN << "inferior" << END << " to b" << std::endl;
	if (a >= b)
		std::cout << "a is " << GREEN << "superior or egal" << END << " to b" << std::endl;
	if (a <= b)
		std::cout << "a is " << GREEN << "inferior or egal" << END << " to b" << std::endl;
	if (a != b)
		std::cout << "a is " << GREEN << "different" << END << " of b" << std::endl;
	if (a == b)
		std::cout << "a is " << GREEN << "egal" << END " to b" << std::endl;
	std::cout << std::endl;
}

void	arithmetic_operators(Fixed a, Fixed b)
{
	a = 5;
	b = 10;
	std::cout << "Value of a: " << RED << a << END << "\tValue of b: " << RED 
		<< b << END <<  std::endl;
	std::cout << RED << "a + b =\t" << GREEN << a + b << END << std::endl;
	std::cout << "Value of a: " << RED << a << END << "\tValue of b: " << RED 
		<< b << END <<  std::endl;
	std::cout << RED << "a - b =\t" << GREEN << a - b << END << std::endl;
	std::cout << "Value of a: " << RED << a << END << "\tValue of b: " << RED 
		<< b << END <<  std::endl;
	std::cout << RED << "a / b =\t" << GREEN << a / b << END << std::endl;
	std::cout << "Value of a: " << RED << a << END << "\tValue of b: " << RED 
		<< b << END <<  std::endl;
	std::cout << RED << "a * b =\t" << GREEN << a * b << END << std::endl;
	std::cout << std::endl;
}

void	increment_operators(Fixed a)
{
	a = 10;
	std::cout << "Value of a: " << RED << a << END << std::endl;
	std::cout << RED << "++a =\t" << GREEN << ++a << END << std::endl;
	std::cout << "Value of a: " << RED << a << END << std::endl;
	std::cout << RED << "a++ =\t" << GREEN << a++ << END << std::endl;
	std::cout << "Value of a: " << RED << a << END << std::endl;
	std::cout << RED << "a+=1 =\t" << GREEN << a.operator++(1) << END << std::endl;
	std::cout << "Value of a: " << RED << a << END << std::endl;
	std::cout << std::endl;
}

void	max_min(Fixed a, Fixed b)
{
	a = 10;
	b = 5;
	std::cout << "Value of a: " << RED << a << END << "\tValue of b: " << RED 
		<< b << END <<  std::endl;
	std::cout << GREEN << "Max Value:\t" << RED << Fixed::max(a, b) 
		<< END << std::endl;
	std::cout << GREEN << "Min Value:\t" << RED << Fixed::min(a, b) 
		<< END << std::endl;
}

int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		Fixed 		a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;	
	}
	else
	{
		Fixed	a(10);
		Fixed	b(5);

		std::cout << GREEN << "\t\tComparison operators\n" << END << std::endl;
		comparisons_operators(a, b);
		a = 21.21f;
		b = 42.42f;
		comparisons_operators(a, b);
		a = b;
		comparisons_operators(a, b);
		std::cout << GREEN << "\t\tArithmetic operators\n" << END << std::endl;
		arithmetic_operators(a, b);
		std::cout << GREEN << "\t\tIncrement operators\n" << END << std::endl;
		increment_operators(a);
		std::cout << GREEN << "\t\tMax/Min\n" << END << std::endl;
		max_min(a, b);
	}
	return (0);
}