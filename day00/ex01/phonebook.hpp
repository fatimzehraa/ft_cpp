/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatimzehra </var/spool/mail/fatimzehra>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 23:02:53 by fatimzehra        #+#    #+#             */
/*   Updated: 2022/12/17 12:38:20 by fatimzehra       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"

class phonebook
{
	private:
		contact contacts[8];
		int	size;
	public:
		phonebook();
		void add();
		void show_contacts();
		contact *search(contact contacts[], contact mycontact);
		~phonebook();
};

#endif // !PHONEBOOK_HPP
