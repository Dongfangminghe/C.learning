#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


//��������Ϸ���������һ�����ֲ����ִ�С 

void menu()
{
	//����һ���˵�
	printf("******************\n");
	printf("***** 1:play *****\n");
	printf("***** 0:exit *****\n");
	printf("******************\n");
}
void game()
{
	//����һ�������
	
	int ret = (rand()%100)+1;//����һ��100�ڵ������
	//printf("%d\n", ret);
	
	//������
	int guass = 0;
	printf("��ʼ�����ְɣ�");
	

	while (1)
	{
		scanf("%d", &guass);
		if (guass > ret)
		{
			printf("�´���\n");
		}
		else if (guass < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���,����\n");
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
		menu();//��ӡ�˵�
		printf("��ѡ��");
		scanf("%d", &put);//����һ������
		switch (put)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������\n");
			break;

		}

	} while (put);




	return 0;
}
