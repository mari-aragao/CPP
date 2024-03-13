/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:52:36 by maragao           #+#    #+#             */
/*   Updated: 2024/03/13 17:02:02 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &be) {*this = be;}

BitcoinExchange::BitcoinExchange(std::ifstream &database, std::ifstream &input)
{
    setDatabase(database);
    Exchange(input);
}

void    BitcoinExchange::setDatabase(std::ifstream &database)
{
    std::string line;
    std::string token;
    std::string date;
    long double       value;

    std::getline(database, line);
    while (std::getline(database, line))
    {
        int i = 0;
        std::string aux = line;
        int end = aux.find(",");
        while (end != -1)
        {
            i++;
            if (aux.size() == (size_t)(end + 1))
            {throw std::invalid_argument("Error: wrong database format.");}    
            if (end == 0)
            {throw std::invalid_argument("Error: wrong database format.");}    
            aux.erase(aux.begin(), aux.begin() + end + 1);
            end = aux.find(",");
        }
        if (i != 1)
        {throw std::invalid_argument("Error: wrong database format.");}
        std::stringstream ss(line);
        
        while(std::getline(ss, token, ','))
        {
            if (date.empty())
                date = token;
            else
                std::istringstream(token) >> value;
        }
        _database.insert(std::pair<std::string, long double>(date, value));
        date.clear();
    }
}

void    BitcoinExchange::Exchange(std::ifstream &input)
{
    std::string line;
    std::string token;
    std::string date;
    long double       value;

    std::getline(input, line);
    if(line.empty())
    {throw std::invalid_argument("Error: empty file.");}
    if (line != "date | value")
    {throw std::invalid_argument("Error: wrong header.");}
    while (std::getline(input, line))
    {
        date.clear();
        int i = 0;
        std::string aux = line;
        int end = aux.find("|");
        while (end != -1)
        {
            i++;
            if (aux.size() == (size_t)(end + 1) ||
                (aux.size() == (size_t)(end + 2) && aux.at(end + 1) == ' '))
            {i = 0; break;}
            aux.erase(aux.begin(), aux.begin() + end + 1);
            end = aux.find("|");
        }
        if (i != 1)
        {std::cout<< "Error: bad input => " << line << std::endl; continue;}
        std::stringstream ss(line);
        std::string teste;
        int error = 0;
        while(std::getline(ss, token, '|'))
        {
            size_t first_space;
            size_t last_space;
            if (date.empty())
            {
                first_space = token.find_first_not_of(' ');
                last_space = token.find_last_not_of(' ');
                date = token.substr(first_space, (last_space - first_space + 1));
                for (int j = 0; date[j]; j++)
                {
                    if (date[j] == ' ' || (date[j] != '-' && !std::isdigit(date.at(j))))
                        error = 1;
                }
            }
            else
            {
                first_space = token.find_first_not_of(' ');
                last_space = token.size() - 1;
                while (token.at(last_space) == ' ')
                    last_space--;
                token = token.substr(first_space, last_space - first_space + 1);
                for (int j = 0; token[j]; j++)
                {
                    if (token[j] != '.' && !std::isdigit(token[j]))
                        error = 1; 
                }
                std::istringstream(token) >> value;
            }
        }
        int year, month, day;
        ss.clear();
        ss.str("");
        ss << date;
        i = 0;
        while (std::getline(ss, aux, '-'))
        {
            if (i == 0) {std::istringstream(aux) >> year;}
            if (i == 1) {std::istringstream(aux) >> month;}
            if (i == 2) {std::istringstream(aux) >> day;}
            aux.clear();
            i++;
        }
        if (i != 3 || year < 2009 || year > 2023 ||
                month < 1 || month > 12 || day < 1 || day > 31)
        {std::cout<< "Error: bad input => " << line << std::endl; continue;}
        else if (value < 0) 
        {std::cout << "Error: not a positive number." << std::endl; continue;}
        else if (value > 1000) 
        {std::cout << "Error: too large number." << std::endl; continue;}
        else if (error == 1)
        {std::cout<< "Error: bad input => " << line << std::endl; continue;}
        long double result = calculateExchange(year, month, day, value);
        if (result != -1)
            std::cout << date << " => " << value << " = " << result << std::endl;
    }
}

long double   BitcoinExchange::calculateExchange(int year, int month, int day, long double value)
{
    int yearDb, monthDb, dayDb;
    std::string aux;
    std::map<std::string, long double>::iterator it = _database.end();
    while(--it != _database.begin())
    {
        int i = 0;
        std::stringstream ss(it->first);
        while (std::getline(ss, aux, '-'))
        {
            if (i == 0) {std::istringstream(aux) >> yearDb;}
            else if (i == 1) {std::istringstream(aux) >> monthDb;}
            else if (i == 2) {std::istringstream(aux) >> dayDb;}
            aux.clear();
            i++;
        }
        if ((year == yearDb && month == monthDb && day < dayDb) ||
                (year == yearDb && month < monthDb))
            continue;
        else if ((year == yearDb && month == monthDb && day >= dayDb) ||
                (year > yearDb && month < monthDb) ||
                (year == yearDb && month > monthDb))
            return (it->second * value);
    }
    std::cout << "Error: not found." << std::endl;
    return (-1);
}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &be) {(void)be; return *this;}
