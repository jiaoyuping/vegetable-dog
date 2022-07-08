//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////参数的定义
//#define SET_MINE_COUNT 10
//#define COW 9
//#define COL 9
//#define COWS COW+2
//#define COLS COL+2
//
//void menu()
//{
//	printf("**************************\n");
//	printf("********  1.play  ********\n");
//	printf("********  0.exit  ********\n");
//	printf("**************************\n");
//}
//
//void initial_board(char board[COWS][COLS], int cows, int cols, char set)
//{
//	int i, j;
//	for (i = 0; i < cows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
//
//void display_board(char board[COWS][COLS], int cow, int col)
//{
//	int i, j;
//	printf("-------------------\n");
//	for (i = 0; i <= cow; i++)
//		printf("%d ", i);
//	printf("\n");
//	for (i = 1; i <= cow; i++)
//	{
//		printf("%d ", i);
//		for (j = 1; j <= col; j++)
//			printf("%c ", board[i][j]);   //将区域设为可输入状态
//		printf("\n");
//	}
//	printf("-------------------\n");
//}
//
//void set_mine(char mine[COWS][COLS], int cow, int col)
//{
//	int count = SET_MINE_COUNT;
//	while (count > 0)
//	{
//		int x = rand() % cow + 1;
//		int y = rand() % col + 1;
//		if (mine[x][y] == '0')
//		{
//			mine[x][y] = '1';
//			count--;
//		}
//	}
//}
//
//int around_mine(char mine[COWS][COLS], int x, int y)
//{                          //获取周围地雷数目
//	int i, j;
//	int count = 0;
//	for (i = -1; i <= 1; i++)
//	{
//		for (j = -1; j <= 1; j++)
//		{
//			if (mine[x + i][y + j] == '1')
//				count++;
//		}
//	}
//	return count;
//}
//
//void find_mine(char mine[COWS][COLS], char show[COWS][COLS], int cow, int col)
//{
//	int x, y;
//	int win = 0;
//	while (win < cow*col - SET_MINE_COUNT)
//	{
//		printf("请输入要排除的坐标：");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= cow&&y >= 1 && y <= col)
//		{
//			if (mine[x][y] == '1')      //'0'- 为非雷     '1' - 为雷
//			{
//				printf("GAME OVER!!!\n");
//				display_board(mine, COW, COL);
//				break;
//			}
//			else
//			{
//				int count = around_mine(mine, x, y);
//				show[x][y] = count + '0';    //将该格子周围地雷数在展示层显示
//				display_board(show, COW, COL);
//				win++;
//			}
//		}
//		else
//			printf("坐标输入错误，重新输入\n");
//	}
//	if (win == cow*col - SET_MINE_COUNT)   //胜利条件
//		printf("YOU ARE THE CHANPION\n");
//}
//
//void game()
//{
//	char mine[COWS][COLS];  //创建地雷层
//	char show[COWS][COLS];  //创建展示层
//	initial_board(mine, COWS, COLS, '0');   //将地雷层全设为无雷('0')状态
//	initial_board(show, COWS, COLS, '*');   //将展示层用'*'表示
//	display_board(show, COW, COL);   //打印展示层
//	set_mine(mine, COW, COL);     //放置地雷
//	//display_board(mine, COW, COL);
//	find_mine(mine, show, COW, COL);   //找地雷
//
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do {
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}