#pragma once

#include <iostream>
#include <exception>

template<class T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_size;
	public:
		Array()
		{
			this->_size = 0;
			this->_arr = new T[0];
		}

		Array(int count)
		{
			this->_arr = new T[count]();
			this->_size = count;
		}

		Array(Array const &in)
		{
			this->_size = in._size;
			this->_arr = new T[in._size]();
			for (unsigned int i = 0; i < in._size; i++)
				this->_arr[i] = in._arr[i];
		}

		Array &operator=(Array const &in)
		{
			delete[] this->_arr;
			this->_arr = new T[in._size]();
			for (unsigned int i = 0; i < in._size; i++)
				this->_arr[i] = in._arr[i];
		}

		T &operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw std::exception();
			return (this->_arr[i]);
		}
		
		unsigned int	size()
		{
			return (this->_size);
		}

		~Array()
		{
			delete[] _arr;
		}
};