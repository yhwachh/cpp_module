#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

int main(int ac, char **av)
{
     // Vérifier qu'il y a bien trois arguments en ligne de commande
    if (ac != 4) {
        std::cout << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    // Ouvrir le fichier source en lecture
    std::ifstream input_file(av[1]);
    if (!input_file.is_open()) {
        std::cout << "Erreur: impossible d'ouvrir le fichier \"" << av[1] << "\"" << std::endl;
        return 1;
    }

    // Ouvrir le fichier destination en écriture
    std::ofstream output_file((std::string(av[1]) + ".replace").c_str());
    if (!output_file.is_open()) {
        std::cout << "Erreur: impossible de créer le fichier \"" << av[1] << ".replace\"" << std::endl;
        return 1;
    }

    std::string str;
	size_t pos;
    std::string old_str = av[2]; // pour quoi comme ca : 
	//En bref, si av[2] est déjà une instance de std::string,
    // il n'est pas nécessaire de créer une nouvelle variable
    //  pour stocker la longueur de la chaîne. Mais si av[2]
    //   est un tableau de caractères, il peut être utile de
    //    créer une nouvelle variable std::string pour faciliter
    //     le traitement de la chaîne.
	while(std::getline (input_file, str))
	{
		while((pos = str.find(av[2])) != std::string::npos)// recherche la première occurrence de la sous-chaîne spécifiée (av[2]) dans la ligne actuelle (str)
		{                                                  // si la sous-chaîne est trouvée, la boucle while continue à exécuter.

			output_file << str.substr(0, pos);//écrit dans le fichier de sortie (output_file) la partie de la chaîne str qui se trouve avant la première occurrence de la sous-chaîne (av[2]).
			str.erase(0, pos + old_str.length());//supprime la partie de la chaîne str qui correspond à la sous-chaîne (av[2]) et avance la position de la chaîne à la fin de la sous-chaîne.
			output_file << av[3];//écrit la nouvelle sous-chaîne (av[3]) dans le fichier de sortie (output_file).
            
		}
	output_file << str << std::endl;// écrit la fin de la chaîne str dans le fichier de sortie (output_file),
                                    // après avoir remplacé toutes les occurrences de la sous-chaîne spécifiée 
	}                               //(av[2]) par la nouvelle sous-chaîne (av[3]).
   
    input_file.close();
    output_file.close();

    std::cout << "Le fichier \"" << av[1] << "\" a été copié dans \"" << av[1] << ".replace\" avec toutes les occurrences de \"" << av[2] << "\" remplacées par \"" << av[3] << "\"" << std::endl;
    return(0);
}

/*"npos" est une constante statique de la classe "std::string" qui représente la valeur maximale possible pour le type de données "size_t".
Elle est utilisée pour indiquer l'absence de résultats lorsque la méthode "std::string::find" est appelée pour chercher une sous-chaîne dans une chaîne de caractères.
Dans le code donné, la boucle interne est exécutée tant que la méthode "std::string::find" renvoie une valeur différente de "npos". 
Cela signifie que la sous-chaîne "old_str" a été trouvée dans la chaîne de caractères "str". 
Lorsque la sous-chaîne "old_str" ne peut pas être trouvée dans "str", la méthode "std::string::find" renvoie la valeur "npos", ce qui interrompt la boucle interne.
En résumé, "npos" est une constante importante dans la bibliothèque standard de C++ qui permet de représenter l'absence de résultats pour certaines fonctions, 
telles que la méthode "std::string::find".*/