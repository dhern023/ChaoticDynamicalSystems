#pragma once

#include <iostream>
#include <cmath>

double nth_year_amount(double initial_amount, double rate, int year)
{
	return initial_amount * std::pow((1 + rate),year);
}

//really recommend your econological factor be between 0 and 4 (right inclusive).
double logistic_equation(double init_pop_percentage, double ecological_factor, int num_iterations)
{
	double pop_percentage = ecological_factor * init_pop_percentage * (1 - init_pop_percentage);
	for (int i = 0; i < num_iterations-1; i++)
	{
		pop_percentage = ecological_factor * pop_percentage * (1 - pop_percentage);
	}
	return pop_percentage;
}

double approx_sqrt_n(int n, int num_iterations)
{
	double best_guess = (double)(rand() % n);
	for (int i = 0; i < num_iterations; i++)
	{
		best_guess = 0.5 * (best_guess + (double)n / best_guess);
	}
	return best_guess;
}