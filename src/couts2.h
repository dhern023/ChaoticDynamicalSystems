#pragma once
#include "examples2.h"
#include <vector>


std::vector<std::string> chapter2_prompts = {
	"Investments Example",
	"Logistic Equation Example",
	"Sqrt approximation"
};

void chapter_two_couts()
{
	std::cout << chapter2_prompts[0] << std::endl;
	std::cout << nth_year_amount(1000, 0.1, 10) << std::endl;
	std::cout << nth_year_amount(1000, 0.1, 50) << std::endl;

	std::cout << chapter2_prompts[1] << std::endl;
	std::cout << logistic_equation(0.9, 2, 2020) << std::endl;

	std::cout << chapter2_prompts[2] << std::endl;
	std::cout << approx_sqrt_n(5, 10) << std::endl;
}