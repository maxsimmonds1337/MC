#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "binary_1_counter.h"

void get_users_number(int32_t* user_input) {
	while(scanf("%d", user_input) != 1) {
	printf("wrong!\nEnter a number: ");
	while (getchar() != '\n');
	}
	return;
}

uint8_t get_bin_number_of_one_count(int32_t number) {
	uint8_t ones_counter = 0;
	int32_t tmp_user_number = abs(number);	// removes the 2s compliment digits, so that 5 and -5 gives a result of 2
	while(tmp_user_number) {
		if(tmp_user_number & 1) {
			ones_counter++;
		}
		tmp_user_number = tmp_user_number >> 1;
	}
	return ones_counter;
}
