//#define _CRT_SECURE_NO_WARNINGS
//
//#include"三子棋game.h"
//
//void menu()
//{
//	printf("**********************\n");
//	printf("*****   1.play   *****\n");
//	printf("*****   0.exit   *****\n");
//	printf("**********************\n");
//}
//
//void initial_board(char board[ROW][COL], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
//void display_board(char board[ROW][COL], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//			printf("\n");
//		}
//	}
//}
//
//void player_move(char board[ROW][COL], int row, int col)
//{
//	printf("玩家走\n");
//	int x, y;
//	while (1)
//	{
//		printf("请输入棋盘坐标：");
//		scanf("%d %d", &x, &y);
//		if (x > 0 && x <= row && y>0 && y <= col)//判断棋盘上是否有这个坐标
//		{
//			if (board[x - 1][y - 1] == ' ')//判断坐标是否被占用
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//				printf("坐标被占用，请重新输入\n");
//		}
//		else
//			printf("坐标错误，请重新输入\n");
//	}
//}
//
//void computer_move(char board[ROW][COL], int row, int col)
//{
//	printf("电脑走\n");
//	while (1)
//	{
//		int x = rand() % row;
//		int y = rand() % col;
//		if (board[x][y] == ' ')//判断坐标是否被占用
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
//
//int full_board(char board[ROW][COL], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//				return 0;//棋盘未满
//		}
//	}
//	return 1;//棋盘满
//}
//
//char who_win(char board[ROW][COL], int row, int col)
//{
//	int i;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//判断三行
//			return board[i][1];
//		if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')//判断三列
//			return board[1][i];
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//判断主对角线
//		return board[1][1];
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//判断副对角线
//		return board[1][1];
//	int ret = full_board(board, ROW, COL);//获取棋盘是否填满
//	if (ret == 1)
//		return 'Q';
//	return 'C';
//}
//
//void game()
//{
//	char board[ROW][COL];
//	initial_board(board, ROW, COL);//初始化棋盘
//	display_board(board, ROW, COL);//打印棋盘的格子
//	char ret = 0;//接收游戏状态
//	while (1)
//	{
//		player_move(board, ROW, COL);//玩家下棋
//		display_board(board, ROW, COL);
//		ret = who_win(board, ROW, COL);//判断是否取得胜利
//		if (ret != 'C')
//			break;
//		computer_move(board, ROW, COL);//电脑下棋
//		display_board(board, ROW, COL);
//		ret = who_win(board, ROW, COL);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == '*')
//		printf("YOU ARE THE CHANPION!!!\n");
//	else if(ret == '#')
//		printf("COMPUTER IS THE CHANPION!!!\n");
//	else
//		printf("THE GAME ENDED IN A DRAW\n");
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