#include <stdio.h>
#include <locale.h>

int main() {
	float bal, proc, plat;

	setlocale(LC_ALL, "ru");
	printf("¬ведите размер кредита, процентную ставку и сумму ежемес€чного платежа:\n");
	scanf("%f %f %f", &bal, &proc, &plat);

	printf("%d мес€цев", months(bal, proc, plat));
}