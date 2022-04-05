#include <iostream>

int main()
{
	int a = 124;
	int b = 64;
	int r = 0;
	int q = 0;
	int x = 0, x1 = 0, x2 = 1;
	int y = 0, y1 = 1, y2 = 0;

	if (b == 0)
	{
		return b;
	}
	while (b > 0)
	{
		q = (a / b);
		r = a - q * b;
		x = x2 - q * x1;
		y = y2 - q * y1;
		a = b;
		b = r;
		x2 = x1;
		x1 = x;
		y2 = y1;
		y1 = y;
	}
	std::cout << a << " " << x2 << " " << y2;
}