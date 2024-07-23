/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:07:01 by jguerin           #+#    #+#             */
/*   Updated: 2024/05/07 13:54:12 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
  private:
	int	_nb;
	static const int _fractionalBits = 8;

  public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed(const Fixed &cpy);
	Fixed &operator=(const Fixed &src);
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
