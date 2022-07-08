//#define _CRT_SECURE_NO_WARNINGS
////关机程序
////只要运行起来，电脑就在 1 分钟后关机，如果输入指定动作，则取消关机
////shutdown -s -t 60    win+r里cmd管理员窗口输入；60s后关机
////shutdown -a          win+r里cmd管理员窗口输入；取消自动关机
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，您的电脑将在60秒后关机\n\n请输入'爸爸好'取消关机\n\n");
//		scanf("%s", input);
//		if (strcmp(input, "爸爸好") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	//system("pause");
//	return 0;
//}