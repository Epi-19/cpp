/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 02:56:42 by louisalah         #+#    #+#             */
/*   Updated: 2025/04/10 02:22:41 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int raw_bits;
        static const int fractionalBits = 8;

    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int num);
        Fixed(const float num);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);


#endif
