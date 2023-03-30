#include "Fixed.hpp"
#include <cmath>

#include "Fixed.hpp"

Fixed::Fixed() : _fixe(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const _fixe) : _fixe(_fixe << _bits) 
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const _fixe) : _fixe(roundf(_fixe * (1 << _bits))) 
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &	Fixed::operator=(Fixed const & src) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(src.getRawBits());
	return *this;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const 
{
	return this->_fixe;
}

void	Fixed::setRawBits( int const _fixe ) 
{
	this->_fixe = _fixe;
}

float	Fixed::toFloat( void ) const 
{
	return (float)this->_fixe / (1 << _bits);
}

int		Fixed::toInt( void ) const 
{
	return this->_fixe >> _bits;
}

std::ostream &	operator<<(std::ostream & out, Fixed const & obj) {
	return(out << obj.toFloat());
}