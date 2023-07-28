#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->n = 0;
}

Fixed::Fixed(Fixed const &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    this->n = (n << this->c);
}

Fixed::Fixed(float const n)
{
    std::cout << "Float constructor called" << std::endl;
    this->n = round(n * (1 << this->c));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->n = fixed.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    return this->n;
}

void    Fixed::setRawBits(int const raw)
{
    this->n = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->n / (float)(1 << this->c));
}

int     Fixed::toInt(void) const
{
    return (this->n >> this->c);
}

std::ostream  &operator<<(std::ostream & o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}