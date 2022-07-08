//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>


//输出100 - 200之间的质数
//#include<math.h>
//int main()
//{
//	int i, j, a;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				a = 1;
//				break;
//			}
//			else
//				a = 0;
//		}
//		if (a == 0)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}


//goto语句初识   只能在本函数使用
//int main()
//{
//flag:
//	printf("哼\n");
//	printf("喝\n");
//	printf("哈\n");
//	printf("伊\n");
//	goto flag;  //跳转到上面的flag
//	return 0;
//}


//取两个整数中的最大值
//int getmax(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int max = getmax(a, b);
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}


//交换两个整形变量的值
//void jh1(int x, int y)
//{                    //这个是错误的
//	int z = 0;         //下边改成jh(a, b)
//	z = x;             //传值调用
//	x = y;
//	y = z;
//}
//void jh2(int* pa, int* pb)
//{                    //这个是正确的
//	int z = 0;         //传址调用
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	jh1(a, b);
//	printf("交换前：%d %d\n", a, b);
//	jh2(&a, &b);    //交换的是a,b地址里面数
//	printf("交换后：%d %d\n", a, b);//输出的是a,b地址里面的数
//	system("pause");
//	return 0;
//}
