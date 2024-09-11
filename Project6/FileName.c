#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

#include <stdio.h>
void task2();
void task1();

int main()
{

	setlocale(LC_ALL, "RUS");
	task2();
	
	
}
void task2()
{
	int gr;
	double s;
	
	printf("Ввести значение gr\n ");
	scanf("%d", &gr);
	s = gr * M_PI / 180;
	printf("Синус равен %f",sin(s));
	printf("\nЗначение в радианах= %lg",s);




}

void task1()
{
	int x = 1, y = 3, Res1, Res2, Res3, Res4, Res5, Result;
	Res1 = 0.5 * y;
	Res2 = pow(x, Res1);
	Res3 = sin(Res2);
	Res4 = y + 8e-4;
	Res5 = pow(Res4, 1 / 5.f);
	Result = Res3 + Res5;
	Result = sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f);
	printf("ответ: %.3f", sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f));
}