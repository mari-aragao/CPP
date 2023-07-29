#ifndef FIXED_HPP
# define FIXED_HPP
# include "iostream"

class Fixed{
public:
    Fixed(void);
    Fixed(Fixed &fixed);
    ~Fixed(void);

    Fixed   &operator=(Fixed const &fixed);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

private:
    int                 _n;
    static const int    _c = 8;
};

#endif