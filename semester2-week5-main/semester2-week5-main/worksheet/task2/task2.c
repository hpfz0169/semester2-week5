/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:
 * ID: 
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	int i, value, length;
	
	printf("Enter a hexadecimal:");

	// if input contains invalid hex digit

	scanf("%8s", hex);
	length = strlen(hex);

	// printf("Error: Invalid Hexadecimal\n");

	for (i=0; i < length; i++) {
		if (hex[i] >= '0' && hex[i] <= '9') {
			value = hex[i] - '0';
		} else if (hex[i] >= 'A' && hex[i] <= 'F') {
			value = hex[i] - 'A' + 10;
		} else if (hex[i] >= 'a' && hex[i] <= 'f') {
			value = hex[i] - 'a' + 10;
		} else {
			printf("Error: Invalid Hexadecimal\n");
			return 0;
		}

		decimal = decimal * 16 + value;
	}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}