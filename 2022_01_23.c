//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

////10����ȡ���ֵ
//int main( )
//{
//	int arr[10] = { 0 };//ȡ�ܴ�10�����ռ䣬������һ�������Ϊ0
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);//����10����
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max) max = arr[i];//�Ƚ�10����
//	}
//	printf("max is %d\n", max);
//	system("pause");//��ͣһ�£��Է����й���ɶ��������
//	return 0;
//}





////��10������ƽ��ֵ
//int main( )
//{
//	float arr[10] = { 0 };
//	int i = 0;
//	//int sum = 0;                    �Ż�
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%f", &arr[i]);
//		//sum = sum + arr[i];         �Ż�
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







////�� 1 �ӵ� 100
//int main()
//{
//	int sum = 0, i=0;
////       �ⷨ1
//	//for (i = 1; i<101; i++)
//	//{
//	//	sum = sum + i;
//	//	printf("%d\n", sum);
//
//	//}
////       �ⷨ2
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




////��ʶ�򵥵Ľṹ��
//struct stu
//{
//	char name[30];//�ַ���
//	int age;//����
//	double score;//˫���ȸ�����
//};
//int main()
//{
//	struct stu s = { "С��", 20, 83.46 };
//	printf("1��%s %d %lf\n", s.name, s.age, s.score);//%lf˫���ȸ����ʹ�ӡ
//	struct stu* p = &s;//��s��p��ʾ    *p=&s
//
//	printf("2��%s %d %lf\n", (*p).name, (*p).age, (*p).score);//%s�ַ��ʹ�ӡ
//	printf("3��%s %d %lf\n", p->name, p->age, p->score);//  ->Ϊ�ṹ��ָ��
//
//	system("pause");
//	return 0;
//}




//
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;//�൱��b����һ�������ֹ
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





