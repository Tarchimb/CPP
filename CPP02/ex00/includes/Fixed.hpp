/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:14:17 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/24 14:39:53 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_val;
	static int const	_bit = 8;
	
public:
	Fixed		();
	Fixed		(Fixed const & src);
	Fixed 		&operator=(Fixed const & rhs);
	~Fixed		();

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
};

#endif