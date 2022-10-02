#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int size);
		Array(Array const &rhs);
		Array &operator=(Array<T> const &rhs);
		Array &operator[](Array<T> const &rhs);
		~Array(void);
	private:
		T *_array;
		unsigned int _size;
	public:
		unsigned int getSize(void);
		
};

#endif