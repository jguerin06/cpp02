/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:07:01 by jguerin           #+#    #+#             */
/*   Updated: 2024/04/25 14:10:22 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int nb;
	static const int bit;

  public:
	Fixed();
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed(const Fixed &cpy);
	Fixed &operator=(const Fixed &src);
};

#endif
