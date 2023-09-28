/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 02:51:29 by maragao           #+#    #+#             */
/*   Updated: 2023/08/29 02:51:29 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//validate input - split with "|", size = 3,
// format year-month-day, value between 0 and 1000 


int main(int argc, char **argv)
{
    std::ifstream database;
    std::ifstream input;
    try{if (argc != 2) throw std::invalid_argument("Error: could not open file.");}
    catch (std::exception &e) {std::cerr << e.what() << std::endl; return (-1);}    
    input.open(argv[1], std::ofstream::in);
    if (!input) {std::cerr << "Error: invalid input" << std::endl; return (-1);}
    database.open("data.csv", std::ofstream::in);
    if (!database) {std::cerr << "Error: invalid database" << std::endl; return (-1);}

    try {BitcoinExchange be(database, input);}
    catch (std::exception &e) {std::cerr << e.what() << std::endl; return (-1);}

    return (0);
}