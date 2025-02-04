/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:22:31 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/04 09:41:33 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void incriment(int& i) {
  i++;
}

void addHello(std::string& str) {
  str = str + "Hello";
}

int main(void) {
  int array[10] = {0};
  std::string strs[5] = {"poti", "tama", "udon", "nikku", "cacao"}; 
  
  for (int i = 0; i < 10; ++i) std::cout << array[i];
  std::cout << std::endl;
  
  ::iter(array, 10, &incriment);
  
  for (int i = 0; i < 10; ++i) std::cout << array[i];
  std::cout << std::endl;

  for (int i = 0; i < 5; ++i) std::cout << strs[i] << ", ";
  std::cout << std::endl;
  
  ::iter(strs, 5, &addHello);
  
  for (int i = 0; i < 5; ++i) std::cout << strs[i] << ", ";
  std::cout << std::endl;
}
