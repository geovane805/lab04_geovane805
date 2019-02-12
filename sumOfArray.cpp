#include "arrayFuncs.h"

/* sumOfArray: 
 * Parameters: a[]: an integer array
 * 	       size: "size" 
 * Post:
 * An integer array is passed to the function, where all the
 * elements are summed up to form the variable "total"
*/

int sumOfArray(int a[], int size) 
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += a[i];
	}
	return total;
}
