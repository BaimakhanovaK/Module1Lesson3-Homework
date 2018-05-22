#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("Введите номер задания n: ");
	scanf("%d", &n);
	
	if (n == 1) {
		// 1.	Известно, что X кг конфет 
		// стоит A рублей. Определить, сколько стоит 1 кг 
		// и Y кг этих же конфет.

		int X = 0, A = 0, Y = 0, k = 0, S = 0;
		printf("Введите массу в кг: ");
		scanf("%d", &X);

		printf("Введите стоимость в рублях: ");
		scanf("%d", &A);
		
		k = A / X;
		printf("Стоимость 1 кг = %d\n", k);

		printf("Введите массу в кг: ");
		scanf("%d", &Y);

		S = k * Y;
		
		printf("Стоимость конфет = %d\n", S);
	}
	else if (n == 2) {
		// 2.	Решить линейное уравнение A·x + B = 0,
		// заданное своими коэффициентами A и B
		// (коэффициент A не равен 0).
		float A = 0, B = 0, x = 0
		printf("Введите значение A ");
		scanf 
	}


}