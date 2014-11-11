#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

#define MAX_FIB_NUM (4U * 1000U * 1000U)

typedef struct {
	uint32_t current, previous;
} fibonacci_history_t;

/*
	Calculates next value in Fibonacci series and updates parameters.
	Behaviour when passing NULL to this function is undefined.
*/
uint32_t next_fibonacci_number(fibonacci_history_t *history) {
	uint32_t next = history->current + history->previous;

	// updating history
	history->previous = history->current;
	history->current = next;

	return next;
}

uint64_t sum_of_even_fibonacci_numbers_under(uint64_t under) {
	// In the assignment, series starts with 1, 2
	fibonacci_history_t history = {1, 1};
	
	uint64_t sum = 0;
	for (uint32_t fn = 1; fn < under; fn = next_fibonacci_number(&history)) {
		if (fn % 2 == 0) {
			sum += fn;
		}
	}

	return sum;	
}

int main(void) {
	uint64_t sum = sum_of_even_fibonacci_numbers_under(MAX_FIB_NUM);
	printf("Sum of Fibonacci numbers divisible by two under 4M: %"PRIu64"\n", sum);
}
