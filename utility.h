// utility.h

bool isOdd(int x);
//Pre: Takes in a value of x as an integer
//Post: Checks if the int x is odd by modolus. 1 is returned if odd, else return 0.
bool isEven(int x);
//Pre: Takes in a value of x as an integer
//Post: Checks if the int x is even by modolus. 1 is returned if even, else return 0.
bool isPrime(int x);
//Pre: Takes in a value of x as an integer.
//The function by default will check if x is any of the initial primes (1,2,3). It will also check for any non primes by looking for even numbers. Moreover, the value of x will continue to be divided by two until an even is found, else a prime will be the output.
//Post: 1 is returned if prime, 0 is returned if not prime.

