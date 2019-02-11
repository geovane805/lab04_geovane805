#include "arrayFuncs.h"

#include "tddFuncs.h"

int main() 
{
  int empty[] = {};
  // expect this function to result in message to cerr and exit(1);
  assertEquals(0, maxOfArray(empty,0),
		  "maxOfArray(empty,0)");
  assertEquals(1, maxOfArray(empty,1),
		  "maxOfArray(empty,1)");
  assertEquals(10, maxOfArray(empty,10),
	  	  "maxOfArray(empty,10)");
  assertEquals(15, maxOfArray(empty,15),
	  	  "maxOfArray(empty,15)");
  assertEquals(50, maxOfArray(empty,50),
	  	  "maxOfArray(empty,50)");
  assertEquals(100, maxOfArray(empty,100),
	  	  "maxOfArray(empty,100)");
  assertEquals(110, maxOfArray(empty,110),
	  	  "maxOfArray(empty,110)");
  return 0;
}
