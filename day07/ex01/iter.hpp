#ifndef ITER_HPP
# define ITER_HPP

template<typename T> void iter(T* array, int len, void (*func)(T&)){
	int i = 0;
	while (i < len) {
		func(array[i]);
		i++;
	}
}

#endif
