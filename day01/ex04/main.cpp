#include <iostream>
#include <fstream>
#include <ostream>
#include <string>

int main (int argc, char *argv[])
{
	std::ifstream old_file(argv[1]);
	std::ofstream new_file;

	std::string f = argv[1];
	std::string rep = ".replace";
	std::string filename;

	std::string s1;
	//std::string s2;

	if (argc == 4){
		//filename = f + rep;
		std::ifstream old_file(argv[1]);
		//old_file.open(argv[1]);
		if (old_file.is_open()) {
			while (getline(old_file, s1)){
				printf("here\n");
				printf("byebye\n");
				std::cout << s1 << std::endl;
			}
			
		}
	}
	else {
		std::cout << "error" << std::endl;
	}
	return 0;
}
