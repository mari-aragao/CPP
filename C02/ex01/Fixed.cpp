#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

Fixed::Fixed(int const n) : _n(n << _c)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n) : _n(roundf(n * (1 << _c)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _n = fixed.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    return _n;
}

void    Fixed::setRawBits(int const raw)
{
    _n = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)_n / (float)(1 << _c));
}

int     Fixed::toInt(void) const
{
    return (_n >> _c);
}

std::ostream  &operator<<(std::ostream & o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}