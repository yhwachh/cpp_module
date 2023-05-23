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

float RPN::evaluateExpression(std::string arg)
{
    std::stack<float> stack;
    std::istringstream iss(arg);
    std::string token;

    try
    {
        while (iss >> token)
        {
            if (token == "+" || token == "-" || token == "*" || token == "/")
            {
                if (stack.size() < 2)
                {
                    throw std::runtime_error("Erreur : Pas assez d'opérandes pour l'opération ");
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
                {
                    if (operand2 == 0)
                    {
                        throw std::runtime_error("Erreur : Division par zéro");
                    }
                    stack.push(operand1 / operand2);
                }
            }
            else
            {
                try
                {
                    float operand = std::stof(token);
                    stack.push(operand);
                }
                catch (const std::exception& e)
                {
                    throw std::runtime_error("Erreur : Opérande invalide ");
                }
            }
        }
    }
    catch (const std::exception& e)
    {
        std::cout << "Erreur d'évaluation : " << e.what() << std::endl;
        return 0;
    }

    if (stack.size() == 1)
        return stack.top();
    else
    {
        std::cout << "Erreur d'évaluation : Expression invalide" << std::endl;
        return 0;
    }
}