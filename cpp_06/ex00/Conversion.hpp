#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#pragma once
#include <iostream>
#include <cmath>


class Conversion
{

private:
    std::string _arg;
    
public:
    Conversion(std::string arg);
    Conversion(const Conversion &copy);
    ~Conversion();
    
    char toChar();
    int toInt();
    float toFloat();
    double toDouble();

    class impossible : public std::exception 
    {

			public:
				virtual const char*	what() const throw()
                {
                    return ("impossible");
                }
	};

	class nonDisplayable : public std::exception 
    {

			public:
				virtual const char*	what() const throw()
                {
                    return ("non displayble");
                }
	};


};

std::ostream& operator<<(std::ostream &os, Conversion &b);

#endif
