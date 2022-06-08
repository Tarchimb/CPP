/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:26:22 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/07 17:56:27 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

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
                std::cout << " " << Yellow_u 
                    << title << Reset << " ";
            }
            else
                        std::cout << "=";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

static void	little_span(void)
{
	printTitle("Little Span");
	Span	little(10);

	std::cout << little << std::endl;
	printTitle("Add numbers one by one");
	little.addNumber(1);
	little.addNumber(5);
	little.addNumber(10);
	std::cout << little << std::endl;
	printTitle("Add all numbers");
	little.addMultipleNumber(7);
	std::cout << little << std::endl;
	printTitle("Add too much numbers");
	try
	{
		little.addMultipleNumber(1000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void	big_span(void)
{
	printTitle("Big Span");
	Span	big(10000000);

	std::cout << big << std::endl;
	printTitle("Add numbers one by one");
	big.addNumber(1);
	big.addNumber(5);
	big.addNumber(10);
	std::cout << big << std::endl;
	printTitle("Add all numbers");
	big.addMultipleNumber(10000000 - 3);
	std::cout << big << std::endl;
	printTitle("Add too much numbers");
	try
	{
		big.addMultipleNumber(1000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int	main(void)
{
	little_span();
	big_span();
}