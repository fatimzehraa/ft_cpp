#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"
#include <fstream>

int main ()
{
	phonebook myphonebook;
	std::string str;
	int index;
	int i = 1;

	while(i) {
		printf("i = %d\n", i);
		std::cout << "insert a command, the program accepts only 3 commands which are ADD, SEARCH, and EXIT" << std::endl;
		std::cin >> str;
		std::cin.sync();
		if (str.compare("ADD") == 0) {
			myphonebook.add();
		}
		else if (str.compare("SEARCH") == 0){
			myphonebook.show_contacts();
			std::cin >> index;
			std::cin.sync();
			myphonebook.search(index);
		}
		else if(str.compare("EXIT") == 0 || std::cin.eof()){
			break;
		}
		i++;
	}
//	std::cout << str << std::endl;
	return 0;
}
