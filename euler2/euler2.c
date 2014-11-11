#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

#define MAX_FIB_NUM (4U * 1000U * 1000U)

/*
	Calculates next value in Fibonacci series and updates parameters.
	Behaviour when passing NULL to this function is undefined.
*/
uint32_t next_fibonacci_number(uint32_t* current, uint32_t* previous) {
	uint32_t next = *current + *previous;

	// updating history
	*previous = *current;
	*current = next;

	return next;
}

uint64_t sum_of_fibonacci_numbers_divisible_by_two_under(uint64_t under) {
	// In the assignment, series starts with 1, 2
	uint32_t fn = 1;
	uint32_t f1 = 1;
	uint32_t f2 = 1;

	uint64_t sum = 0;
	
	for (; fn < under; fn = next_fibonacci_number(&f1, &f2)) {
		if (fn % 2 == 0) {
			sum += fn;
		}
	}

	return sum;	
}

int main(void) {
	uint64_t sum = sum_of_fibonacci_numbers_divisible_by_two_under(MAX_FIB_NUM);
	printf("Sum of Fibonacci numbers divisible by two under 4M: %"PRIu64"\n", sum);
}
