#include "Point.hpp"

#include <iostream>

bool bsp(const Point a, const Point b, const Point c, const Point point);

/*
1. false
2. true
3. false
4. true false false false
*/

int main(void)
{
	{
		Point a(0.0f, 0.0f);
		Point b(0.0f, 0.0f);
		Point c(0.0f, 0.0f);
		Point point(0.0f, 0.0f);
		std::cout << "TEST 1 result: " << (bsp(a, b, c, point) ? "true" : "false") << std::endl;
	}
	{
		Point a(Fixed(1), Fixed());
		Point b(Fixed(-1), Fixed());
		Point c(Fixed(), Fixed(1));
		Point point(Fixed(0.4f), Fixed(0.4f));
		std::cout << "TEST 2 result: " << (bsp(a, b, c, point) ? "true" : "false") << std::endl;
	}
	{
		Point a(Fixed(1), Fixed());
		Point b(Fixed(-1), Fixed());
		Point c(Fixed(), Fixed(1));
		Point point(Fixed(0.5f), Fixed(0.5f));
		std::cout << "TEST 3 result: " << (bsp(a, b, c, point) ? "true" : "false") << std::endl;
	}
	{
		Point a(Fixed(1), Fixed());
		Point b(Fixed(-1), Fixed());
		Point c(Fixed(), Fixed(1));
		Point point(Fixed(), Fixed(0.5f));
		std::cout << "TEST 4 result: ";
		std::cout << (bsp(a, b, c, point) ? "true" : "false") << " ";
		std::cout << (bsp(a, b, c, a) ? "true" : "false") << " ";
		std::cout << (bsp(a, b, c, b) ? "true" : "false") << " ";
		std::cout << (bsp(a, b, c, c) ? "true" : "false") << std::endl;
	}
}