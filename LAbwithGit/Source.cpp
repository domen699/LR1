#include <iostream>

#include<math.h>

double primer(double x, double y, double z)
{
	double power = (double)1 / 3;
	double n = pow(x - 1, power);
	power = (double)1 / 4;
	double a = pow(y + n, power);
	double c = abs(x - y)*(pow(sin(z), 2) + tan(z));
	double h = a / c;
	return h;
}

int main()
{
	double x, y, z, h;
	std::cout << "Vvedite x\n";
	std::cin >> x;
	std::cout << "Vvedite y\n";
	std::cin >> y;
	std::cout << "Vvedite z\n";
	std::cin >> z;
	h = primer(x, y, z);
	std::cout << "Result h=" << h << "\n";
	return 0;

}

