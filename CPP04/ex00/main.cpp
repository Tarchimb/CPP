/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:27:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/05 13:21:20 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>
#include <WrongAnimal.hpp>

int main()
{
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const Animal* meta = new Animal();
	const WrongAnimal	*k = new WrongCat();
	
	std::cout << "Type:\t" << i->getType() << "| Sound:\t";
	i->makeSound();
	std::cout << std::endl;
	std::cout << "Type:\t" << j->getType() << "| Sound:\t";
	j->makeSound();
	std::cout << std::endl;
	std::cout << "Type:\t" << meta->getType() << "| Sound:\t";
	meta->makeSound();
	std::cout << std::endl;
	std::cout << "Type:\t" << k->getType() << "| Sound:\t";
	k->makeSound();
	std::cout << std::endl;
	delete j;
	delete k;
	delete meta;
	delete i;
	return 0;
}
// int	main(void)
// {
// 	Animal	a;
// 	Cat		b;
// 	Dog		c;
	
// 	std::cout << "Type of a:\t" << a.getType() << std::endl;
// 	std::cout << "Make sound:\t";
// 	a.makeSound();
// 	std::cout << std::endl;
// 	std::cout << "Type of b:\t" << b.getType() << std::endl;
// 	std::cout << "Make sound:\t";
// 	b.makeSound();
// 	std::cout << std::endl;
// 	std::cout << "Type of c:\t" << c.getType() << std::endl;
// 	std::cout << "Make sound:\t";
// 	c.makeSound();
// 	std::cout << std::endl;
// 	return (0);
// }