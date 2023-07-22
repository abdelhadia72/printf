#include <stdio.h>
#include "main.h"

int main() {

	int len;
	int len2;
	len = _printf("fake :[%s]\n", "good");
	len2 = _printf("real :[%s]\n", "good");

	printf("fake len :[%d]\n", len);
	printf("real len :[%d]\n", len2);
	return 0;
}