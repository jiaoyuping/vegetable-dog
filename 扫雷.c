//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////�����Ķ���
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
//			printf("%c ", board[i][j]);   //��������Ϊ������״̬
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
//{                          //��ȡ��Χ������Ŀ
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
//		printf("������Ҫ�ų������꣺");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= cow&&y >= 1 && y <= col)
//		{
//			if (mine[x][y] == '1')      //'0'- Ϊ����     '1' - Ϊ��
//			{
//				printf("GAME OVER!!!\n");
//				display_board(mine, COW, COL);
//				break;
//			}
//			else
//			{
//				int count = around_mine(mine, x, y);
//				show[x][y] = count + '0';    //���ø�����Χ��������չʾ����ʾ
//				display_board(show, COW, COL);
//				win++;
//			}
//		}
//		else
//			printf("�������������������\n");
//	}
//	if (win == cow*col - SET_MINE_COUNT)   //ʤ������
//		printf("YOU ARE THE CHANPION\n");
//}
//
//void game()
//{
//	char mine[COWS][COLS];  //�������ײ�
//	char show[COWS][COLS];  //����չʾ��
//	initial_board(mine, COWS, COLS, '0');   //�����ײ�ȫ��Ϊ����('0')״̬
//	initial_board(show, COWS, COLS, '*');   //��չʾ����'*'��ʾ
//	display_board(show, COW, COL);   //��ӡչʾ��
//	set_mine(mine, COW, COL);     //���õ���
//	//display_board(mine, COW, COL);
//	find_mine(mine, show, COW, COL);   //�ҵ���
//
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