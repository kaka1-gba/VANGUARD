#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int r, int c , char set)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int r, int c)
{
	printf("------扫雷游戏------\n");
	int i = 0;
	for (i = 0; i <= r; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= r; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= c; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//随机找十个合法坐标布置雷
//1.在范围内
//2.没有布置过雷
//
void SetMine(char mine[ROWS][COLS], int r, int c)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % r + 1;
		//int x = rand() & r + 1;
		int y = rand() % c + 1;
		//int y = rand() & c + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x-1][y] + mine[x - 1][y - 1] + mine[x ][y - 1] +
		mine[x+1][y - 1] +mine[x+1][y] + mine[x+1][y + 1] +
		mine[x][y+1] + mine[x-1][y+1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//判断坐标的合法性
	while (win < r*c-EASY_COUNT)
	{
		printf("请输入要排查的坐标:");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, r, c);
				break;
			}
			else
			{
				if (show[x][y] == '*')
				{
					//统计这个坐标周围有几个雷
					int count = GetMineCount(mine, x, y);
					show[x][y] = count + '0';
					DisplayBoard(show, r, c);
					win++;
				}
				else
				{
					printf("该坐标，已经被排查过了\n");
				}
			}
		}

		else
		{
			printf("输入的坐标有误，重新输入\n");
		}
	}
	if (win == r * c - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, r, c);
	}
}