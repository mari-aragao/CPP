/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:23:38 by maragao           #+#    #+#             */
/*   Updated: 2023/10/20 17:56:43 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int     i[5] = {1, 2, 3, 4, 5};
    iter(i, 5, printValue<int>);
    std::cout << std::endl;
    
    char    c[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    iter(c, 6, printValue<char>);
    std::cout << std::endl;

    float   f[3] = {1.6, 22.5, 13.7};
    iter(f, 3, printValue<float>);
    std::cout << std::endl << std::endl;
    
    std::string s[] = {"uma", "duas", "tres"};
    iter(s, 3, printValue<std::string>);
    std::cout << std::endl;
    return 0;
}
/*
class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
  int tab[] = { 0, 1, 2, 3, 4 }; 
  Awesome tab2[5];

  iter( tab, 5, print<int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}*/
