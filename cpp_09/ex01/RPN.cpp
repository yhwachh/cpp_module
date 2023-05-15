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
float RPN::evaluateExpression(std::string expression) 
{
    std::stack<float> operandStack;
    std::istringstream iss(expression);
    std::string token;
    
    while (iss >> token) 
    {
        if (token == "+" || token == "-" || token == "*" || token == "/") 
        {
            float operand2 = operandStack.top();
            operandStack.pop();
            float operand1 = operandStack.top();
            operandStack.pop();
            
            if (token == "+")
                operandStack.push(operand1 + operand2);
            else if (token == "-")
                operandStack.push(operand1 - operand2);
            else if (token == "*")
                operandStack.push(operand1 * operand2);
            else if (token == "/")
                operandStack.push(operand1 / operand2);
        } 
        else 
        {
            float operand = std::atof(token.c_str());
            operandStack.push(operand);
        }
    }
    return operandStack.top();
}