#include <stdio.h>

double change(int a);

int main(void)
{
	double inch;
	printf("인치를 입력하세요: ");
	scanf_s("%lf", &inch);
	printf("%f인치는 %.2fcm입니다.\n", inch, change(inch));

	return 0;
}

double change(int a)
{
	double cm;
	cm = (a * 2.54);
	return (cm);
}