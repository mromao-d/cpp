#include <iostream>

class Fixed
{
	private:
		int					integer;
		static const int	fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(Fixed &to_copy);
		Fixed &operator=(const Fixed &src);
		~Fixed(void);
		int	getRawBites(void) const;
		void	setRawBites(int bites);
};

Fixed::Fixed(void) {
	std::cout << "Default contructor called" << std::endl;
	this->integer = 0;
}

Fixed::Fixed(Fixed &to_copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = to_copy;
}

Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Copy assigment operator called" << std::endl;
	this->integer = src.getRawBites();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "destructor called;" << std::endl;
}

int	Fixed::getRawBites(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->integer);
}

void	Fixed::setRawBites(int bites) {
	std::cout << "setRawBits member function called" << std::endl;
	this->integer = bites;
}
