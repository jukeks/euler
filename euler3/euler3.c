#include <stdio.h>
#include <inttypes.h>

#include "helper.h"


uint64_t largest_prime_factor_of(uint64_t number) {
	uint64_t largest_prime_factor = 1;

	for (uint64_t i = 1; i < number + 1; ++i) {
		if (!is_prime(i) || !is_divisible(number, i)) {
			continue;
		}

		if (i > largest_prime_factor) {
			largest_prime_factor = i;
		}

		// number changes, resetting counter
		number /= i;
		i = 1;
	}

	return largest_prime_factor;
}


int main(void) {
	uint64_t number = 600851475143UL;
	uint64_t factor = largest_prime_factor_of(number);

	printf("Largest prime factor of %"PRIu64": %"PRIu64"\n", number, factor);
}
