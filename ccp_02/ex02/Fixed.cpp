#include "Fixed.hpp"

Fixed::Fixed() : _fixe(0) { }

Fixed::Fixed(int const _fixe) : _fixe(_fixe << _bits) { }

Fixed::Fixed(float const _fixe) : _fixe(roundf(_fixe * (1 << _bits))) { }

Fixed::Fixed(Fixed const & src) 
{
	*this = src;
}

Fixed &	Fixed::operator=(Fixed const &src) 
{
	setRawBits(src.getRawBits());
	return *this;
}

Fixed::~Fixed() { }

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

std::ostream &operator<<(std::ostream &out, Fixed const &obj) 
{
	return(out << obj.toFloat());
}

bool	Fixed::operator>(Fixed const &src) const 
{
	return this->_fixe > src.getRawBits();
}

bool	Fixed::operator<(Fixed const &src) const 
{
	return this->_fixe < src.getRawBits();
}

bool	Fixed::operator>=(Fixed const &src) const 
{
	return this->_fixe >= src.getRawBits();
}

bool	Fixed::operator<=(Fixed const &src) const 
{
	return this->_fixe <= src.getRawBits();
}

bool	Fixed::operator==(Fixed const &src) const 
{
	return this->_fixe == src.getRawBits();
}

bool	Fixed::operator!=(Fixed const &src) const 
{
	return this->_fixe != src.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &src) const 
{
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(Fixed const &src) const 
{
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(Fixed const &src) const 
{
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(Fixed const &src) const 
{
	return Fixed(this->toFloat() / src.toFloat());
}

Fixed &Fixed::operator++() 
{
	this->_fixe++;
	return *this;
}

Fixed	Fixed::operator++(int) 
{
	Fixed tmp(*this);
	this->_fixe++;
	return tmp;
}

Fixed &Fixed::operator--() 
{
	this->_fixe--;
	return *this;
}

Fixed	Fixed::operator--(int) 
{
	Fixed tmp(*this);
	this->_fixe--;
	return tmp;
}

Fixed &Fixed::min(Fixed &src1, Fixed &src2) 
{
	return src1 < src2 ? src1 : src2;
}

Fixed &Fixed::max(Fixed &src1, Fixed &src2) 
{
	return src1 > src2 ? src1 : src2;
}

Fixed const &Fixed::min(Fixed const &src1, Fixed const &src2) 
{
	return src1 < src2 ? src1 : src2;
}

Fixed const &Fixed::max(Fixed const &src1, Fixed const &src2) 
{
	return src1 > src2 ? src1 : src2;
}
