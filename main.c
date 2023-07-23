#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len_1 = 0, len_2 = 0;

	printf("----------------------\n");
	printf("----> UNSIGNED INTEGER CASES <----\n");
	printf("----------------------\n");
	len_1 = printf("Expected output:    %u\n", 53);
	len_2 = _printf("Current output:     %u\n", 53);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	len_1 = printf("Expected output:    %u\n", 0);
	len_2 = _printf("Current output:     %u\n", 0);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	len_1 = printf("Expected output:    %u\n", 123456);
	len_2 = _printf("Current output:     %u\n", 123456);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	len_1 = printf("Expected output:    %u\n", 999999999);
	len_2 = _printf("Current output:     %u\n", 999999999);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	len_1 = printf("Expected output:    %u\n", -123);
	len_2 = _printf("Current output:     %u\n", -123);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	
	return (0);

    _printf("%b\n", 98);
    return (0);

}