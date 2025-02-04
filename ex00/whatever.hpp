/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:26:49 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/04 09:02:03 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <class T>
void swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

template <class T>
T min(T& a, T& b) {
  if (a == b) return b;
  return a < b ? a : b;
}

template <class T>
T max(T& a, T& b) {
  if (a == b) return b;
  return a > b ? a : b;
}

#endif
