#include "PmergeMe.hpp"
#include <iostream>
#include <set>
#include <sstream>


bool all_positive(int *array)
{
	for (int i = 0; i < sizeof(array); i++)
		if (array[i] < 0)
			return false;
	return true;
}

int main (int argc, char *argv[])
{
	int *array = new int[argc - 1];
	for (int i = 0; i < argc - 1; i++)
		array[i] = atoi(argv[i + 1]);
	if (!all_positive(array))
	{
		std::cout << "Error." << std::endl;
		delete [] array;
		return 1;
	}
	PmergeMe p(array, argc - 1);
	std::cout << "Before: " << std::endl;
	for (int i = 0; i < argc - 1; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
	std::vector<int> v = p.merge_insert_vector(array, argc - 1);
	std::cout << "After: " << std::endl;
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
	std::list<int> l = p.merge_insert_list(array, argc - 1);
	delete [] array;
	return 0;
}
