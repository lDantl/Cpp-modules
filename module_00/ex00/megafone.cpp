/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megafone.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanica <rdanica@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 13:26:52 by rdanica           #+#    #+#             */
/*   Updated: 2021/12/25 14:45:42 by rdanica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string ft_upper(std::string str)
{
	for (int i = 0; i < str.size(); i++)
		str[i] = std::toupper(str[i]);
	return str;
}

int	main(int argc, char **argv)
{
	std::string new_string;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			new_string = ft_upper(argv[i]);
			std::cout << new_string;
		}
		std::cout << std::endl;
	}
	return 0;
}