#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *multiply_large_numbers(const char *num1_str, const char *num2_str) {
	int len1 = strlen(num1_str);
	int len2 = strlen(num2_str);

	char *result_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result_str == NULL) {
		return NULL;
	}

	for (int i = 0; i < len1 + len2; i++) {
		result_str[i] = '0';
	}
	result_str[len1 + len2] = '\0';

	for (int i = len1 - 1; i >= 0; i--) {
		int carry = 0;
		for (int j = len2 - 1; j >= 0; j--) {
			int product = (num1_str[i] - '0') * (num2_str[j] - '0') + (result_str[i + j + 1] - '0') + carry;
			carry = product / 10;
			result_str[i + j + 1] = (product % 10) + '0';
		}
		result_str[i] += carry;
	}

	int i = 0;
	while (result_str[i] == '0' && result_str[i + 1] != '\0') {
		i++;
	}

	int shift = 0;
	while (result_str[i] != '\0') {
		result_str[shift] = result_str[i];
		i++;
		shift++;
	}
	result_str[shift] = '\0';

	return result_str;
}

int main(int argc, char *argv[]) 
{
    char *error = "Error";
	if (argc != 3) 
	{
	while (*error != '\0')
	{
	_putchar(*error);
	error++;
	}
	_putchar('\n');
	exit(98);
	}

	char *num1_str = argv[1];
	char *num2_str = argv[2];

	for (int i = 0; num1_str[i] != '\0'; i++) {
		if (!isdigit(num1_str[i])) {
			putchar('E');
			putchar('r');
			putchar('r');
			putchar('o');
			putchar('r');
			putchar('\n');
			return 98;
		}
	}

	for (int i = 0; num2_str[i] != '\0'; i++) {
		if (!isdigit(num2_str[i])) {
			putchar('E');
			putchar('r');
			putchar('r');
			putchar('o');
			putchar('r');
			putchar('\n');
			return 98;
		}
	}

	char *result_str = multiply_large_numbers(num1_str, num2_str);

	if (result_str == NULL) {
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar(':');
		putchar(' ');
		putchar('M');
		putchar('e');
		putchar('m');
		putchar('o');
		putchar('r');
		putchar('y');
		putchar(' ');
		putchar('a');
		putchar('l');
		putchar('l');
		putchar('o');
		putchar('c');
		putchar('a');
		putchar('t');
		putchar('i');
		putchar('o');
		putchar('n');
		putchar(' ');
		putchar('f');
		putchar('a');
		putchar('i');
		putchar('l');
		putchar('e');
		putchar('d');
		putchar('\n');
		return 1;
	}

	int i = 0;
	while (result_str[i] != '\0') {
		putchar(result_str[i]);
		i++;
	}
	putchar('\n');

	free(result_str);

	return 0;
}
