#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN &copy)
{
    *this = copy;
}

RPN &RPN::operator=(const RPN &copy)
{
    if(this != &copy)
        *this = copy;
    return(*this);
}

// Fonction pour évaluer une expression en notation polonaise
float RPN::evaluateExpression(std::string arg) 
{
    std::stack<float> stack;
    std::istringstream iss(arg);
    std::string token;
    
    while (iss >> token) 
    {
        if (token == "+" || token == "-" || token == "*" || token == "/") 
        {
            if (token != "+" || token != "-" || token != "*" || token != "/")
            {
                std::cout << "Error" << std::endl;
                return(1);
            }
            float operand2 = stack.top();
            stack.pop();
            float operand1 = stack.top();
            stack.pop();
            
            if (token == "+")
                stack.push(operand1 + operand2);
            else if (token == "-")
                stack.push(operand1 - operand2);
            else if (token == "*")
                stack.push(operand1 * operand2);
            else if (token == "/")
                stack.push(operand1 / operand2);
        } 
        else 
        {
            float operand = std::atof(token.c_str());
            stack.push(operand);
        }
    }
    return stack.top();
}