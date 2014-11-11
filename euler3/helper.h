#ifndef PRIME_H
#define PRIME_H

#include <stdint.h>

/*
	Tests if a number is prime.
	Returns 1 if prime, 0 if not.
*/
int is_prime(uint64_t number);


/*
	Tests if a number is divisible by divisor.
	Returns 1 if it is, 0 if not.
*/
int is_divisible(uint64_t number, uint64_t divisor);

#endif
