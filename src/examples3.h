#pragma once
#include <cmath>

double sqrt_orbit_points(double seed, int num_iterations)
{
	double orbit = std::sqrt(seed);
	for (size_t i = 0; i < num_iterations-1; i++)
	{
		orbit = std::sqrt(orbit);
	}
	return orbit;
}

double sine_orbit_points(double seed, int num_iterations)
{
	double orbit = std::sin(seed);
	for (size_t i = 0; i < num_iterations - 1; i++)
	{
		orbit = std::sin(orbit);
	}
	return orbit;
}

double cosine_orbit_points(double seed, int num_iterations)
{
	double orbit = std::cos(seed);
	for (size_t i = 0; i < num_iterations - 1; i++)
	{
		orbit = std::cos(orbit);
	}
	return orbit;
}

int cosine_period_size(double seed)
{
	std::vector<double> results(2,seed);
	int prime_period = 0;
	do
	{
		results[0] = results[1];
		results[1] = std::cos(results[0]);
		prime_period++;
	} while (results[1] - seed > 10E-7);

	return prime_period;
}

int polynomial_period_size(double seed)
{
	std::vector<double> results(2, seed);
	int prime_period = 0;

	auto poly_lambda = [](double x) { return -1.5 * std::pow(x, 2) + 2.5 * x + 1; };

	do
	{
		results[0] = results[1];
		results[1] = poly_lambda(results[0]);
		prime_period++;
	} while (results[1] - seed > 10E-16);

	return prime_period;
}

void cosine_eventually_periodic(double seed)
{
	std::vector<double> results = { seed };

	for (int i = 0; i < 15; i++)
	{
		results.push_back(std::cos(results[i]));
		std::cout << results[i] << " ";
	}
	std::cout << std::endl;
}

void polynomial_eventually_periodic(double seed)
{
	auto poly_lambda = [](double x) { return std::pow(x, 2) - 1; };
	std::vector<double> results = { seed };

	for (int i = 0; i < 15; i++)
	{
		std::cout << results[i] << " ";
		results.push_back(poly_lambda(results[i]));
	}
	std::cout << std::endl;
}

void polynomial_sensitivity_to_initial_conditions(double seed)
{
	auto poly_lambda = [](double x) { return std::pow(x, 2) - 2; };
	std::vector<double> results = { seed };

	for (int i = 0; i < 20; i++)
	{
		results.push_back(poly_lambda(results[i]));
		std::cout << results[i] << " ";
	}
	std::cout << std::endl;
}

double doubling_function(double x)
{
	return std::fmod(2*x,1);
}

void doubling_function_orbit(double seed, int num_iterations)
{
	std::vector<double> results = { seed };
	for (size_t i = 0; i < num_iterations; i++)
	{
		results.push_back(doubling_function(results[i]));
		std::cout << results[i] << " ";
	}
	std::cout << std::endl;
}