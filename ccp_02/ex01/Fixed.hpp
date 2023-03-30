#ifndef FIXED_HPP
# define FIXED_HPP


#include <iostream>

class Fixed 
{
    public:
	    Fixed();
        ~Fixed();
        Fixed(const Fixed &p);
        Fixed &operator=(const Fixed &p);
        Fixed(int const fixe);
        Fixed(float const fixe);

	    int getRawBits(void) const;
        int 	toInt(void) const;
        void setRawBits(int const raw);
	    float 	toFloat(void) const;
    
    private:
        int _fixe;
        const static int _bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &obj);

#endif