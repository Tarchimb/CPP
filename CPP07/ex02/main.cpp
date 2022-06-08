/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:34:45 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/07 11:35:48 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Array.hpp"

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

static	void	intArray(void)
{
	printTitle("Int Array");
	try
	{
		Array<int>	src(5);

		for (unsigned int i = 0; i < src.getSize(); i++)
		{
			src[i] = std::rand() % 100;
		}
		Array<int>	src1;
		Array<int>	src2(src);
		src1= src;
		std::cout << "Tab 1: \n" << src << std::endl;	
		std::cout << "Tab 2: \n" << src1 << std::endl;	
		std::cout << "Tab 3: \n" << src2 << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static	void	charArray(void)
{
	printTitle("Char Array");
	try
	{
		Array<char>	src(5);

		for (unsigned int i = 0; i < src.getSize(); i++)
		{
			src[i] = std::rand() % 100 + 32;
		}
		Array<char>	src1;
		Array<char>	src2(src);
		src1 = src;
		std::cout << "Tab 1: \n" << src << std::endl;	
		std::cout << "Tab 2: \n" << src1 << std::endl;	
		std::cout << "Tab 3: \n" << src2 << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static	void	doubleArray(void)
{
	printTitle("Double Array");
	try
	{
		Array<double>	src(5);

		for (unsigned int i = 0; i < src.getSize(); i++)
		{
			src[i] = std::rand() % 100 + 0.5;
		}
		Array<double>	src1;
		Array<double>	src2(src);
		src1 = src;
		std::cout << "Tab 1: \n" << src << std::endl;	
		std::cout << "Tab 2: \n" << src1 << std::endl;	
		std::cout << "Tab 3: \n" << src2 << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void	exceptionArray(void)
{
	printTitle("Exception Array");
	try
	{
		Array<int>	src(-10); // Here it's working because of an implicit cast in unsigned int
		
		std::cout << src.getSize() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Array<int>	src(10);

		src[20] = 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Array<int>	src(10);
		src[-1] = 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void	wtfArray(void)
{
	printTitle("Wtf Array");
	try
	{
		Array<int>			wtf(5);
		for (unsigned int i = 0; i < wtf.getSize(); i++)
		{
			wtf[i] = std::rand() % 100;
		}
		Array<Array<int> >	src(5);

		for (int j = 0; j < 5; j++)
		{
			src[j] = wtf;
		}
		Array<int>	src1;
		Array<int>	src2(src[1]);
		src1 = src[0];
		std::cout << "Tab 1[0]: \n" << src[0] << std::endl;	
		std::cout << "Tab 1[1]: \n" << src[1] << std::endl;	
		std::cout << "Tab 2: \n" << src1 << std::endl;	
		std::cout << "Tab 3: \n" << src2 << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int	main(void)
{
	intArray();
	charArray();
	doubleArray();
	wtfArray();
	exceptionArray();
	return (0);
}