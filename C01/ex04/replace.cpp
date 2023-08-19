/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:14:05 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:14:05 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replace(std::string line, std::string s1, std::string s2)
{
    int i = 0;
    int s1_size = (int)s1.size();
    std::string repLine;

    while (i < (int)line.size())
    {
        if (line.compare(i, s1_size, s1) == 0)
        {
            repLine = repLine + s2;
            i += s1_size;
            continue;
        }
        else
            repLine = repLine + line.at(i); 
        i++;
    }
    return (repLine);
}