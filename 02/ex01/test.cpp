#include <iostream>
#include <cmath>

// converts value into its fixed point 
int cast_fixedValue(int value, int fractionalBits)
{
	int fixedValue = 2;

	for (int i = 1; i < fractionalBits; i++)
		fixedValue *= 2;
	return (value * fixedValue);
}

// float cast_float(const int value, int fractionalBits)
// {
// 	int start = 2;
// 	int fixedValue = 2;

// 	for (int i = 1; i < fractionalBits; i++)
// 		fixedValue *= start;
// 	return ((float) fixedValue);
// }

int main(void)
{
	int	const fractionalBites = 8;
	const int i = 1234.4321f ;
	int j = i << 8;
	int other = roundf(i * (1 << fractionalBites));
	std::cout << "i is :" << i << "\n";
	std::cout << " Fixed value is through bitwise: " << j << " or " << other;
	std::cout << " and through my cast is: " << cast_fixedValue(i, fractionalBites);
	std::cout << "\n converting back is: ";
	// std::cout << " and converting back to float is: " << (float)j / (float)(1 << fractionalBites) << std::endl;
	std::cout << " and converting back to float is: " << static_cast<float>(j / (1 << fractionalBites)) << std::endl;
	return (0);
}
