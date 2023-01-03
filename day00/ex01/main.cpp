#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"
#include <fstream>

int	ft_atoi(std::string &str)
{
	int nb = 0;

	if (str[0] < '0' || str[0] > '7' || str.size() != 1 ) {
		return -1;
	}
		nb = str[0] - '0';
	return (nb);
}

int main ()
{
	phonebook myphonebook;
	std::string str;
	std::string index;

	std::cout << "insert your command in the prompt, this program accepts only 3 commands which are ADD, SEARCH, and EXIT" << std::endl;
	while(!std::cin.eof()) {
		std::cout << "$> " << std::flush;
		getline(std::cin, str);
		//std::cin.clear();
		//std::cin.ignore();
		if (str.compare("ADD") == 0) {
			myphonebook.add();
		}
		else if (str.compare("SEARCH") == 0){
			myphonebook.show_contacts();
			getline(std::cin, index);
			if (!std::cin.eof())
				myphonebook.search(ft_atoi(index));
			else
				continue;
		}
		else if(str.compare("EXIT") == 0 || std::cin.eof()){
			break;
		}
		else
			std::cout << "command not found" << std::endl;
	}
//	std::cout << str << std::endl;
	return 0;
}
