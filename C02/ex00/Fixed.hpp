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
    int                 n;
    static const int    c = 8;
};

//std::ostream  &operator<<(std::ostream & o, Fixed const &fixed);
#endif