#include "arrayFuncs.h"
#include "utility.h"
#include <cstdlib>
#include <iostream>

/* Parameters: 
   a[] is an integer array of presumed "size"

   Post: this function scans the elements of the 
   array, and counts only the even values
*/

int countEvens(int a[], int size) 
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
  	if (isEven(a[i]))
	  {
	  	count++;
	  }
  }
  return count;
}
