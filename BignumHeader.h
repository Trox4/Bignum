#pragma once

#include<string>

class Bignum
{
private:
	double base;
	double exp;

	void errCorrection();
public:
	Bignum(double base, double exp) : base(base), exp(exp) {}
	double getBase() { return base; }
	double getExp() { return exp; }
	void setBase(double num) { this->base = num; }
	void setExp(double num) { this->exp = num; }

	static std::string Abb(double base, double exp) { return (std::to_string(base) + 'e' + std::to_string(exp)); }
	static std::string Abb(Bignum num) { return Abb(num.base, num.exp); }

};
