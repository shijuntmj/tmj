#include <stdio.h>
#include<stdlib.h>
int main()
{
	char name[100][20] = {""};//错误一
	int score[100][3] = { 0 };
	int rowSum[100] = { 0 };
	int colsSum[3] = { 0 };
	int curSize = 0;
	while (1)
	{
		printf("-----------------------------\n"
			"1.退出\n"
			"2.录入\n"
			"3.浏览\n"
			"4.求行和\n"
			"5.求列和\n"
			"------------------------------\n");
		int userkey = 0;
		scanf("%d", &userkey);//错误二
		switch (userkey)
		{
		case 1:
			printf("成功退出系统\n");
			system("pause");
			exit(0);
			break;
		case 2:
			while (1)
			{
				printf("输入名字，语文，数学，英语\n");
				scanf("%s%d%d%d", name[curSize], &score[curSize][0], &score[curSize][1], &score[curSize][2]);
				curSize++;
				printf("是否继续");
				while (getchar() != '\n');
				userkey = getchar();
				if (userkey == 'n' || userkey == 'N')
				{
					break;
				}
			}
			break;
		case 3:
			printf("姓名\t语文\t数学\t英语\n");
			for (int i = 0; i < curSize; i++)
			{
				printf("%s\t%d\t%d\t%d\n", name[i], score[i][0], score[i][1], score[i][2]);
			}
			break;
		case 4:
			for (int i = 0; i < curSize; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					rowSum[i] += score[i][j];
				}
			}
			printf("姓名\t语文\t数学\t英语\t行和\n");
			for (int i = 0; i < curSize; i++)
			{
				printf("%s\t%d\t%d\t%d\t%d\n", name[i], score[i][0], score[i][1], score[i][2],rowSum[i]);
			}
			break;
		case 5:
			for (int j = 0; j < 3; j++)
			{
				for (int i = 0; i < curSize; i++)
				{
					colsSum[j] += score[i][j];
				}
			}
			printf("姓名\t语文\t数学\t英语\n");
			for (int i = 0; i < curSize; i++)
			{
				printf("%s\t%d\t%d\t%d\n", name[i], score[i][0], score[i][1], score[i][2]);
			}
			printf("列和\t");
			for (int i = 0; i < 3; i++)
			{
				printf("%d\t", colsSum[i]);
			}
			printf("\n");
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}