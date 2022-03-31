/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:46:41 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/31 17:08:10 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string.h>
#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define END "\033[0m"

class Harl
{
private:
	typedef struct s_action
	{
		std::string	msg;
		void		(Harl::*foo)(void) const;
	}				t_action;
	
	void			debug(void) const;
	void			info(void) const;
	void			warning(void) const;
	void			error(void) const;
	t_action		action[4];
public:
	Harl			();
	~Harl			();
	void			complain(std::string level);

};

#endif