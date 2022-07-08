//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//while循环用法
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//continue;   //跳过本次循环，直接返回判断部分，进行下一次循环
//			break;      //永久终止循环
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}


//	简单理解while ((mima=getchar()) != '\n')用法
//int main()
//{
//	char password[20] = { 0 }; //char字符型
//	printf("请输入密码：");
//	scanf("%s", password);  //字符组本身有专门地址，不用加&取地址
//	//清理缓冲区多余的字符
//	int mima = 0;
//	while ((mima=getchar()) != '\n')//‘!=’表示不等于
//	{      //定义的mima字符里面若有\n，则输出换行，\n=回车换行
//		;  //返回空值
//	}
//	printf("请确认密码（Y/N）：");
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//
//	system("pause");
//	return 0;
//}


//输入两次密码并自动判断是否一致 BUG:带有空格的不行
//int main()
//{
//	printf("请输入密码：");
//	char password1[20] = { 0 };
//	scanf("%s", password1);
//	int ch1 = 0;
//	while ((ch1 = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请再次确认密码：");
//	char password2[20] = { 0 };
//	scanf("%s", password2);	
	//if (strcmp(password1, password2) == 0 )//strcmp比较字符串函数；有(>,=,<)三种比较
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	system("pause");
//	return 0;
//}


//for语句使用
//int main()
//{
//	int i = 0;
//	int k = 0;
//	//  for(初始化; 判断部分; 调整)   调整最好不要在内部调整
//	for (i = 0, k = 0; k = 0; i++, k++)
//		//判断部分 k=0 为赋值，0=假，判断部分为真才执行循环
//		//     注意 k=0 与 k==0 的区别
//		k++;    //故最终不循环
//	system("pause");
//	return 0;
//}


//do...while()语句使用    先循环再判断
//int main()
//{
//	int i = 0;
//	do {
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	system("pause");
//	return 0;
//}


//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int k = 0;
//	int ji = 1;
//	scanf("%d", &i);
//	for (k = 1; k <= i; k++)
//	{
//		ji = ji*k;
//	}
//	printf("n!= %d\n", ji);
//	system("pause");
//	return 0;
//}


//计算1!+2!+3!+...+10!
//int main()
//{
//	int i, j, k = 1;
//	int sum = 0;
//	scanf("%d", &i);
//	for (j = 1; j <= i; j++)
//	{
//		int ji = 1;
//		for (k = 1; k <= j; k++)
//		{
//			ji = ji*k;
//		}
//		printf("%d\n", ji);
//		sum = sum + ji;
//		//k *= j;     //优化时间复杂度
//		//sum += k;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//二分法查找有序数组中的元素
//int main()
//{
//	int arr[] = { 1,3,5,7,8,9,11,13,15,17,19,21 };
//	int k;
//	printf("请输入所要查找的数：");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			mid += 1;
//			printf("找到了，是第 %d 个数\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	system("pause");
//	return 0;
//}


//