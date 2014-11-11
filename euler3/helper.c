#include "helper.h"


/*
	This algorithm is inefficient.
*/
int is_prime(uint64_t number) {
	for (uint64_t i = 2; i < number / 2; ++i) {
		if (number % i == 0) {
			return 0;
		}
	}

	return 1;
}

int is_divisible(uint64_t number, uint64_t divisor) {
	return !(number % divisor);
}
