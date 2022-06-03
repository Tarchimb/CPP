/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:16:45 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/02 15:53:49 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

static void    printTitle(std::string title)
{
        int     size;

        size = 30 - (title.size() / 2);
        std::cout << std::endl;
        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < 60; j++)
                {
                        if (j == size && i == 1)
                        {
                                j += title.size() + 1;
                                std::cout << " " << Green_u << title << Reset << " ";
                        }
                        else
                                std::cout << "=";
                }
                std::cout << std::endl;
        }
        std::cout << std::endl;
}

static Base	*generate(void)
{
	int	random;

	srand(time(0));
	random = rand() % 3;
	if (random == 0)
	{
		A	*tmp_a = new A;
		return (tmp_a);
	}
	else if (random == 1)
	{
		B	*tmp_b = new B;
		return (tmp_b);
	}
	C	*tmp_c = new C;
	return (tmp_c);
}

static void	identify(Base *p)
{
	if(dynamic_cast<A*>(p))
	{
		std::cout << "It's A base class!" << std::endl;
	}
	else if(dynamic_cast<B*>(p))
	{
		std::cout << "It's B base class!" << std::endl;
	}
	else if(dynamic_cast<C*>(p))
	{
		std::cout << "It's C base class!" << std::endl;
	}
	else
	{
		std::cout << "Unknown class!" << std::endl;
	}
}

static void	identify(Base &p)
{
	try
	{
		Base	&tmp = dynamic_cast<A&>(p);
		(void)tmp;
		std::cout << "It's A base class!" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		// std::cout <<  "It's not from class A!" << std::endl;
	}
	try
	{
		Base	&tmp = dynamic_cast<B&>(p);
		(void)tmp;
		std::cout << "It's B base class!" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		// std::cout <<  "It's not from class B!" << std::endl;
	}
	try
	{
		Base	&tmp = dynamic_cast<C&>(p);
		(void)tmp;
		std::cout << "It's C base class!" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		// std::cout <<  "It's not from class C!" << std::endl;
	}
}

int	main(void)
{
	Base	*random_ptr;
	
	random_ptr = generate();
	Base	&random_ref = *random_ptr;
	if (!random_ptr)
	{
		std::cout << Red << "Error Malloc" << Reset << std::endl;
		return (0);
	}
	printTitle("Find from pointer");
	identify(random_ptr);
	printTitle("Find from reference");
	identify(random_ref);
	delete random_ptr;
	return (0);
}