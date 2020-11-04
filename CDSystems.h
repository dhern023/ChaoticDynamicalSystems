// CDSystems.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>

//random functions I learned or wrote throughout the course of this project

void walk_the_index()
{
	std::vector<int> v = { 0,1,2 };

	for (int i = 0; i < 100; i++)
	{
		std::cout << v[0] << " " << v[1] << " " << v[2] << std::endl;
		v[0] = v[1];
		v[1] = v[2];
		v[2] = v[2] + 1;
	}
}

template <typename T>
void cout_anything(T anything)
{
	std::cout << anything << std::endl;
}