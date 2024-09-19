#include <stdio.h>
#include <math.h>

int main(void) {

	for (int i = 1; i <= 100; i++) {

		if (i % 5 == 0) {
			if (i % 3 == 0) {
				printf("FizzBuzz ");
			}
			else {
				printf("Buzz ");
			}
		}
		else if (i % 3 == 0) {
			printf("Fizz ");
		}
		else {
			printf("%d ", i);
		}
	}
	return 0;
}