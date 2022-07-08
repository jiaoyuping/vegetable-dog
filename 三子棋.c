//#define _CRT_SECURE_NO_WARNINGS
//
//#include"������game.h"
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
//	printf("�����\n");
//	int x, y;
//	while (1)
//	{
//		printf("�������������꣺");
//		scanf("%d %d", &x, &y);
//		if (x > 0 && x <= row && y>0 && y <= col)//�ж��������Ƿ����������
//		{
//			if (board[x - 1][y - 1] == ' ')//�ж������Ƿ�ռ��
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//				printf("���걻ռ�ã�����������\n");
//		}
//		else
//			printf("�����������������\n");
//	}
//}
//
//void computer_move(char board[ROW][COL], int row, int col)
//{
//	printf("������\n");
//	while (1)
//	{
//		int x = rand() % row;
//		int y = rand() % col;
//		if (board[x][y] == ' ')//�ж������Ƿ�ռ��
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
//				return 0;//����δ��
//		}
//	}
//	return 1;//������
//}
//
//char who_win(char board[ROW][COL], int row, int col)
//{
//	int i;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//�ж�����
//			return board[i][1];
//		if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')//�ж�����
//			return board[1][i];
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//�ж����Խ���
//		return board[1][1];
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//�жϸ��Խ���
//		return board[1][1];
//	int ret = full_board(board, ROW, COL);//��ȡ�����Ƿ�����
//	if (ret == 1)
//		return 'Q';
//	return 'C';
//}
//
//void game()
//{
//	char board[ROW][COL];
//	initial_board(board, ROW, COL);//��ʼ������
//	display_board(board, ROW, COL);//��ӡ���̵ĸ���
//	char ret = 0;//������Ϸ״̬
//	while (1)
//	{
//		player_move(board, ROW, COL);//�������
//		display_board(board, ROW, COL);
//		ret = who_win(board, ROW, COL);//�ж��Ƿ�ȡ��ʤ��
//		if (ret != 'C')
//			break;
//		computer_move(board, ROW, COL);//��������
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������ѡ��\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}