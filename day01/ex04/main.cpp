#include <iostream>
#include <fstream>
#include <ostream>
#include <string>

std::string	*ft_replace(std::string *str, std::string s1, std::string s2, int pos){
	std::string temp = str->substr(s1.length(), str->length());//[s1.length()];
	*(str + pos) = s2;
	*str = *(str) + temp;
	//(str + s2.length()) = temp;
	return (str);
}

int main (int argc, char *argv[])
{
	std::ifstream old_file(argv[1]);
	std::ofstream new_file;

	std::string f = argv[1];
	std::string rep = ".replace";
	std::string filename;

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string str;

	if (argc == 4){
		//filename = f + rep;
		std::ifstream old_file(argv[1]);
		//old_file.open(argv[1]);
		if (old_file.is_open()) {
			while (getline(old_file, str)){
				//compare
				unsigned long pos;
				while ((pos = str.find(s1)) != std::string::npos)
					str = *ft_replace(&str, s1, s2, pos);
				//write
				std::cout << str << std::endl;
			}
			
		}
	}
	else {
		std::cout << "error" << std::endl;
	}
	return 0;
}
