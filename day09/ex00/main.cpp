#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <map>

std::map<std::string, float> parse_data(std::string data)
{
	std::string line;
	std::map<std::string , float> map;
	std::pair<std::string , float> p;
	std::ifstream database(data);
	std::getline(database, line);
	if (line.empty())
	{
		std::cout << "Error: no database" << std::endl;
		exit(1);
	}
	else if (line != "date,exchange_rate")
	{
		std::cout << "Error: invalid database" << std::endl;
		exit(1);
	}
	while (std::getline(database, line))
	{
		p.first = line.substr(0, line.find(","));
		std::string temp = line.substr(line.find(",") + 1);
		std::stringstream ss(temp);
		double d;
		ss >> d;
		p.second = d;
		map.insert(p);
	}
	return map;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	std::map<std::string, float> map = parse_data("data.csv");
	BitcoinExchange bit(map);

	std::ifstream input(argv[1]);
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
	std::string line;
	while (std::getline(input, line))
		bit.do_line(line);
// main done 
	return 0;
}
