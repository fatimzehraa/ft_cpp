#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <vector>


template<typename T>
class MutantStack : public std::stack<T>
{
private:
	//std::stack<int> st;

public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack(){}
	MutantStack(const MutantStack & old_obg){
		*this = old_obg;
	}
	MutantStack&operator=(const MutantStack& old_obg){
		if(*this != old_obg)
			this->c = old_obg.c;
		return *this;
	}
	iterator begin(){
		return this->c.begin();
	}
	iterator end(){
		return this->c.end();
	}
	reverse_iterator rbegin(){
		return this->c.rbegin();
	}
	reverse_iterator rend(){
		return this->c.rend();
	}
	const_iterator cbegin() const {
		return this->c.cbegin();
	}
	const_iterator cend() const {
		return this->c.cend();
	}
	const_reverse_iterator crbegin() const {
		return this->c.crbegin();
	}
	const_reverse_iterator crend() const {
		return this->c.crend();
	}
	~MutantStack(){}
 
};
#endif
