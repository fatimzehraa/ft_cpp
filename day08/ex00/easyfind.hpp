#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <algorithm>
#include <exception>
#include <stdexcept>

template <typename T>
int easyfind(T container, int a){
	typename T::iterator b = std::find(container.begin(), container.end(), a);
	if ( b == container.end())
		throw std::out_of_range("element not found");
	else 
		return *b;
}

#endif
