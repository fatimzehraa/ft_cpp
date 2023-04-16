#include "PmergeMe.hpp"
#include <iostream>
#include <set>
#include <sstream>
#include <iomanip>


bool all_positive(int *array, int size)
{
	for (int i = 0; i < size; i++)
		if (array[i] < 0)
			return false;
	return true;
}

int main (int argc, char *argv[])
{
	int *array = new int[argc - 1];
	for (int i = 0; i < argc - 1; i++)
		array[i] = atoi(argv[i + 1]);
	if (!all_positive(array, argc - 1))
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
	//vector
	time_point start1 = std::chrono::high_resolution_clock::now();
	std::vector<int> v = p.merge_insert_sort(p.get_vector());
	time_point end1 = std::chrono::high_resolution_clock::now();
	std::cout << "After: " << std::endl;
	for (unsigned long i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
	//list
	time_point start2 = std::chrono::high_resolution_clock::now();
	std::list<int> l = p.merge_insert_sort(p.get_list());
	time_point end2 = std::chrono::high_resolution_clock::now();
	//time to process
    double elapsed_us = (double)std::chrono::duration_cast<std::chrono::microseconds>(end1 - start1).count();
    std::cout << "Time to process a range of "<< argc - 1 <<" elements with std::vector<int> :" << std::fixed << std::setprecision(5) << elapsed_us / 100000 << " s" << std::endl;

    elapsed_us = (double)std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2).count();
    std::cout << "Time to process a range of "<< argc - 1 <<" elements with std::list<int> :" << std::fixed << std::setprecision(5) << elapsed_us / 100000 << " s" << std::endl;
	delete [] array;
	return 0;
}
