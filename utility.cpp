// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions
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

