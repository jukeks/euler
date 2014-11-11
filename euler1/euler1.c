#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

#define LOOP_END 1000U

uint64_t sum_of_numbers_divisible_by_three_or_five_under(uint32_t under) {
	uint64_t sum = 0;

	for (uint32_t i = 0; i < under; ++i) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			sum += i;
		}
	}

	return sum;
}

int main(void) {
	uint64_t sum = sum_of_numbers_divisible_by_three_or_five_under(1000);

	printf("Sum of numbers divisible by 3 or 5 under 1000: %"PRIu64"\n", sum);
}
