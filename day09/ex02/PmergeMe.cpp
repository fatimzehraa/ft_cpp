#include "PmergeMe.hpp"
#include <chrono>
#include <vector>

PmergeMe::PmergeMe(int *array, int size)
{
	_array = array;
	_size = size;
}

PmergeMe::PmergeMe(const PmergeMe &old_obj)
{
	*this = old_obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &old_obj)
{
	if (this != &old_obj)
	{
		_array = old_obj._array;
		_size = old_obj._size;
		_vector = old_obj._vector;
		_list = old_obj._list;
	}
	return *this;
}

double PmergeMe::get_vec_duration()
{
	return vec_duration;
}

double PmergeMe::get_lst_duration()
{
	return lst_duration;
}

/* void merge_sort(int *arr, int *left, int *right, int size)
{
//	if ()
	int mid = size / 2;
	for (int i = 0; i < mid; i++)
		left[i] = arr[i];
	for (int i = mid; i < size; i++)
		right[i - mid] = arr[i];
	merge_sort(arr, left, right, size/2);
	merge_sort(arr, right, right + size - mid, size/2);
	merge(arr, left, mid, right);
} */

std::vector<int> insert_sort(int *arr, int size)
{
	std::vector<int> vec;
	iterator it;

	vec.insert(it, arr[0]);
	for (int i = 0; i < size; i++, it++){
		if ()
		vec.insert(it, arr[i]);
	}
	return vec;
}

std::vector<int> PmergeMe::merge_insert_vector(int *array, int size)
{
	time_point start = std::chrono::high_resolution_clock::now();

	

//	_vector.insert(_vector.begin(), array, array + size);
	time_point end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	vec_duration = duration.count();
	return _vector;
}

std::list<int> PmergeMe::merge_insert_list(int *array, int size)
{
	time_point start = std::chrono::high_resolution_clock::now();
	_list.insert(_list.begin(), array, array + size);
	


	time_point end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	lst_duration = duration.count();
	return _list;
}

PmergeMe::~PmergeMe(){}
