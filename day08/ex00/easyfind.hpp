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
	//int i = 0;
	//while (T[i])
	//{
	//	if (T[i] == a)
	//		return T[i];
	//}
}
/*
int easyfind(T container, int a)
{
	it = container.begin();
	while(it != container.end())
	{
		print *it;
		it++;
	}
}


#include <vector>
#include <list>

class vec<T> {
	class iterator{
		int index;
		T* arr;
	
		operator++(){
			index++;
		}
	
		operator*(){
			return arr[index];
		}
	
	}


	iterator end(){
		return iter_vec(arr, len)
	}

	iterator begin(){
		iter_vec(arr, 0)
	}


}


class iter_list: iterator {
	list *node;

	operator++{
		node = node->next;
	}

	operator* {
		return node->content;
	}
}



int iter(){

	std::list<int> vec(0, 5);
	std::list<int>::iterator it = vec.begin();
	std::list<int>::iterator end = vec.end();
	while(it != end)
	{
	
		it++;
	}
}*/
#endif
