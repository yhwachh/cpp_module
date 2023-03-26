#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <iomanip>


class Fixed // La classe "Fixed" est une classe
// qui stocke un nombre à virgule fixe avec une précision de 8 bits
//La précision de 8 bits signifie que la partie décimale est stockée 
//en utilisant 8 bits (1 octet) et la partie entière est stockée dans le reste des bits
//La précision est fixe, c'est-à-dire qu'elle est déterminée à la création de l'objet et 
//ne peut pas être modifiée par la suite.
{
    public:
        Fixed();
        ~Fixed();
	    Fixed(const Fixed &copy);
        //Le constructeur de copie "Fixed(const Fixed &p)", qui crée une copie de 
        //l'objet passé en paramètre. Lorsqu'un objet "Fixed" est créé en utilisant 
        //un autre objet "Fixed", le constructeur de copie est appelé. 
        //Il copie la valeur de la variable "m_fixe" de l'objet passé en paramètre et 
        //l'assigne à la variable "m_fixe" de l'objet créé.
        Fixed &operator=(const Fixed &copy);
        //L'opérateur d'assignation "Fixed &operator=(const Fixed &p)", 
        //qui copie les membres de l'objet passé en paramètre dans l'objet courant. 
        //L'opérateur d'assignation est appelé lorsqu'un objet "Fixed" est affecté à 
        //un autre objet "Fixed" à l'aide de l'opérateur "=".

        int getRawBits(void) const;
        //Dans la méthode publique "getRawBits()", la valeur stockée dans la variable 
        //"m_fixe" est renvoyée. Cette méthode est appelée lorsque l'on souhaite obtenir 
        //la valeur stockée dans l'objet "Fixed".
        void setRawBits( int const raw );
        //Dans la méthode publique "setRawBits(int const raw)", la valeur passée en paramètre 
        //est stockée dans la variable "m_fixe". Cette méthode est appelée lorsque 
        //l'on souhaite modifier la valeur stockée dans l'objet "Fixed".
    
    private:
        int                 _fixevalue;
        //qui représente la valeur du nombre à virgule fixe.
        //La variable "m_fixe", qui stocke la valeur du nombre à virgule fixe
        static int const    _bits = 8;
        //La constante statique "m_bits", qui définit la précision du nombre à virgule fixe
};

#endif
