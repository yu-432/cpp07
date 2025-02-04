/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:07:19 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/04 16:10:57 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstdlib>

template <class T>
void iter(T* array, size_t len, void (*func)(T&)) {
  for (size_t i = 0; i < len; ++i) {
    func(array[i]);
  }
}

#endif
