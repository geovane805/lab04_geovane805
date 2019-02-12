// utility.cpp
#include <cmath>
bool isOdd(int x) 
{ 
  if (x%2 != 0) 
  {
  	return true;
  }
  return false;  
}

bool isEven(int x) 
{ 
  if (x%2 == 0)
  {
	return true;
  }
  return false; 
}

bool isPrime(int x) 
{ 
// Source: Pg. 189-190: Halterman: Fundementals of C++ 
	if (x <= 1)
	{
		return false;
	}
	else
	{
		bool result = true;
		double r = x, root = sqrt(r);
		for (int trial_factor = 2; result && trial_factor <= root; 
				trial_factor++)
		{
			result = (x % trial_factor != 0);
		}
		return result;
	}
}

