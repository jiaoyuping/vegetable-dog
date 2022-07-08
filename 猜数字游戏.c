//#define _CRT_SECURE_NO_WARNINGS
////猜数字游戏
////1、自动产生一个1-100之间的随机数
////2、猜数字
////  a，猜对了：恭喜你，太棒了！
////  b，猜错了，会告诉猜大了还是小了，继续猜，直到猜对
////3、游戏一个一直玩，除非退出游戏
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
//{    //猜数字游戏主体
//	int ret = rand() %100 + 1; //rand函数生成0-32767之间的数
//	//printf("%d\n", ret);
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你，太棒了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//用时间的变化来表示随机数的变化
//	do {
//		menu(); //打印菜单
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
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}