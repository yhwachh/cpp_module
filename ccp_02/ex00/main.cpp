#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}


/*
Dans la fonction "main()", trois objets "Fixed" sont créés. 
L'objet "a" est créé en utilisant le constructeur par défaut,
l'objet "b" est créé en utilisant le constructeur de copie en 
passant l'objet "a" en paramètre, et l'objet "c" est créé en 
utilisant le constructeur par défaut.

Ensuite, l'objet "c" est affecté à l'objet "b" en utilisant l'opérateur 
d'assignation. Les valeurs stockées dans les trois objets sont ensuite 
affichées en utilisant la méthode "getRawBits()". La sortie du programme 
sera donc les valeurs stockées dans les trois objets "Fixed".


En résumé, la classe "Fixed" est une classe simple qui permet de stocker
des nombres à virgule fixe avec une précision de 8 bits. Elle implémente 
les méthodes de base pour la création, la copie, l'assignation et la 
récupération des valeurs stockées dans l'objet.
*/
