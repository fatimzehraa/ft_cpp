#include "contact.hpp"
#include <iostream>

	//constructor
	contact::contact(){
		std::cout << "contact constructor called" << std::endl;
	}
	//setters
	void contact::set_first_name(const std::string &fn){
		this->first_name = fn;
	}
	void contact::set_last_name(const std::string &ln){
		this->last_name = ln;
	}
	void contact::set_nickname(const std::string &nickname){
		this->nickname = nickname;
	}
	void contact::set_phone_number(const std::string &phone_number){
		this->phone_number = phone_number;
	}
	void contact::set_darkest_secret(const std::string &ds){
		this->darkest_secret = ds;
	}
	//getters
	const std::string &contact::get_first_name(){
		return this->first_name;
	}
	const std::string &contact::get_last_name(){
		return this->last_name;
	}
	const std::string &contact::get_nickname(){
		return this->nickname;
	}
	const std::string &contact::get_phone_number(){
		return this->phone_number;
	}
	const std::string &contact::get_darkest_secret(){
		return this->darkest_secret;
	}
	//destructor
	contact::~contact(){
		std::cout << "contact destructor called" << std::endl;
	}
