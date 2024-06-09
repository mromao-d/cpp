#include "../includes/Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default contructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed &to_copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = to_copy;
}

Fixed::Fixed(const int	to_fix) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = (to_fix * (1 << this->fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Copy assigment operator called" << std::endl;
	this->fixedPoint = src.getRawBites();
	return (*this);
}

Fixed::Fixed(const float	to_fix) {
// Fixed::Fixed(float	to_fix) {
	std::cout << "float constructor called" << std::endl;
	// this->fixedPoint = roundf(to_fix << this->fractionalBits);
	this->fixedPoint = roundf(to_fix * (1 << this->fractionalBits));
}

Fixed::~Fixed(void) {
	std::cout << "destructor called;" << std::endl;
}

int	Fixed::getRawBites(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void	Fixed::setRawBites(int bites) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = bites;
}

// converts value into int
// to convert into its fixed value, I have to return the multiplication instead
int Fixed::toInt(void) const
{
	int fixedValue = 2;

	for (int i = 1; i < this->fractionalBits; i++)
		fixedValue *= 2;
	// std::cout << "fixed value is: " << fixedValue << std::endl;
	return (this->fixedPoint / fixedValue);
}

// // this also works, I just wanted to understand the math behind the opperation
// int Fixed::toInt(void) const
// {
// 	return (this->fixedPoint / (1 << this->fractionalBits));
// }

float	Fixed::toFloat(void) const {
	return ((float) this->fixedPoint / (float)(1 << this->fractionalBits));
}

std::ostream& operator<<(std::ostream &out, const Fixed &source) {
	out << source.toFloat();
	return (out);
}

