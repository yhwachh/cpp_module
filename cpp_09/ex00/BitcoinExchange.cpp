#include "BitcoinExchange.hpp"


Bitcoin::Bitcoin(){}

Bitcoin::~Bitcoin(){}

Bitcoin::Bitcoin (const Bitcoin &copy)
{
    *this = copy;
}

Bitcoin &Bitcoin::operator=(const Bitcoin &copy)
{
    if(this != &copy)
        *this = copy;
    return(*this);
}


/*
void Bitcoin::inputData(std::string input)
{
    std::ifstream file(input);
    std::string date;
    std::string line;
    std::string year;
    std::string month;
    std::string day;
    int year_int;
    int month_int;
    int day_int;

    float multipl;

    if (!file.is_open()) 
    {
        std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
        return;
    }
    std::getline(file, line);
    while (std::getline(file, line)) 
    {
        // Utilisation d'un flux de chaînes pour extraire les informations
        std::istringstream iss(line);
        std::string token;
        std::getline(iss, token, '|');
        date = token;

        std::istringstream dateStream(date);
        std::getline(dateStream, year, '-');  // Lecture de la partie année jusqu'au tiret
        std::getline(dateStream, month, '-');
        std::getline(dateStream, day, '-');

        year_int = std::stoi(year);
        month_int = std::stoi(month);
        day_int = std::stoi(day);
        
        std::getline(iss, token, '|');
        std::istringstream(token) >> multipl;   // Conversion de la chaîne en float
    }
    file.close(); 
}
*/

void    Bitcoin::openReadData(std::string database)
{
    std::ifstream file(database);
    std::string line;

     if (!file.is_open()) 
    {
    std::cerr << "Erreur lors de l'ouverture du fichier " << database << std::endl;
    return;
    }

    getline(file,line);
    while(getline(file,line))
    {
        int len = line.find(",");
        std::string valeur = line.substr(len + 1); // apres la ,
        std::string cle = line.substr(0, len);// avons la ,
        _database.insert(make_pair(cle, std::atof(valeur.c_str())));
    }
    file.close();
}

void    Bitcoin::inputData(std::string input)
{
    std::ifstream file(input);
    std::string line;

     if (!file.is_open()) 
    {
    std::cerr << "Erreur lors de l'ouverture du fichier " << input << std::endl;
    return;
    }

    getline(file,line);
    while(getline(file,line))
    {
        int len = line.find("|");

        std::string valeur = line.substr(len + 2);
        std::string cle = line.substr(0, len - 1);

        float number = std::stof (valeur.c_str());

        if (len == -1 || corectdate(cle))
			std::cout << "Error: bad input => " << cle << std::endl;
        else if (number < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (number > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else
			std::cout << cle << " => " << valeur << " = " << std::fixed << std::setprecision(2) << number * finddate(cle) << std::endl;

    }
    file.close();

}

int Bitcoin::corectdate(std::string date)
{
	std::string year = date.substr(0, 4);
	std::string month = date.substr(5, 2);
	std::string day = date.substr(8, 9);

	int year_int = std::stoi(year);
    int month_int = std::stoi(month);
    int day_int = std::stoi(day);

	if (year_int < 2009 || year_int > 2022 || month_int < 1 || month_int > 12 || day_int < 1 || day_int > 31) 
        return (-1);
	return (0);
}

float Bitcoin::finddate(std::string date)
{
	std::map<std::string, float>::iterator it;

	std::string year = date.substr(0, 4);
	std::string month = date.substr(5, 2);
	std::string day = date.substr(8,9);

	for(it = _database.begin(); it != _database.end(); ++it)
	{
		if (date == it->first)
			return (it->second);
   	}

	for(it = _database.begin();it != _database.end(); ++it)
	{
		if (year == it->first.substr(0,4) && month == it->first.substr(5,2))
		{
			float float1 = std::stof(it->first.substr(8,9));
			float float2 = std::stof(day);
			if (float1 > float2)
			{
				it--;
				return (it->second);
			}
		}
	}
	return (0);
}