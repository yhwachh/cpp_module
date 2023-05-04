#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
    T len = a;
    a = b;
    b = len;
}

template <typename T>
T max(T a, T b)
{
    if(a > b)
        return(a);
    if(b > a)
        return(b);
    else
        return(a);
}

template <typename T>
T min(T a, T b)
{
    if(a > b)
        return(b);
    if(b > a)
        return(a);
    else
        return(b);
}


#endif
