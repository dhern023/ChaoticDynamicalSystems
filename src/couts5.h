#pragma once
#include "examples5.h"
#include <vector>
#include <cmath>

double orbit_seed = 0.2;

std::vector<double (*)()> functions = {
	[](double x) { return std::pow(x, 2) + 0.25; },
	[](double x) { return std::pow(x, 2); },
	[](double x) { return std::pow(x, 2) - 0.24; },
	[](double x) { return std::pow(x, 2) - 0.75; },
	[](double x) { return 0.4 * x * (1 - x); },
	[](double x) { return x * (1 - x); },
	[](double x) { return 1.6 * x * (1 - x); },
	[](double x) { return 2 * x * (1 - x); },
	[](double x) { return 2.4 * x * (1 - x); },
	[](double x) { return 3.0 * x * (1 - x); },
	[](double x) { return 2.4 * x * (1 - x); },
	[](double x) { return 0.4 * std::sin(x); },
	[](double x) { return std::sin(x); }
};

void chapter_five_couts()
{
	for (size_t i = 0; i < functions.size(); i++)
	{
		std::cout << fixed_point_convergence(orbit_seed, i) << std::endl;
	}
}