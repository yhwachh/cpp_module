#include "Span.hpp"



Span::Span()
{
    this->_N = 0;
}

Span::~Span()
{
}

Span::Span(unsigned int N)
{
    _N = N;
}

Span::Span(const Span &copy)
{
    _N = copy._N;
}

Span &Span::operator=(const Span &copy)
{
    this->_N = copy._N;
    this->_tab = copy._tab;
    return (*this);    
}

void    Span::addNumber(int N)
{   
    if(_tab.size() < _N)
        _tab.push_back(N);
    else 
        throw Span::Error();
}

int Span::shortestSpan()
{
	int ft_min = 2147483647;

	std::vector<int>::iterator it1;		
	std::vector<int>::iterator it2;		
	
	for(it1 = _tab.begin();it1!=_tab.end();it1++)
	{
		it2 = _tab.begin();
		for(it2 = _tab.begin();it2!= _tab.end(); it2++)
		{
			if (*it1 != *it2)
			{
				if (ft_min > *it1 - *it2)
				{
					if (*it2 - *it1 < 0)
						ft_min = *it1 - *it2;
					else
						ft_min = *it2 - *it1;
				}
			}
		}
	}
	return (ft_min);
}

int Span::longestSpan()
{
	unsigned int ft_min = 0;
	unsigned int ft_max = 0;

	ft_min = *std::min_element(_tab.begin(), _tab.end());
	ft_max = *std::max_element(_tab.begin(), _tab.end());

	return (ft_max - ft_min);
}

void Span::addRange(unsigned int tab_size)
{
	int nb = 0;

	srand(time(NULL));
    if (_N  < tab_size)
	{
		std::cout << "Error limits!" << std::endl;
		exit(0);
	}
	else
    {
		std::cout << "==========" << std::endl;
        for (unsigned int i = 0; i < tab_size; i++)
		{
			nb = rand() % 50;
			std::cout << nb << std::endl;
			addNumber(nb);
		}
		std::cout << "==========" << std::endl;
	}
}
