#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
#include <exception>
#include <iostream>
class ScalarConverter
{
public:
	/*
	class NotChar : public std::exception{
		public:
			const char * what() const _NOEXCEPT{
				return "not char";
			}
	};*/
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

int chartod(std::string c);
#endif
