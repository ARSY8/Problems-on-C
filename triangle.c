#include "stdio.h"
#include "stdbool.h"
#include "math.h"

#define sp semiperimeter

int main(void){
	float side1, side2, side3;
	printf("Введите длину первой стороны:\n");
	scanf_s("%f", &side1);
	printf("Введите длину второй стороны:\n");
	scanf_s("%f", &side2);
	printf("Введите длину третьей стороны:\n");
	scanf_s("%f", &side3);
	
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		printf("Введите положительное число!\n");
		return 1;
	}

	bool is_ok = false;
	if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
		is_ok = true;
	}
	else {
		printf("Треугольника с такими сторонами не существует!\n");
		return 1;
	}

	float semiperimeter = (side1 + side2 + side3) / 2;
	double square = sqrt(sp * (sp - side1) * (sp - side2) * (sp - side3));
	if (side1 == side2 || side2 == side3) {
		printf("Треугольник равносторонний.\n");
	} else if (side1 == side2 || side2 == side3 || side1 == side3) {
		printf("Треугольник равнобедренный.\n");
	} else {
		printf("Треугольник разносторонний.\n");
	}
	printf("Площадь треугольника: %f\n", square);
	printf("Периметр треугольника: %f\n", semiperimeter * 2);

	return 0;
}

