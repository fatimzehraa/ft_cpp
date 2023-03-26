#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string _database, std::string _input)
{
	this->database.open(_database);
	parse_data();
	this->input.open(_input);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &old_obj)
{
	*this = old_obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &old_obj)
{
	this->database.copyfmt(old_obj.database); // copy assigne stream object 
//	std::cout << "database :" << std::endl;
	this->input.copyfmt(old_obj.input);
	this->map = old_obj.map;
	this->p = old_obj.p;
	return *this;
}

 std::map<std::string, float> BitcoinExchange::parse_data()
{
	std::string line;
	std::map<std::string , float> map;
	std::pair<std::string , float> p;
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

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "BitcoinExchange destructor called" << std::endl;
}
