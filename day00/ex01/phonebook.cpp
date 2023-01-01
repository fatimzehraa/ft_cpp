/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:25:02 by fael-bou          #+#    #+#             */
/*   Updated: 2023/01/01 22:54:41 by fael-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <ostream>
#include <iomanip>

phonebook::phonebook(){
	std::cout << "phonebook constructor" << std::endl;
	size = 0;
//	contacts = new contact[8];
}

//static variable that re initialize when hits 9
void phonebook::add(){
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	if (size == 8)
		size = 0;
	std::cout << "enter first name" << std::endl;
	getline(std::cin,first_name);
	contacts[size].set_first_name(first_name);
	std::cout << contacts[size].get_first_name() << std::endl;

	std::cout << "enter last name" << std::endl;
	getline(std::cin,last_name);
	contacts[size].set_last_name(last_name);

	std::cout << "enter nickname" << std::endl;
	getline(std::cin,nickname);
	contacts[size].set_nickname(nickname);

	std::cout << "enter phone number" << std::endl;
	getline(std::cin, phone_number);
	contacts[size].set_phone_number(phone_number);

	std::cout << "enter darkest secret" << std::endl;
	getline(std::cin, darkest_secret);
	contacts[size].set_darkest_secret(darkest_secret);
	size++;
}
void trim(std::string s){
	if (s.size() < 10) {
		std::cout << "|" << std::setw(10) << s;
	}
	else if( s.size() == 10){
		std::cout << "|" << s;
		
	}
	else{
		std::cout << "|" << s.substr(0,9) << ".";
	}
}

void phonebook::show_contacts(){
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < this->size; i++) {
		std::cout << "|" << std::setw(10) << i ;
		trim(contacts[i].get_first_name());
		trim(contacts[i].get_last_name());
		trim(contacts[i].get_nickname());
		std::cout << "|" << std::endl;
	}
}

void phonebook::search(int index){
	for (int i = 0; i < size; i++) {
		if (index == i){
			std::cout << "|     index|first name| last name|  nickname|phone num.|darkest s.|" << std::endl;
			std::cout << "|" << std::setw(10) << i ;
			trim(contacts[i].get_first_name());
			trim(contacts[i].get_last_name());
			trim(contacts[i].get_nickname());
			trim(contacts[i].get_phone_number());
			trim(contacts[i].get_darkest_secret());
			std::cout << "|" << std::endl;
		}
	}
//	return NULL;
}
phonebook::~phonebook(){
	std::cout << "phonebook destructor" << std::endl;
}
