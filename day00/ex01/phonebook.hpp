/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:21:43 by fael-bou          #+#    #+#             */
/*   Updated: 2023/01/01 22:33:52 by fael-bou         ###   ########.fr       */
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
		void search(int index);
		~phonebook();
};

#endif // !PHONEBOOK_HPP
