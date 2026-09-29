#include<stdio.h>
#include<math.h>
int solution(double a, double b, double c, double* x1, double* x2)
{
	double d;
	double x;
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		printf("有两个根");
		*x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		*x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		return 2;
	}
	else if (d == 0)
	{
		printf("有一个根");
		x = *x1 = *x2 = (-b) / (2 * a);
		return 1;
	}
	else
		return 0;
}

int main()
{
	int s;
	double a, b, c;
	double x1, x2;
	printf("请输入二次方程的系数a,b,c\n");
	if (scanf_s("%lf %lf %lf", &a, &b, &c) != 3)
	{
		printf("输入无效，请输入有效数字");
		return 1;
	}
	if (a == 0)
	{
		printf("非二次方程");
		return 0;
	}
	s = solution(a, b, c, &x1, &x2);
	
	if (s == 2)
	{
		printf("该方程的根为：x1=%f\tx2=%f", x1, x2);
		return 0;
	}
	else if (s == 1)
	{
		printf("该方程的根为:x=%f", x1);
		return 0;
	}
	else
		printf("方程无根");
	return 0;
}