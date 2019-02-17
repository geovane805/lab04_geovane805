// utility.cpp
#include <cstdlib>
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
	if (x <= 0) // if negative integer, then it is not a prime
	{
		return false;
	}
	if (x == 2 || x == 3) //the first prime numbers
	{
		return true;
	}
	if ( x==1 || (x > 3 && x%2==0) ) //"1" and all even numbers are not prime numbers
	{
		return false;
	}
	for (int divisor = 3; divisor < x / 2; divisor++)
	{
		if (x%divisor == 0) //if a "0" is found, then it isn't prime
		{
			return false;
			break;
		}
		else
		{
			continue;
		}
	}
	return true;//if a "0" is not found, then it is a prime
}
