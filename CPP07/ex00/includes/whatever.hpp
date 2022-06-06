/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:01:48 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/03 16:14:45 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
const T	&max(const T &x, const T &y)
{
	return (x >= y ? x : y);
}

template <typename T>
const T &min(const T &x, const T &y)
{
	return (x <= y ? x : y);
}

template <typename T>
void swap(T &x, T &y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

#endif