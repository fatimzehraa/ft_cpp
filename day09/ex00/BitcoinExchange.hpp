#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <utility>
#include <sstream>
#include <algorithm>
#include <limits>
class BitcoinExchange
{
public:
	BitcoinExchange(std::map<std::string, float>);
	BitcoinExchange(BitcoinExchange&);
	BitcoinExchange(const BitcoinExchange &);
	BitcoinExchange&operator=(const BitcoinExchange&);
	void set_date(std::string date);
	void set_value(double value);
	std::string get_date();
	double get_value();
	int valid_date(std::string date);
	int test(std::string date, std::string pipe, double value);
	int	do_line(std::string line);
	float get_exchange_rate();
	std::map<std::string, float>::iterator give_key(std::map<std::string, float> map, std::string key);
	~BitcoinExchange();
 
private:
	std::map<std::string, float> map;
	std::string date;
	double value;
//	std::pair<std::string, float> p;

};
#endif
