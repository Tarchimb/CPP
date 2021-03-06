/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:27:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/17 11:50:07 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>
#include <WrongAnimal.hpp>

int main()
{
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	const Animal* meta = new Animal();
	const WrongAnimal	*k = new WrongCat();
	
	
	std::cout << "Type:\t" << cat->getType() << " | Sound:\t";
	cat->makeSound();
	std::cout << std::endl;
	delete cat;
	std::cout << "Type:\t" << dog->getType() << " | Sound:\t";
	dog->makeSound();
	cat = dog;
	std::cout << "Type:\t" << cat->getType() << " | Sound:\t";
	cat->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Type:\t" << meta->getType() << " | Sound:\t";
	meta->makeSound();
	std::cout << std::endl;
	std::cout << "Type:\t" << k->getType() << " | Sound:\t";
	k->makeSound();
	std::cout << std::endl;
	delete dog; 
	delete k;
	delete meta;
	return 0;
}
