/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:50:06 by tarchimb          #+#    #+#             */
/*   Updated: 2022/06/07 17:48:24 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./includes/easyfind.hpp"

int	main()
{
	std::vector <int>		int_vector(20, 10);
	std::list <int>			int_lst(5, 20);
	std::deque <double>		dbl_deque(4, 3.2);
	std::forward_list <int>	int_forward(4, 6);

	easyfind(int_vector, 10);
	easyfind(int_lst, 20);
	easyfind(dbl_deque, 3);
	easyfind(int_forward, 6);
	return(0);
}