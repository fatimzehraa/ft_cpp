/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatimzehra </var/spool/mail/fatimzehra>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:04:46 by fatimzehra        #+#    #+#             */
/*   Updated: 2022/12/06 12:16:52 by fatimzehra       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <ostream>
#include <cstring>

void megaphone(char *str)
{
	int i = 0;

	for(i = 0; i < strlen(str); i++)
	{
		str[i] = toupper(str[i]);
	}
	std::cout << str;
}

int main (int argc, char *argv[])
{
	int i = 1;

	if (argc > 1) {
		while (argv[i])
		{
			megaphone(argv[i]);
//			if (argv[i+1])
//				std::cout << '*';
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
