//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

////if选择语句；注意单选择，二选择，多选择之间的语法
//int main()
//{
//	int age;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else if (age >= 100)
//		printf("长寿\n");
//	system("pause");
//	return 0;
//}




////输出1 - 100之间的奇数
//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 101; i++)	//for语句（不用i++）
//	//{
//	//	if (i % 2 == 1)
//	//		printf("%d  ", i);
//	//}
//	while (i <= 100)	//while语句（要用i++）
//	{
//		if (i % 2 == 1)   //余数用法
//			printf("%d  ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}



////switch选择语句用法
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n) //括号内必须为整型
//	{
//	case 1:m++; //若没有break，则以下所有case均执行
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:m++;
//		break; //跳出标志
//	default: //其余选项
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	system("pause");
//	return 0;
//}


