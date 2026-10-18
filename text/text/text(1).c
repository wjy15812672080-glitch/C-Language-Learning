#include<stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int mutiply(int num1, int num2);
int divide(int num1, int num2);


int main()
{	
	int(*arr[4])(int, int) = { add,subtract,mutiply,divide };
	printf("请输入两个整数进行计算:");
	int num1, num2;
	scanf_s("%d %d",&num1,&num2);


	int choose;
	printf("请输入一个数字表示要进行的计算:");
	printf("1.加法，2.减法，3.乘法，4.除法\n");
	scanf_s("%d",&choose);
	int res = (arr[choose - 1])(num1,num2);
	printf("%d",res);
	return 0;
}

int add(int num1, int num2)
{
	return num1 + num2;
}
int subtract(int num1, int num2)
{
	return num1 - num2;
}
int mutiply(int num1, int num2)
{
	return num1 * num2;
}
int divide(int num1, int num2)
{
	return num1 / num2;
}