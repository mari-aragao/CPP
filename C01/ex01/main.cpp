/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:09:43 by maragao           #+#    #+#             */
/*   Updated: 2023/08/19 01:09:43 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
    int     N = 10;
    Zombie* zombies = zombieHorde(N, "zombie");

    for(int i = 0; i < N; i++)
        zombies[i].announce();
    delete [] zombies;
    return 0;
}