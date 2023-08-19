/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:14:53 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:14:53 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl{
public:
    Harl(void);
    ~Harl(void);
    void    complain(std::string level);

private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
};

#endif