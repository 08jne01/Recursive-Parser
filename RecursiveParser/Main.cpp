#include "MathsParser.h"
#include <iostream>

int main()

{
	MathsParser parser;

	//parser.calculate<double>("(20.0 * 20.0) / 10.0 + 10.0");

	double num1 = pow(123.0 * 2123.0 - 23 / 2.0 * 123.0, 1);
	parser.setFunction("(4.9048-0.11768 /(0.0475-lam0^2)-0.027169 *lam0^2) ^ 0.5", {"lam0"});

	std::cout << parser.callFunction<double>({0.77}) << std::endl;

	//std::cout << parser.calculateExpression<double>("(123.0 * 1 - 23 / 2.0 * 123.0) ^ 2") << " " << num1 << std::endl;



	return 0;
}