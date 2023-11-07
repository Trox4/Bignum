#include"BignumHeader.h"
#include<cmath>
#include<string>

void Bignum::errCorrection()
{
	std::string signal = "+";
	if (base == 0) { base = 0; exp = 0; return void(); }
	if (base < 0) { signal = "-"; }
	if (signal == "-") { base *= -1; }

	std::string signal2 = "+";

	if (exp < 0) { signal2 = "-"; exp *= -1; }

	if (std::fmod(exp, 1) > 0 && signal2 == "-")
	{
		base *= std::pow(10, 1 - std::fmod(exp, 1));
		exp = std::floor(exp) + 1;
	}
	else if (std::fmod(exp, 1) > 0 && signal2 == "+")
	{
		base *= std::pow(10, std::fmod(exp, 1));
		exp = std::floor(exp);
	}
	if (signal2 == "-") { exp *= -1; }
	double DgAmo = std::log10(base);
	DgAmo = std::floor(DgAmo);
	base /= std::pow(10, DgAmo);
	exp += DgAmo;
	exp = std::floor(exp);
	if (signal == "-") { base *= -1; }
}