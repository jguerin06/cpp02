/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:24:13 by jguerin           #+#    #+#             */
/*   Updated: 2024/04/25 14:28:33 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed one;
	Fixed two(one);
	Fixed three;

	three = two;

	std::cout << one.getRawBits() << std::endl;
	std::cout << two.getRawBits() << std::endl;
	std::cout << three.getRawBits() << std::endl;
	return 0;
}
