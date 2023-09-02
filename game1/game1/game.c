#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


//猜数字游戏，随机生成一个数字猜数字大小 

void menu()
{
	//创建一个菜单
	printf("******************\n");
	printf("***** 1:play *****\n");
	printf("***** 0:exit *****\n");
	printf("******************\n");
}
void game()
{
	//创建一个随机数
	
	int ret = (rand()%100)+1;//生成一个100内的随机数
	//printf("%d\n", ret);
	
	//猜数字
	int guass = 0;
	printf("开始猜数字吧：");
	

	while (1)
	{
		scanf("%d", &guass);
		if (guass > ret)
		{
			printf("猜大了\n");
		}
		else if (guass < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了,撒花\n");
			break;
		}
	}
}

int main()
{
	int put = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("请选择：");
		scanf("%d", &put);//输入一个数字
		switch (put)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("重新输入\n");
			break;

		}

	} while (put);




	return 0;
}
