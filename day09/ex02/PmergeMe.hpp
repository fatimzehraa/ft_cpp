#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>

typedef std::chrono::steady_clock::time_point time_point;
typedef std::vector<int>::iterator iterator;

class PmergeMe
{
public:
	PmergeMe(int *array, int size);
	PmergeMe(PmergeMe&);
	PmergeMe(const PmergeMe &);
	PmergeMe&operator=(const PmergeMe&);
	std::vector<int> merge_insert_vector(int *array, int size);
	std::list<int> merge_insert_list(int *array, int size);
	void set_vec_duration(double duration);
	void set_lst_duration(double duration);
	double get_vec_duration();
	double get_lst_duration();
	~PmergeMe();
 
private:
	int *_array;
	int _size;
	std::vector<int> _vector;
	std::list<int> _list;
	double vec_duration;
	double lst_duration;
};
#endif
