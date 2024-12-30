#include "binary_1_counter.h"
#include <assert.h>
#include <stdio.h>

int main(void) {
    // Test case 1: Input 5 -> Expected: 2
    assert(get_bin_number_of_one_count(5) == 2);
    printf("Test case 1 passed: Input: 5\n");

    // Test case 2: Input -5 -> Expected: 2
    assert(get_bin_number_of_one_count(-5) == 2);
    printf("Test case 2 passed: Input: -5\n");

    // Test case 3: Input 0 -> Expected: 0
    assert(get_bin_number_of_one_count(0) == 0);
    printf("Test case 3 passed: Input: 0\n");

    // Test case 4: Input 255 (binary: 11111111) -> Expected: 8
    assert(get_bin_number_of_one_count(255) == 8);
    printf("Test case 4 passed: Input: 255\n");

    printf("All tests passed successfully!\n");
    return 0;
}
