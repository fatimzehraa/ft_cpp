#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>

typedef std::chrono::steady_clock::time_point time_point;
typedef std::vector<int>::iterator iterator;
typedef std::list<int>::iterator lst_iterator;

class PmergeMe
{
public:
	PmergeMe(int *array, int size);
	PmergeMe(PmergeMe&);
	PmergeMe(const PmergeMe &);
	PmergeMe&operator=(const PmergeMe&);
	std::vector<int> insert_sort(std::vector<int> _vec);
	std::vector<int> merge(std::vector<int> left, std::vector<int> right);
	std::vector<int> merge_insert_sort(std::vector<int> vec);
	std::list<int> insert_sort(std::list<int> _lst);
	std::list<int> merge(std::list<int> left, std::list<int> right);
	std::list<int> merge_insert_sort(std::list<int> lst);
	/* void set_vec_duration(double duration);
	void set_lst_duration(double duration); */
	double get_vec_duration();
	void set_vec_duration(double duration);
	double get_lst_duration();
	void set_lst_duration(double duration);
	std::vector<int> get_vector();
	std::list<int> get_list();
	~PmergeMe();
 
private:
	// int *_array;
	// int _size;
	std::vector<int> _vector;
	std::list<int> _list;
	double vec_duration;
	double lst_duration;
};
#endif
