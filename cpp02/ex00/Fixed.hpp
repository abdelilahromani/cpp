#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int value;
        static const int fractional;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed);
        Fixed (const int value);
        Fixed(const float value);
        Fixed &operator=( const Fixed &fixed);
        int getRawBits() const;
        void setRawBits(int const raw);
};

# endif