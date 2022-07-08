//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

////10个数取最大值
//int main( )
//{
//	int arr[10] = { 0 };//取能存10个数空间，并将第一个数编号为0
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);//输入10个数
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max) max = arr[i];//比较10个数
//	}
//	printf("max is %d\n", max);
//	system("pause");//暂停一下，以防运行过快啥都看不到
//	return 0;
//}





////求10个数的平均值
//int main( )
//{
//	float arr[10] = { 0 };
//	int i = 0;
//	//int sum = 0;                    优化
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%f", &arr[i]);
//		//sum = sum + arr[i];         优化
//	}
//	float sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("sum is %f\n", sum);
//	float avg = sum / 10.0;
//	printf("average is %f\n", avg);
//	system("pause");
//	return 0;
//}







////从 1 加到 100
//int main()
//{
//	int sum = 0, i=0;
////       解法1
//	//for (i = 1; i<101; i++)
//	//{
//	//	sum = sum + i;
//	//	printf("%d\n", sum);
//
//	//}
////       解法2
//	//while (i < 100)
//	//{
//	//	i++;
//	//	sum = sum + i;
//	//	printf("%d\n", sum);
//	//}
//	printf("sum is %d\n", sum);
//	system("pause");
//	return 0;
//}




////认识简单的结构体
//struct stu
//{
//	char name[30];//字符型
//	int age;//整型
//	double score;//双精度浮点型
//};
//int main()
//{
//	struct stu s = { "小三", 20, 83.46 };
//	printf("1：%s %d %lf\n", s.name, s.age, s.score);//%lf双精度浮点型打印
//	struct stu* p = &s;//把s用p表示    *p=&s
//
//	printf("2：%s %d %lf\n", (*p).name, (*p).age, (*p).score);//%s字符型打印
//	printf("3：%s %d %lf\n", p->name, p->age, p->score);//  ->为结构体指针
//
//	system("pause");
//	return 0;
//}




//
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;//相当于b在这一行用完废止
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i = 1;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", sum(a));
//	}
//	system("pause");
//	return 0;
//}





