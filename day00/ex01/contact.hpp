/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatimzehra </var/spool/mail/fatimzehra>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:23:11 by fatimzehra        #+#    #+#             */
/*   Updated: 2022/12/17 12:48:30 by fatimzehra       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
class contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		//constructor
		contact();
		//setters
		void set_first_name(const std::string &fn);
		void set_last_name(const std::string &ln);
		void set_nickname(const std::string &nickname);
		void set_phone_number(const std::string &phone_number);
		void set_darkest_secret(const std::string &ds);
		//getters
		const std::string &get_first_name();
		const std::string &get_last_name();
		const std::string &get_nickname();
		const std::string &get_phone_number();
		const std::string &get_darkest_secret();
		//destractor
		~contact();
};

#endif // !CONTACT_HPP
