/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:27:14 by tarchimb          #+#    #+#             */
/*   Updated: 2022/05/20 11:38:08 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongCat.hpp>
#include <WrongAnimal.hpp>

void	print_tab(int size)
{
	AAnimal	*tab[size];

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
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	Cat	*cat1 = new Cat();
	
	Cat	cat2;

	cat2 = *cat1;
	delete cat1;
	delete j;
	delete i;
	print_tab(100);
	deep_copy();
	return 0;
}
