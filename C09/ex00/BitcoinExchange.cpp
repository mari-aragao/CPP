/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:52:36 by maragao           #+#    #+#             */
/*   Updated: 2023/08/29 02:52:36 by maragao          ###   ########.fr       */
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
    float       value;

    std::getline(database, line);
    while (std::getline(database, line))
    {
        int i = 0;
        std::string aux = line;
        int end = aux.find(",");
        while (end != -1)
        {
            i++;
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
        _database.insert(std::pair<std::string, float>(date, value));
        date.clear();
    }
}

void    BitcoinExchange::Exchange(std::ifstream &input)
{
    std::string line;
    std::string token;
    std::string date;
    float       value;

    std::getline(input, line);
    while (std::getline(input, line))
    {
        date.clear();
        int i = 0;
        std::string aux = line;
        int end = aux.find("|");
        while (end != -1)
        {
            i++;
            aux.erase(aux.begin(), aux.begin() + end + 1);
            end = aux.find("|");
        }
        if (i != 1)
        {std::cout<< "Error: bad input => " << line << std::endl; continue;}
        std::stringstream ss(line);
        while(std::getline(ss, token, '|'))
        {
            if (date.empty())
                date = token;
            else
                std::istringstream(token) >> value;
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
        float result = calculateExchange(year, month, day, value);
        if (result != -1)
            std::cout << date << " => " << value << " = " << result << std::endl;
    }
}

float   BitcoinExchange::calculateExchange(int year, int month, int day, float value)
{
    int yearDb, monthDb, dayDb;
    std::string aux;
    std::map<std::string, float>::iterator it = _database.end();
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