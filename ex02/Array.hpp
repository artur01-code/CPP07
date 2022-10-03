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
		T &operator[](unsigned int index);
		~Array(void);
	private:
		T *_array;
		unsigned int _size;
	public:
		unsigned int getSize(void);
		
};

#endif

template<typename T>
Array<T>::Array(void) : _array(NULL), _size(0)
{

}

template<typename T>
Array<T>::Array(unsigned int size)
{
	this->_size = size;
	this->_array = new T[size];
	for (unsigned int i = 0; i < size; i++)
		this->_array[i] = 0;
}

template<typename T>
Array<T>::Array(Array<T> const &rhs)
{
	this->size = 0; //unnecessary?
	*this = rhs;
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs)
{
	if (*this == rhs)
		return (*this);
	if (this->_size > 0)
		delete [] this->_array;
	this->_size = rhs._size;
	this->_array = new T[rhs._size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = rhs->_array[i];
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw std::out_of_range("Array: Index out of bounds");
	return (this->_array[index]);
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_size > 0)
		delete [] this->_array;
}

template<typename T>
unsigned int Array<T>::getSize(void)
{
	return (this->_size);
}
