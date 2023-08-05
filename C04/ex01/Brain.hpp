/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:48:05 by maragao           #+#    #+#             */
/*   Updated: 2023/08/05 11:48:05 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream> 

class Brain
{
public:
    Brain(void);
    Brain(Brain const &brain);
    ~Brain(void);
    Brain &operator=(Brain const &brain);

private:
    std::string ideas[100];
};

#endif