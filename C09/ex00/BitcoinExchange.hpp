/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:50:49 by maragao           #+#    #+#             */
/*   Updated: 2023/08/29 02:50:49 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <map>
#include <cmath>

class BitcoinExchange
{
public:
    BitcoinExchange(std::ifstream &database, std::ifstream &input);
    ~BitcoinExchange(void);
    BitcoinExchange &operator=(BitcoinExchange const &be);

private:
    std::map<std::string, long double> _database;
    
    void    setDatabase(std::ifstream &database);
    void    Exchange(std::ifstream &input);
    long double   calculateExchange(int year, int month, int day, long double f);
    BitcoinExchange(void);
    BitcoinExchange(BitcoinExchange const &be);
};

#endif