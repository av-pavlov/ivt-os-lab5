#include <stdio.h>
#include <locale.h>

int main() {
	float bal, proc, plat;

	setlocale(LC_ALL, "ru");
	printf("������� ������ �������, ���������� ������ � ����� ������������ �������:\n");
	scanf("%f %f %f", &bal, &proc, &plat);

	printf("%d �������", months(bal, proc, plat));
}