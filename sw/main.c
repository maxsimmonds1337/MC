#include "binary_1_counter.h"
#include <stdio.h>


int32_t user_number;

int main(void) {
	printf("Enter a number: ");
	get_users_number(&user_number);

	printf("your number was %d\n", user_number);
	uint8_t number_of_ones = get_bin_number_of_one_count(user_number);
	printf("there are %d 1's in %d!\n", number_of_ones, user_number);
    
    return 0;
}