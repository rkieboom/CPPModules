/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 12:53:50 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/11/01 10:33:03 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	private:
		T				*_data;
		unsigned int	_n;
	public:
		Array() : _data(nullptr), _n(0)
		{
			std::cout << "Default con" << std::endl;
		}

		Array(unsigned int n) : _data(new T[n]), _n(n)
		{
			std::cout << "Param con" << std::endl;
		}

		Array(Array<T> &other) : _data(new T[other._n]), _n(other._n)
		{
			std::cout << "Copy con" << std::endl;
			for (unsigned int i = 0; i < this->_n; i++)
				this->_data[i] = other._data[i];
		}

		Array<T>& operator= (Array<T> &other)
		{
			std::cout << "Copy overload" << std::endl;
			if (this->_data == nullptr)
			{
				this->_data = new T[other._n];
				this->_n = other._n;
				for (unsigned int i = 0; i < this->_n; i++)
					this->_data[i] = other._data[i];
			}
			else
			{
				for (unsigned int i = 0; (i < other._n && i < this->_n); i++)
					this->_data[i] = other._data[i];
			}
			return *this;
		}

		T& operator[](int i)
		{
			if (i < 0 || (unsigned int)i >= this->_n)
				throw std::out_of_range("Out of range!");
			return this->_data[i];
		}

		~Array()
		{
			std::cout << "Deconstructor" << std::endl;
		}

		unsigned int size() const
		{
			return this->_n;
		}
};

#endif
