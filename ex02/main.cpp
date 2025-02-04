/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:51:26 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/04 16:01:09 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void) {
  Array<int> a1;
  std::cout << "Array 1 size: " << a1.size() << std::endl;

  Array<int> a2(10);
  std::cout << "Array 2 size: " << a2.size() << std::endl;
  for (int i = 0; i < 10; ++i) {
    a2[i] = i;
  }
  
  try {
    std::cout << a2[0] << std::endl;
    std::cout << a2[5] << std::endl;
    std::cout << a2[8] << std::endl;
    std::cout << a2[10] << std::endl;
    std::cout << a2[-1] << std::endl;
    std::cout << a2[1000] << std::endl;
  } catch(std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

    Array<int> a3(a2);
    a3[5] = 10;
    std::cout << "a2[5] = " << a2[5] << ", a3[5] = " << a3[5] << std::endl;

    Array<int> a4(5);
    a4 = a2;
    std::cout << "Array4 size: " << a4.size() << std::endl;
}