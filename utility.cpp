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
  return false;  // REPLACE THIS STUB WITH REAL CODE
}

bool isEven(int x) 
{ 
  if (x%2 == 0)
  {
	return true;
  }
  return false;  // REPLACE THIS STUB WITH REAL CODE
}

bool isPrime(int x) 
{ 
  if (x == 0 || x == 1)
  {
	return false;
  }
  else if (x == 2 || x == 3 || x == 5 || x == 7 || x == 11)
  {
	return true;
  }
 	double arr[4] = {3.0, 5.0, 7.0, 11.0};
  	int size = 4;
  	int value = 0;
  	double result, decimal = 0;
  	for (int i = 0; i < size; i++)
  	{
		result = x / arr[i];
		value = result;
		decimal = abs(result - value);
		if (decimal == 0)
			return false;
  	}
  return true;
}
