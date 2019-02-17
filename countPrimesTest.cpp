#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  assertEquals(5,
	       countPrimes(fiveThrees,5),
	       "countPrimes(fiveThrees,5)");
  
  int zeros[3]={0,0,0}; // initializes all elements to 0
  assertEquals(0,
	       countPrimes(zeros,3), 
	       "countPrimes(zeros,3)" );  

  
  int fiveInts[5]={2,7, 11,42, 52}; 
  assertEquals(3,
	       countPrimes(fiveInts,5), 
	       "countPrimes(fiveInts,5)" ); 

  int empty[] = {};
  assertEquals(0,
	       countPrimes(empty,0), 
	       "countPrimes(empty,0)" ); 

  int primes[] = {1,2,14,15,17,12,19,23,29};
  assertEquals(5,
	       countPrimes(primes,10), 
	       "countPrimes(primes,10)" ); 

  int meaning[] = {42};
  assertEquals(0,
	       countPrimes(meaning,1), 
	       "countPrimes(meaning,1)" ); 

  int mix[10]={ -5, 1, 3,7,15,17,19,21,23,31};
  assertEquals(6,
	       countPrimes(mix,10), 
	       "countPrimes(mix,10)" );

  return 0;
}
