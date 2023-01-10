#ifndef SED_H
# define SED_H
#include <iostream>
#include <string>
#include <fstream>

class sed
{
private:
	std::string s;
	std::fstream newFile;

	
public:
	sed();
	sed(sed &&) = default;
	sed(const sed &) = default;
	sed &operator=(sed &&) = default;
	sed &operator=(const sed &) = default;
	~sed();

};

sed::sed()
{
}

sed::~sed()
{
}

#endif
