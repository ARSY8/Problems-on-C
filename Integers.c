#include <stdio.h>

int main(void) {
	int whole_number;
	printf("Введите положительное целое число:");
	if (scanf_s("%d", &whole_number) != 1 || whole_number <= 0){
		printf("Введено не то, что нужно было.");
			return 1;
	}

	int sum = 0;
	int multiplication = 1;
	while (whole_number > 0) {
		int digit = whole_number % 10;
		sum += digit;
		multiplication *= digit;
		whole_number /= 10;
	}

	printf("Сумма цифр числа: %d\n", sum);
	printf("Произведение цифр числа: %d", multiplication);
	return 0;
}