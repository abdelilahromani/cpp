#ifndef FIXED_HPP
# define FIXEF_HPP

#include <iostream>

class Fixed{
    private:
        int fp_value;
        static const int fractional;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=( const Fixed &fixed);
        int getRawBits() const;
        void setRawBits(int const raw);
};

# endif