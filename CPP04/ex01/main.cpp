/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:27:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/17 17:09:23 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>
#include <WrongAnimal.hpp>

void	print_tab(int size)
{
	Animal	*tab[size];

	for (int i = 0; i < size / 2; i++)
	{
		tab[i] = new Dog();
	}
	for (int i = size / 2; i < size; i++)
	{
		tab[i] = new Cat();
	}
	for (int i = 0; i < size; i++)
	{
		delete tab[i];
	}
}

static void	deep_copy(void)
{
	Dog	dog1;
	Dog	dog2;

	dog1.printIdeas();
	dog2.printIdeas();

	dog2 = dog1;
	std::cout << std::endl << "---------Copy-------------" << std::endl;
	dog1.printIdeas();
	dog2.printIdeas();

	std::cout << std::endl;

	Cat	cat1;
	Cat	cat2(cat1);

	cat1.printIdeas();
	cat2.printIdeas();
}

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	print_tab(100);
	deep_copy();
	return 0;
}
