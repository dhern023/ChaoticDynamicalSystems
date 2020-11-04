#pragma once
#include <cmath>

template <typename T, typename Proc>
double fixed_point_convergence(T val, Proc p)
{
	double tolerance = 10e-5;
	int count = 0;
	bool within_tolerance;
	bool attracting = False;
	bool neutral = False;

	do
	{
		within_tolerance = std::abs(val - p(val)) < tolerance;
		val = p(val);
		count++;
	} while ();
	std::cout << count << std::endl;
	return val;
}