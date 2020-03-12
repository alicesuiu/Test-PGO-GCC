#include <stdio.h>
#include "a.h"
#include "b.h"

int main() {
	int i;

	for (i = 4; i < 10; i++)
		if (i > 5)
			printf("Grater\n");
		else
			printf("Lower\n");
	printf("Sum: %d\n", sum(5, 10));
	printf("Dif: %d\n", dif(15, 5));
	return 0;
}
