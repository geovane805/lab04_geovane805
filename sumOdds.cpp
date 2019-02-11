#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) 
{
	int total = 0; // sum of odds
	for (int i = 0; i < size; i++)
	{
		if (a[i]%2 != 0)
		{
			total += a[i];
		}
	}
	return total;
}

