#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	/************************************
*  0:路
*  1:墙
*  3:目的地
*  4:箱子
*  7:箱子到达目的
*  5:人
*  8: 人站在目的上，也是显示人
*************************************/
	//画地图，任务定位，按键移动，结束判定
	int map[5][5] =
	{
		1,1,1,1,1,
		1,3,4,0,1,
		1,3,4,5,1,
		1,1,0,0,1,
		1,1,1,1,1
	};
	while (1)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				//■ ☆ □ ♀ ★
				switch (map[i][j])
				{
				case 1:
					printf("■");
					break;
				case 0:
					printf("  ");
					break;
				case 3:
					printf("☆");
					break;
				case 4:
					printf("★");
					break;
				case 5:
				case 8:
					printf("♀");
					break;
				case 7:
					printf("□");
					break;
				default:
					break;
				}
			}
			printf("\n");
		}
		int flag = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (map[i][j] == 4)
				{
					flag = 1;
				}
			}
		}
		if (flag == 0)
		{
			break;
		}

		int i = 0,j=0;
		for (i = 0; i < 5; i++)//局部申明不能遮蔽主申明
		{
			for (j = 0; j < 5; j++)
			{
				if (map[i][j] == 5 || map[i][j] == 8)
				{
					goto NEXT;
				}
			}
		}
		NEXT:;
		int userkey = 0;
		userkey = _getch();//错误一
		switch (userkey)
		{
		case 'w':
		case 'W':
		case 72:
			if (map[i - 1][j] == 0 || map[i-1][j] == 3)//错误二
			{
				map[i][j] -= 5;
				map[i - 1][j] += 5;
			}
			if (map[i - 1][j] == 4 || map[i - 1][j] == 7)
			{
				if (map[i - 2][j] == 3 || map[i - 2][j] == 0)
				{
					map[i][j] -= 5;
					map[i - 1][j] += 1;
					map[i - 2][j] += 4;
				}
			}
			break;
		case 's':
		case 'S':
		case 80:
			if (map[i + 1][j] == 0 || map[i+1][j] == 3)
			{
				map[i][j] -= 5;
				map[i + 1][j] += 5;
			}
			if (map[i + 1][j] == 4 || map[i + 1][j] == 7)
			{
				if (map[i + 2][j] == 3 || map[i + 2][j] == 0)
				{
					map[i][j] -= 5;
					map[i + 1][j] += 1;
					map[i + 2][j] += 4;
				}
			}
			break;
		case 'a':
		case 'A':
		case 75:
			if (map[i][j-1] == 0 || map[i][j-1] == 3)
			{
				map[i][j] -= 5;
				map[i][j-1] += 5;
			}
			if (map[i][j-1] == 4 || map[i][j-1] == 7)
			{
				if (map[i][j-2] == 3 || map[i][j-2] == 0)
				{
					map[i][j] -= 5;
					map[i][j-1] += 1;
					map[i][j-2] += 4;
				}
			}
			break;
		case 'd':
		case 'D':
		case 77:
			if (map[i][j + 1] == 0 || map[i][j + 1] == 3)
			{
				map[i][j] -= 5;
				map[i][j + 1] += 5;
			}
			if (map[i][j + 1] == 4 || map[i][j + 1] == 7)
			{
				if (map[i][j + 2] == 3 || map[i][j + 2] == 0)
				{
					map[i][j] -= 5;
					map[i][j + 1] += 1;
					map[i][j + 2] += 4;
				}
			}
			break;
		default:
			break;
		}

		system("cls");
	}
	printf("game over");
	return 0;
}