/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:17:21 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/03 17:56:48 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>
#include <iostream>

template <typename T, typename U, typename C>
void	iter(T **addr, int size, U f(C))
{
	for (int i = 0; i < size -1; i++)
	{
		f(*addr[i]);
	}
}

#endif