#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <utility>
#include <sstream>
#include <algorithm>
class BitcoinExchange
{
public:
	BitcoinExchange(std::string _database, std::string _input);
	BitcoinExchange(BitcoinExchange&);
	BitcoinExchange(const BitcoinExchange &);
	BitcoinExchange&operator=(const BitcoinExchange&);
	std::map<std::string, float> parse_data();
	std::pair<std::string, float> give_key(std::map<std::string, float> map, std::string key);
	~BitcoinExchange();
 
private:
	std::map<std::string, float> map;
	std::ifstream database;
	std::ifstream input;
	std::pair<std::string, float> p;

};
#endif
