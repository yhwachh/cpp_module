#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>


class Span
{
private:
    unsigned int _N;
    std::vector<int> _tab;

public:
    Span();
    Span(unsigned int N);
    ~Span();
    Span(const Span &copy);
    Span &operator=(const Span &copy);

    void addNumber(int N);
    void addRange(unsigned int tab_size);

    int shortestSpan();
    int longestSpan();

    class Error : public std::exception
    {
        public:
            const char * what() const throw()
            {
                return ("Error");
            }
    };
};

#endif
