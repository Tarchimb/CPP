/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:50:44 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/07 22:53:19 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef EASYFIND_HPP
 # define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <string>
# include <iterator>
# include <forward_list>
# include <vector>
# include <list>
# include <deque>
# include "alias.h"

class NoValFound : public std::exception
{
	const char	*what() const throw()
	{
		return ("Element not found");
	}
};

template <typename T>
void	easyfind(T &contain, int val)
{
	typename T::iterator	iter;
	
	iter = std::find(contain.begin(), contain.end(), val);
	try
	{
		if (iter == contain.end(`))
			throw(NoValFound());
		std::cout << Green << "Element found, value : " << *iter << Reset << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << Red  << e.what() << Reset << std::endl;
	}
}

 # endif