#include "Conversion.hpp"


Conversion::Conversion(std::string arg): _arg(arg){}

Conversion::~Conversion(){}

Conversion::Conversion(const Conversion &copy)
{
    *this = copy;
}

char    Conversion::toChar()
{
    int     a;

    try
    {
        a = stoi(this->_arg);
    }
    catch(const std::exception& e)
    {
        throw Conversion::impossible();
    }

    if(a < 0 || a > 255)
    {
        throw Conversion::impossible();
    }
    if(!isprint(a))
    {
        throw Conversion::nonDisplayable();
    }

    return a;

}

int		Conversion::toInt() 
{

    int b;

	try 
    {
		b = stoi(this->_arg);
		return b;
	}
	catch (std::exception &e) 
    {
		throw Conversion::impossible();
	}
}

float	Conversion::toFloat()
{
    float   c;

	try 
    {
		c = std::stof(this->_arg);
		return c;
	}
	catch (std::exception &e) 
    {
		throw Conversion::impossible();
	}

}


double	Conversion::toDouble()
{
    double d;

	try 
    {
		d = std::stod(this->_arg);
		return d;
	}
	catch (std::exception &e) 
    {
		throw Conversion::impossible();
	}
}

std::ostream &operator<<( std::ostream &os, Conversion & b )
{

	os << "char: ";
	try {
		char	c = b.toChar();
		os << c << std::endl;
	}
	catch (std::exception &e) {
		os << e.what() << std::endl;
	}
	os << "int: ";
	try {
		int	n = b.toInt();
		os << n << std::endl;
	}
	catch (std::exception &e) {
		os << e.what() << std::endl;
	}
	os << "float: ";
	try {
		float	f = b.toFloat();
		if (std::isnan(f) && std::signbit(f))
			os << "-";
		os << f;
		if (!std::isnan(f) && f - (int)f == 0)
			os << ".0";
		os <<"f" << std::endl;
	}
	catch (std::exception &e) {
		os << e.what() << std::endl;
	}
	os << "double: ";
	try {
		double	d = b.toDouble();
		if (std::isnan(d) && std::signbit(d))
			os << "-";
		os << d;
		if (!std::isnan(d) && d - (int)d == 0)
			os << ".0";
		os << std::endl;
	}
	catch (std::exception &e) {
		os << e.what() << std::endl;
	}

	return os;
}
