#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>
#include <map>
#include <string>
#include <fstream>


class RPN
{
private:
    /* data */
public:
    RPN();
    RPN(const RPN &copy);
    RPN &operator=(const RPN &copy);
    ~RPN();

    float evaluateExpression(std::string arg);
};

#endif