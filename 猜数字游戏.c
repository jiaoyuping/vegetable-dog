//#define _CRT_SECURE_NO_WARNINGS
////��������Ϸ
////1���Զ�����һ��1-100֮��������
////2��������
////  a���¶��ˣ���ϲ�㣬̫���ˣ�
////  b���´��ˣ�����߲´��˻���С�ˣ������£�ֱ���¶�
////3����Ϸһ��һֱ�棬�����˳���Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("********  1.play  ********\n");
//	printf("********  0.exit  ********\n");
//	printf("**************************\n");
//}
//void game()
//{    //��������Ϸ����
//	int ret = rand() %100 + 1; //rand��������0-32767֮�����
//	//printf("%d\n", ret);
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ�㣬̫���ˣ�\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//��ʱ��ı仯����ʾ������ı仯
//	do {
//		menu(); //��ӡ�˵�
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
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}