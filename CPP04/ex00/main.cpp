/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:27:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/04/06 11:50:00 by tarchimb         ###   ########.fr       */
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
	
	
	std::cout << "Type:\t" << i->getType() << " | Sound:\t";
	i->makeSound();
	std::cout << std::endl;
	delete i;
	std::cout << "Type:\t" << j->getType() << " | Sound:\t";
	j->makeSound();
	i = j;
	std::cout << "Type:\t" << i->getType() << " | Sound:\t";
	i->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Type:\t" << meta->getType() << " | Sound:\t";
	meta->makeSound();
	std::cout << std::endl;
	std::cout << "Type:\t" << k->getType() << " | Sound:\t";
	k->makeSound();
	std::cout << std::endl;
	delete j; 
	delete k;
	delete meta;
	return 0;
}
