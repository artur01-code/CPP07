#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _array(NULL), _size(0)
{

}

template<typename T>
Array<T>::Array(unsigned int size)
{
	this->_size = size;
	this->_array = new T[size];
	for (unsined int i = 0; i < size; i++)
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
	if (*this == obj)
		return (*this);
	if (this->_size > 0)
		delete [] this->_array;
	this->_size = rhs._size;
	this->_array = new T[rhs._size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = rhs->_array[i];
	return (*this);
}
