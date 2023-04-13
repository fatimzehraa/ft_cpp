#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <map>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	BitcoinExchange bit("data.csv", argv[1]);

	/* std::ifstream input(argv[1]);
	std::string first_line;
	std::getline(input, first_line);
	if (first_line.empty())
	{
		std::cout << "Error: could not read file." << std::endl;
		return 1;
	}
	else if (first_line != "date | value")
	{
		std::cout << "Error: invalid file format." << std::endl;
		return 1;
	}
	std::map<std::string, float> map = parse_data("data.csv");
	std::string line;
	while (std::getline(input, line))
	{
		std::string date = line.substr(0, line.find(" | "));
		std::string value = line.substr(line.find(" | ") + 3);
		std::cout << date << " | " << value << std::endl;
	} */

	return 0;
}
