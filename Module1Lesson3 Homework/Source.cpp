#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("������� ����� ������� n: ");
	scanf("%d", &n);
	
	if (n == 1) {
		// 1.	��������, ��� X �� ������ 
		// ����� A ������. ����������, ������� ����� 1 �� 
		// � Y �� ���� �� ������.

		int X = 0, A = 0, Y = 0, k = 0, S = 0;
		printf("������� ����� � ��: ");
		scanf("%d", &X);

		printf("������� ��������� � ������: ");
		scanf("%d", &A);
		
		k = A / X;
		printf("��������� 1 �� = %d\n", k);

		printf("������� ����� � ��: ");
		scanf("%d", &Y);

		S = k * Y;
		
		printf("��������� ������ = %d\n", S);
	}
	else if (n == 2) {
		// 2.	������ �������� ��������� A�x + B = 0,
		// �������� ������ �������������� A � B
		// (����������� A �� ����� 0).
		float A = 0, B = 0, x = 0
		printf("������� �������� A ");
		scanf 
	}


}