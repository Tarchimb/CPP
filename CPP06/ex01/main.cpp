/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:29:57 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/02 14:07:56 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void    printTitle(std::string title)
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

static	uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

static	Data	*deserialize(uintptr_t raw)
{

	return (reinterpret_cast<Data *>(raw));
}

static	void	try_init(void)
{
	Data		src;
	Data		*dst;
	uintptr_t	tmp;

	src.data1 = 5;
	src.data2 = "coucou";
	src.data3 = 5.4;
	printTitle("Before Serialize");
	std::cout << "Value of int: " << src.data1 << "\nValue of string: " << src.data2
		<< "\nValue of double: " << src.data3 << std::endl;
	tmp = serialize(&src);
	dst = deserialize(tmp);
	if (!dst)
	{
		std::cout << Red << "Wrong deserialization. Check you're init value"
			<< std::endl;
		return;
	}
	printTitle("After Serialize");
	std::cout << "Value of uintptr_t: " << tmp << std::endl;
	printTitle("After Deserialize");
	std::cout << "Value of int: " << dst->data1 << "\nValue of string: " << dst->data2
		<< "\nValue of double: " << dst->data3 << std::endl;
}

static void		wrong_init(void)
{
	Data		*null_dst;
	uintptr_t	null_tmp;

	printTitle("Null Data");
	null_tmp = serialize(NULL);
	null_dst = deserialize(null_tmp);
	if (!null_dst)
	{
		std::cout << Red << "Wrong deserialization. Check you're init value"
			<< Reset << std::endl;
	}
	else 
		std::cout << "Value of int: " << null_dst->data1 << "\nValue of string: " << null_dst->data2
			<< "\nValue of double: " << null_dst->data3 << std::endl;
}

int	main(void)
{
	try_init();
	wrong_init();
}