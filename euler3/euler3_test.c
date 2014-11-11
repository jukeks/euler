#include <assert.h>
#include "helper.h"


void test_is_prime(void) {
	assert(is_prime(2));
	assert(is_prime(13));
	assert(is_prime(7));

	assert(!is_prime(10));
	assert(!is_prime(6));
}

void test_is_divisible(void) {
	assert(is_divisible(2, 1));
	assert(is_divisible(4, 2));
	assert(is_divisible(10, 5));
	
	assert(!is_divisible(3, 2));
	assert(!is_divisible(5, 3));
}

int main(void) {
	test_is_prime();
	test_is_divisible();
}
