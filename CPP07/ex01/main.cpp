/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:16:49 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/06 11:21:54 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/iter.hpp"
#include "./includes/alias.h"

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

int	main(void)
{
	int			size = 5;
	int			*tab_int = new int[size];
	std::string	*tab_string = new std::string[size];
	double		*tab_double = new double[size];
	float		*tab_float = new float[size];
	
	for (int i = 0; i < size; i++)
	{
		tab_int[i] = size;
		tab_string[i] = "coucou";
		tab_double[i] = 5.5;
		tab_float[i] = 7.5;
	}
	printTitle("Display int:");
	iter(tab_int, size, display);
	printTitle("Display string:");
	iter(tab_string, size, display);
	printTitle("Display double:");
	iter(tab_double, size, display);
	printTitle("Display float:");
	iter(tab_float, size, display);
	return(0);
}