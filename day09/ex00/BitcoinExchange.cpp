#include "BitcoinExchange.hpp"
#include <climits>
#include <sstream>

BitcoinExchange::BitcoinExchange(std::map<std::string, float> _map)
{
	this->map = _map;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &old_obj)
{
	*this = old_obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &old_obj)
{
	this->map = old_obj.map;
//	this->p = old_obj.p;
	return *this;
}

void BitcoinExchange::set_date(std::string date)
{
	this->date = date;
}

void BitcoinExchange::set_value(double value)
{
	this->value = value;
}

std::string BitcoinExchange::get_date()
{
	return this->date;
}

double BitcoinExchange::get_value()
{
	return this->value;
}

#define DATE_EXPR "NNNN-NN-NN"

int BitcoinExchange::valid_date(std::string date)
{
	unsigned long i = 0;
	unsigned long j = 0;

	while (i < strlen(DATE_EXPR) && j < date.length())
	{
		if (date[j] != '-' && !isdigit(date[j]))
			return 0;
		if (DATE_EXPR[i] == 'N' && !isdigit(date[j]))
			return 0;
		i++;
		j++;
	}
	if (date[j] != '\0' || DATE_EXPR[i] != '\0')
		return 0;
	return 1;
}

int BitcoinExchange::test(std::string date, std::string pipe, double value)
{
	if (pipe != "|")
	{
		std::cout << "Error: bad input => " << date << pipe << value << std::endl;
		return 0;
	}
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return 0;
	}
	if (value > 1000)
	{
		std::cout << "Error: too big number." << std::endl;
		return 0;
	}
	if (date.empty() || !valid_date(date))
	{
		std::cout << "Error: invalid date." << std::endl;
		return 0;
	}
	return 1;
}

int	BitcoinExchange::do_line(std::string line)
{
	std::stringstream ss(line);
	std::string date;
	ss >> date;
	std::string pipe;
	ss >> pipe;
	std::string value_str;
	value_str = line.substr(line.find("|") + 1);
	if (value_str.empty())
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return 0;
	}
	double value;
	ss >> value;
	if (test(date, pipe, value))
	{
		this->set_date(date);
		this->set_value(value);
		std::cout << get_date() << " => " << get_value() << " = " << this->get_exchange_rate() << std::endl;
		return 1;
	}
	return 0;
}
std::map<std::string, float>::iterator BitcoinExchange::give_key(std::map<std::string, float> map, std::string key)
{
	std::map<std::string, float>::iterator it = map.lower_bound(key);
	return it;
}

float BitcoinExchange::get_exchange_rate()
{
	std::map<std::string, float>::iterator it = give_key(this->map, this->date);
	return it->second * this->value;
}

BitcoinExchange::~BitcoinExchange() {}
