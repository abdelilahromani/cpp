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
        bool operator>(const Fixed &fixed) const;
        bool operator<(const Fixed &fixed) const;
        bool operator>=(const Fixed &fixed) const;
        bool operator<=(const Fixed &fixed) const;
        bool operator==(const Fixed &fixed) const;
        bool operator!=(const Fixed &fixed) const;
        Fixed operator*(const Fixed &fixed) const;
        Fixed operator+(const Fixed &fixed) const;
        Fixed operator-(const Fixed &fixed) const;
        Fixed operator/(const Fixed &fixed) const;
        Fixed &operator++();        
        Fixed operator++(int);
        Fixed &operator--();        
        Fixed operator--(int);
        static Fixed min(Fixed &a, Fixed &b);
        static const Fixed min(const Fixed &a, const Fixed &b) ;
        static Fixed max(Fixed &a, Fixed &b);
        static const Fixed max(const Fixed &a, const Fixed &b) ;
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=( const Fixed &fixed);
        int getRawBits() const;
        void setRawBits(int const raw);
    };
std::ostream& operator<<(std::ostream &of, const Fixed &fixed);

# endif