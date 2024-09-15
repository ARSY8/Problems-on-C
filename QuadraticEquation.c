#include <stdio.h>
#include <math.h>
#define a senior_coefficient
#define b middle_coefficient
#define c free_member

int main(void) {
	float senior_coefficient, middle_coefficient, free_member;
	printf("Введите старший коэффициент:\n");
	if (scanf_s("%f", &senior_coefficient) != 1) {
		printf("Введите пожалуйста число!");
		return 1;
	}
	printf("Введите средний коэффициент:\n");
	if (scanf_s("%f", &middle_coefficient) != 1) {
		printf("Введите пожалуйста число!");
		return 1;
	}
	printf("Введите свободный член:\n");
	if (scanf_s("%f", &free_member) != 1) {
		printf("Введите пожалуйста число!");
		return 1;
	}

	float discriminant = (b * b) - (4 * a * c);



	if (discriminant > 0){
		float root1 = (-b + sqrt(discriminant)) / (2 * a);
		float root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("Действительные корни уравнения:\n");
		printf("Первый корень: %f\n", root1);
		printf("Второй корень: %f\n", root2);
		return 0;
	} else if (discriminant == 0) {
		float root = -b / (2 * a);
		printf("Действительный корень уравнения: %f\n", root);
		return 0;
	} else {
		float real_part = -b / (2 * a);
		float imaginary_part = sqrt(fabs(discriminant)) / (2 * a);
		printf("Комлексные корни уравнения:\n");
		printf("Первый корень: %f - %fi\n", real_part, imaginary_part);
		printf("Второй корень: %f + %fi\n", real_part, imaginary_part);
		return 0;
	}
	


}
