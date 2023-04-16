#include "PmergeMe.hpp"
#include <chrono>
#include <iostream>
#include <vector>
#include <list>
#include <unistd.h>

PmergeMe::PmergeMe(int *array, int size)
{
	for (int i = 0; i < size; i++)
		_vector.push_back(array[i]);
	for (int i = 0; i < size; i++)
		_list.push_back(array[i]);
}

PmergeMe::PmergeMe(const PmergeMe &old_obj)
{
	*this = old_obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &old_obj)
{
	if (this != &old_obj)
	{
		_vector = old_obj._vector;
		_list = old_obj._list;
	}
	return *this;
}
/* 
 * vector 
 */
std::vector<int> PmergeMe::get_vector()
{
	return _vector;
}

std::vector<int> PmergeMe::insert_sort(std::vector<int> _vec)
{
	std::vector<int> vec;

	for (int i = 0; i < (int)_vec.size(); i++){
		vec.push_back(_vec[i]);
		for (int j = 0; j < (int)vec.size(); j++) {
			if (vec[j] > vec[i])
				std::swap(vec[i], vec[j]);
		}
	}
	return vec;
}

std::vector<int> PmergeMe::merge(std::vector<int> left, std::vector<int> right)
{
	std::vector<int> result;
	int left_index = 0;
	int right_index = 0;

	while (left_index < (int)left.size() && right_index < (int)right.size())
	{
		if (left[left_index] < right[right_index])
		{
			result.push_back(left[left_index]);
			left_index++;
		}
		else
		{
			result.push_back(right[right_index]);
			right_index++;
		}
	}
	while (left_index < (int)left.size())
	{
		result.push_back(left[left_index]);
		left_index++;
	}
	while (right_index < (int)right.size())
	{
		result.push_back(right[right_index]);
		right_index++;
	}
	return result;
}

std::vector<int> PmergeMe::merge_insert_sort(std::vector<int> vec)
{
	std::vector<int> left;
	std::vector<int> right;

	if (vec.size() <= 1)
		return vec;
	left.insert(left.begin(), vec.begin(), vec.begin() + vec.size() / 2);
	right.insert(right.begin(), vec.begin() + vec.size() / 2, vec.end());
	if (left.size() < 20)
		left = insert_sort(left);
	if (right.size() < 20)
		right = insert_sort(right);
	left = merge_insert_sort(left);
	right = merge_insert_sort(right);
	return (merge(left, right));
}

/* 
 * vector 
 */

std::list<int> PmergeMe::get_list()
{
	return _list;
}
std::list<int> PmergeMe::insert_sort(std::list<int> _lst)
{
    std::list<int> lst;
    while (!_lst.empty()) {
        int value = _lst.front();
        _lst.pop_front();
        lst_iterator insert_pos = std::upper_bound(lst.begin(), lst.end(), value);
        lst.insert(insert_pos, value);
    }
    return lst;
}
/*
std::list<int> PmergeMe::insert_sort(std::list<int> _lst)
{
	std::list<int> lst;

	for (lst_iterator it = _lst.begin(); it != _lst.end(); it++){
		lst.push_back(_lst.front());
		_lst.pop_front();
		for (lst_iterator it2 = lst.begin(); it2 != lst.end(); it2++) {
			if (*it2 > *it)
				std::swap(*it, *it2);
		}
	}
	return lst;
} */

std::list<int> PmergeMe::merge(std::list<int> left, std::list<int> right)
{
	std::list<int> result;
	lst_iterator left_index = left.begin();
	lst_iterator right_index = right.begin();

	while (left_index != left.end() && right_index != right.end())
	{
		if (*left_index < *right_index)
		{
			result.push_back(*left_index);
			left_index++;
		}
		else
		{
			result.push_back(*right_index);
			right_index++;
		}
	}
	while (left_index != left.end())
	{
		result.push_back(*left_index);
		left_index++;
	}
	while (right_index != right.end())
	{
		result.push_back(*right_index);
		right_index++;
	}
	return result;
}

std::list<int> PmergeMe::merge_insert_sort(std::list<int> lst)
{
	std::list<int> left;
	std::list<int> right;
	lst_iterator mid = lst.begin();
	std::advance(mid, lst.size() / 2);

	if (lst.size() <= 1)
		return lst;
	for(lst_iterator it = lst.begin(); it != mid; it++)
		left.push_back(*it);
	for(lst_iterator it = mid; it != lst.end(); it++)
		right.push_back(*it);
	if (left.size() < 20 || right.size() < 20)
	{
		if (left.size() < 20)
			left = insert_sort(left);
		if (right.size() < 20)
			right = insert_sort(right);
	}
	else
	{
		left = merge_insert_sort(left);
		right = merge_insert_sort(right);
	}
	return (merge(left, right));
}

PmergeMe::~PmergeMe(){}
