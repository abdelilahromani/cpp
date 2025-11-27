#ifndef FIXED_HPP
# define FIXEF_HPP

#include <iostream>

class Fixed{
    private:
        int fp_value;
        static const int fractional = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed);
        Fixed (const int value);
        Fixed(const float value);
        bool operator>(const Fixed &fixed);
        bool operator<(const Fixed &fixed);
        bool operator>=(const Fixed &fixed);
        bool operator<=(const Fixed &fixed);
        bool operator==(const Fixed &fixed);
        bool operator!=(const Fixed &fixed);
        Fixed operator*(const Fixed &fixed);
        Fixed operator+(const Fixed &fixed);
        Fixed operator-(const Fixed &fixed);
        Fixed operator/(const Fixed &fixed);
        Fixed operator++();        
        Fixed operator++(int);
        Fixed operator--();        
        Fixed operator--(int);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=( const Fixed &fixed);
        int getRawBits() const;
        void setRawBits(int const raw);
    };
std::ostream& operator<<(std::ostream &of, const Fixed &fixed);

# endif