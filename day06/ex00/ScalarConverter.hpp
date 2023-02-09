#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
#include <exception>
#include <iostream>
#include "utils.h"
class ScalarConverter
{
public:
	static void Convert(std::string);
	static void ConvertToChar(std::string);
	static void ConvertToInt(std::string);
	static void ConvertToFloat(std::string);
	static void ConvertToDouble(std::string);
private:
	ScalarConverter();
	ScalarConverter(ScalarConverter&);
	ScalarConverter(const ScalarConverter &);
	ScalarConverter&operator=(const ScalarConverter&);
	~ScalarConverter();
 
protected:

};
#endif
