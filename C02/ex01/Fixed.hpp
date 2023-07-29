#ifndef FIXED_HPP
# define FIXED_HPP
# include "iostream"
# include <cmath>

class Fixed{
public:
    Fixed(void);
    Fixed(int const n);
    Fixed(float const f);
    Fixed(Fixed const &fix);
    ~Fixed(void);

    Fixed   &operator=(Fixed const &fixed);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

private:
    int                 _n;
    static const int    _c = 8;
};

std::ostream  &operator<<(std::ostream & o, Fixed const &fixed);
#endif