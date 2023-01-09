#include "Harl.hpp"
#include <cstring>
#include <string>
#include <strings.h>

Harl::Harl()
{
	std::cout << "Harl constructor called" << std::endl;
}

void Harl::debug()
{
	std::cout << " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << " cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << " I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << " This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*funcs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int index = 0;
	std::string levels[4] = {"debug", "info", "warning", "error"};
	while (index < 4 && level.compare( levels[ index ] ) )
		index++;
	//switch statement
	switch (index) {
		case 0:
			(this->*funcs[0])();
			//debug();
			break ;
		case 1:
			(this->*funcs[1])();
			break ;
		case 2:
			(this->*funcs[2])();
			break ;
		case 3:
			(this->*funcs[3])();
			break ;
		default:
			std::cout << " harl didn't complain, he's enjoying his meal ^_^" << std::endl;
	}
};

Harl::~Harl()
{
	std::cout << "Harl destructor called" << std::endl;
}
