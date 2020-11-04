#pragma once
#include "examples3.h"
#include <vector>
#include <cmath>

std::vector<std::string> chapter3_prompts = {
	"Orbit calculations",
	"Prime periods",
	"Eventually periodic orbits",
	"Sensitivity to initial conditions",
	"Doubling function orbits at various points"
};

std::vector<double> doubling_function_inputs = {
	0.3, 0.7, 1.0 / 8, 1.0 / 16, 1.0 / 7, 1.0 / 14, 1.0 / 11, 3.0 / 22
};

void chapter_three_couts()
{
	std::cout << chapter3_prompts[0] << std::endl;
	std::cout << sqrt_orbit_points(256, 4) << std::endl;
	std::cout << sine_orbit_points(123, 301) << std::endl;
	std::cout << cosine_orbit_points(123, 52) << std::endl;

	std::cout << chapter3_prompts[1] << std::endl;
	std::cout << cosine_period_size(0.739085) << std::endl;
	std::cout << polynomial_period_size(0) << std::endl;

	std::cout << chapter3_prompts[2] << std::endl;
	cosine_eventually_periodic(0.739);
	polynomial_eventually_periodic(std::sqrt(2));

	std::cout << chapter3_prompts[3] << std::endl;
	polynomial_sensitivity_to_initial_conditions(0);
	polynomial_sensitivity_to_initial_conditions(0.1);
	polynomial_sensitivity_to_initial_conditions(0.01);
	polynomial_sensitivity_to_initial_conditions(0.001);

	std::cout << chapter3_prompts[4] << std::endl;
	for (size_t i = 0; i < doubling_function_inputs.size(); i++)
	{
		doubling_function_orbit(doubling_function_inputs[i], 12);
	}
}