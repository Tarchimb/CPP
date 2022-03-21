/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarchimb <tarchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:51:24 by tarchimb          #+#    #+#             */
/*   Updated: 2022/03/19 16:11:32 by tarchimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool	open_files(char **argv, std::ifstream &input, std::ofstream &output)
{
	std::string		filename(argv[1]);
	
	filename  += ".replace";
	input.open(argv[1]);
	if (input.is_open() == false)
	{
		std::cout << RED << "Can't open input file" << END << std::endl;
		return (false);
	}
	output.open(filename);
	if (output.is_open() == false)
	{
		std::cout << RED << "Can't create output file" << END << std::endl;
		return (false);
	}
	return (true);
}

void	replace_word(char **argv, std::ifstream &input, std::ofstream &output)
{
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	std::string 	strTemp;
	size_t			pos = 0;	

	std::getline(input, strTemp, '\0');
	while (pos != std::string::npos)
	{
		pos = strTemp.find(s1);
		if(pos != std::string::npos)
		{
			strTemp.erase(pos, s1.size());
			strTemp.insert(pos, s2);
		}
	}
	output << strTemp;
	
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << RED << "Need 3 parameters: [filename][to_replace][replace_by]"
			<< END << GREEN << "\nYou can try tester_file \"Jammin'\" BOB"
				<< "\nJust paste it!" << END << std::endl;
		return (0);
	}
	std::ifstream	input;
	std::ofstream	output;
	if (open_files(argv, input, output) == false)
		return (0);
	replace_word(argv, input, output);
	input.close();
	output.close();
	return (0);
}