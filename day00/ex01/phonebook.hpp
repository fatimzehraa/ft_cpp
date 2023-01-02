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
