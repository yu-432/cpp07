/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:51:29 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/04 16:01:29 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdexcept>

template <typename T>
class Array {
 public:
  Array() : _size(0) { _array = new T[0]; };

  Array(unsigned int n) : _size(n) { _array = new T[n]; }

  Array(const Array& src) {
    _array = new T[src._size];
    _size = src._size;
    for (unsigned int i = 0; i < src._size; ++i) {
      _array[i] = src._array[i];
    }
  };

  ~Array() { delete[] _array; };

  Array& operator=(const Array& src) {
    if (this != &src) {
      delete[] _array;
      _array = new T[src._size];
      _size = src._size;
      for (unsigned int i = 0; i < _size || i < src._size; ++i) {
        _array[i] = src._array[i];
      }
    }
    return *this;
  };

  T& operator[](unsigned int i) {
    if (!(i < _size)) throw std::invalid_argument("Invalid index");
    return _array[i];
  }

  unsigned int size(void) { return _size; };

 private:
  T* _array;
  unsigned int _size;
};

#endif
