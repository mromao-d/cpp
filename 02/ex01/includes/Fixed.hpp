#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					fixedPoint;
		static const int	fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(Fixed &to_copy);
		Fixed &operator=(const Fixed &src);
		Fixed(const int	to_fix);
		Fixed(const float	to_fix);
		Fixed(const Fixed &to_copy);
		// Fixed(float	to_fix);
		~Fixed(void);
		int	getRawBites(void) const;
		void	setRawBites(int bites);
		float	toFloat(void) const;
		int		toInt(void) const;
		
};

std::ostream& operator<<(std::ostream &out, const Fixed &source);
int cast_fixedValue(int one, int fractionalBits, const int value);
