#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed 
{

	public:
		Fixed();
		~Fixed();
		Fixed(int const raw);
		Fixed(float const raw);
		Fixed(Fixed const &src);
		Fixed 	&operator=( Fixed const &src );
		Fixed	operator+( Fixed const &src ) const;
		Fixed	operator-( Fixed const &src ) const;
		Fixed	operator*( Fixed const &src ) const;
		Fixed	operator/( Fixed const &src ) const;
		Fixed 	&operator++();
		Fixed	operator++(int);
		Fixed 	&operator--();
		Fixed	operator--(int);

		bool	operator>( Fixed const &src ) const;
		bool	operator>=( Fixed const &src ) const;
		bool	operator==( Fixed const &src ) const;
		bool	operator<( Fixed const &src ) const;
		bool	operator<=( Fixed const &src ) const;
		bool	operator!=( Fixed const &src ) const;

		static Fixed const &min(Fixed const &src1, Fixed const &src2);
		static Fixed const &max(Fixed const &src1, Fixed const &src2);
		static Fixed &min(Fixed &src1, Fixed &src2);
		static Fixed &max(Fixed &src1, Fixed &src2);

		int		getRawBits( void ) const;
		int		toInt( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;

	private:
		int					_fixe;
		static const int	_bits = 8;
};

std::ostream &	operator<<(std::ostream & out, Fixed const & obj);

#endif