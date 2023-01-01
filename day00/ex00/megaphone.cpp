/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:10:17 by fael-bou          #+#    #+#             */
/*   Updated: 2023/01/01 17:10:23 by fael-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <ostream>
#include <cstring>
#include <sys/_types/_size_t.h>

void megaphone(char *str)
{
	size_t i = 0;

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
