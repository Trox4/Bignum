#include"BignumHeader.h"
#include<iostream>

int main()
{
	Bignum num1(1, 10);
	std::cout << num1.getBase() << "     " << num1.getExp() << std::endl;

	return 0;
}