#include <stdio.h>
#include <math.h>


int input_check(const char* prompt, float* value);

int main(void) {
	float a, b, c;

	if (input_check("Введите старший коэффициент:\n", &a)) {
		return 1;
	}
	if (input_check("Введите средний коэффициент:\n", &b)) {
		return 1;
	}
	if (input_check("Введите свободный член:\n", &c)) {
		return 1;
	}

	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf("У уравнения бесконечно много решений!\n");
				return 0;
			}
			else {
				printf("У уравнения нет решений!\n");
				return 1;
			}
		}
		else {
			float root = -(c / b);
			printf("Действительный корень уравнения: %f\n", root);
			return 0;
		}
	}

	float discriminant = (b * b) - (4 * a * c);

	if (discriminant > 0) {
		float root1 = (-b + sqrt(discriminant)) / (2 * a);
		float root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("Действительные корни уравнения:\n");
		printf("Первый корень: %f\n", root1);
		printf("Второй корень: %f\n", root2);
		return 0;
	}
	else if (discriminant == 0) {
		float root = -b / (2 * a);
		printf("Действительный корень уравнения: %f\n", root);
		return 0;
	}
	else {
		float real_part = -b / (2 * a);
		float imaginary_part = sqrt(fabs(discriminant)) / (2 * a);
		printf("Комлексные корни уравнения:\n");
		printf("Первый корень: %f - %fi\n", real_part, imaginary_part);
		printf("Второй корень: %f + %fi\n", real_part, imaginary_part);
		return 0;
	}
}

int input_check(const char* prompt, float* value) {
	printf("%s", prompt);

	char addition;
	if (scanf_s("%f%c", value, &addition, 1) != 2 || addition != '\n') {
		printf("Ошибка: введите одно корректное число.\n");
		return 1;
	}
	return 0;
}
