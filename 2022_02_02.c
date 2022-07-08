//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>


//逐步输出"welcome to home!!"
//#include<string.h>    //strlen()的头文件
//#include<windows.h>   //Sleep()的头文件  S为大写
//int main()
//{
//	char arr1[] = "welcome to home!!";
//	char arr2[] = "*****************";
//	int left = 0;
//	int right = strlen(arr1) - 1;  //strlen()计算字符串长度
//	while (left<=right)
//	{		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);  //睡眠1秒
//		system("cls");  //清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	system("pause");
//	return 0;
//}


//模拟用户登录账户，最多输入三次密码，三次均错的话停止输入
//#include<string.h>
//int main()
//{
//	char password1[] = "123456";
//	int i = 1;
//	while (i <= 3)
//	{
//		char password2[20] = { 0 };
//		printf("第%d次输入\n", i);
//		scanf("%s", password2);	
//		if (strcmp(password2, password1) == 0)
//		{
//			printf("输入正确\n");
//			break;
//		}
//		else
//		{
//			if (i <= 2)
//				printf("输入不正确，请重新输入\n");
//			else
//				printf("输入不正确，停止输入\n");
//		}
//		i++;
//	}
//	system("pause");
//	return 0;
//}


//求两个数的最大公约数
//方法一
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m%max == 0 && n%max == 0)
//		{
//			printf("最大公约数是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	system("pause");
//	return 0;
//}
//方法二：辗转相除法
//int main()
//{
//	int m, n, t;
//	scanf("%d%d", &m, &n);
//	while (t = m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数是：%d\n", n);
//	system("pause");
//	return 0;
//}


//求两个数的最小公倍数
//int main()
//{
//	int m, n, min;
//	scanf("%d%d", &m, &n);
//	if (m > n)
//		min = m;
//	else
//		min = n;
//	while (1)
//	{
//		if (min%m == 0 && min%n == 0)
//		{
//			printf("最小公倍数是：%d\n", min);
//			break;
//		}
//		min++;
//	}
//	system("pause");
//	return 0;
//}


//将输入的多个整数从大到小排列
//int main()
//{
//	int arr[10] = { 0 };
//	int sr = 0;
//	int lg = sizeof(arr) / sizeof(arr[0]);
//	for (sr = 0; sr < lg; sr++)
//	{
//		scanf("%d", &arr[sr]);
//	}
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < lg; i++)
//	{
//		max = arr[i];
//		int tmp = 0;
//		int j = 0;
//		while (j < lg)
//		{
//			if (max < arr[j])
//			{
//				max = arr[j];
//				tmp = j;
//			}
//			j++;
//		}
//		arr[tmp] = 0;
//		printf("%d ", max);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//////////解法二///////////
//int main()
//{
//	int i, j, a[10], t;
//	printf("请输入十个数：");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i + 1; j < 10; j++) //循环
//			if (a[i] < a[j])
//			{
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//	}
//	printf("从大到小排序后：");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	system("pause");
//	return 0;
//}