/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:01:04 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/06 13:44:23 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Array.hpp"


template <class T>
Array<T>::Array()
{
	std::cout << "Hello World!" << std::endl;
}

template <class T>
Array<T>::Array(unsigned int n)
{
	(void)n;
}

template <class T>
Array<T>::Array(const Array<T> &src)
{
	(void)src;
}

// template <class T>
// ~Array<T>::Array()
// {
	
// }