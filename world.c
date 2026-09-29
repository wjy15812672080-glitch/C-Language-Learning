#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
		int guesses[3];
		int choice;
		int result;
		int ch;
		int guess;
		int i;
		srand((unsigned int)time(NULL));
		do{
			int count = 0;
			int answer = rand() % 10 + 1;
		printf("1.开始游戏\n2.退出游戏\n3.游戏规则\n");
		result=scanf_s("%d", &choice);
		if (result != 1)
		{
			printf("菜单输入无效，请输入整数");
			return 0;
		}

		switch (choice)
		{
		case 1:printf("开始游戏\n");
			break;
		case 2:printf("已结束\n");
			return 0;
		case 3:printf("输入数字，猜大小\n");
			break;
		default:
			printf("无效输入");
			return 0;
		}

		while (count < 3)
		{
			printf("请输入一个数字：");
			result=scanf_s("%d", &guess);
			if (result != 1)
			{
				printf("输入失败，请输入整数\n");
				while ((ch = getchar()) != '\n' && ch != EOF)
				{

				}
				if (ch == EOF)
				{
					return 0;
				}
				continue;
			}
			if (guess < 1 || guess>10)
			{
				printf("请输入1到10之间的数字\n");
				continue;
			}
			guesses[count] = guess;
			count++;
			if (guess < answer)
			{
				printf("猜小了\n");
			}
			else if (guess == answer)
			{
				printf("猜对了\n");
				printf("再来一局\n");
				break;
			}
			else if (guess > answer)
			{
				printf("猜大了\n");
			}
			if (count == 3)
			{
				printf("错误次数过多\n");
				printf("再来一局\n");
				break;
			}
			
		}
		for (i = 0;i < count;i++)
		{
			printf("本局猜过的数据为：%d\n", guesses[i]);
		}
		printf("\n");
	} while (choice != 2);
	return 0;
 }
