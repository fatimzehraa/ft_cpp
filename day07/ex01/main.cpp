#include <iostream>
#include "iter.hpp"

void func(int &a){
	a++;
}

template <typename T> void print(T &value){
	std::cout << "value = " << value << std::endl;
}

int main ()
{
	int array[] = {5,4,3,7,2};
	std::string strings[3] = {"first", "second", "last"};
	std::cout << "len " << strings->size() << std::endl;
	iter(strings, 3, &print);
	iter(array, 5, &print);
	iter(array, 5, &func);
	for (size_t i = 0; i < 5; i++) {
		std::cout << "elemnt number " << i << " of the array is: " << array[i] << std::endl;
	}
	return 0;
}
