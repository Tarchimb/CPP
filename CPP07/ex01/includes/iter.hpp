/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:17:21 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/06 11:18:34 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>
#include <iostream>

template<typename T>
void	display(const T &type)
{
	std::cout << type << std::endl;
}

template <typename T>
void	iter(T *addr, int size, void (*f)(const T &))
{
	for (int i = 0; i < size; i++)
	{
		f(addr[i]);
	}
}

#endif