//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>


//�˽�ݹ�
//void print(unsigned int n)
//{
//	if (n > 9)
//		print(n / 10);    //print���޿�ʼ
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 1234;//unsigned - �޷��ŵģ�Ĭ��Ϊ����
//	scanf("%u", &num);//ȡ1234   %u - �޷���10��������
//	//�ݹ� - �����Լ������Լ�
//	print(num);
//	system("pause");
//	return 0;
//}


//�õݹ����ַ�������
//int i_strleng(char* str)
//{
//	if (*str != '\0')
//		return 1 + i_strleng(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	printf("%d\n", i_strleng(arr));
//	system("pause");
//	return 0;
//}


////�õݹ��� n �Ľ׳�
//int jc(int n)
//{
//	if (n != 0)
//		return n*jc(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", jc(i));
//	return 0;
//}


//�õݹ���� n ��쳲�������
//int fib(int n)
//{  //����һ��n Խ��Ч��Խ��
//	//if (n > 2)
//	//	return fib(n - 1) + fib(n - 2);
//	//else
//	//	return 1;
//   //��������ѭ������
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", fib(i));
//	return 0;
//}


//��1/1-1/2+1/3-1/4+...+1/99-1/100��ֵ
//int main()
//{
//	int i = 0, flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag *= -1;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//���9x9�˷��ھ���
//void kjb(int n)
//{
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d x %d = %-2d ", i, n, i*n);
//	}
//}
//int main()
//{
//	int i = 1, n;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		kjb(i);
//		printf("\n");
//		i++;
//	}
//	return 0;
//}


//�ַ����������
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str) - 1;
//	*str = *(str + len);
//	*(str + len) = '\0';
//	if (len >= 2)
//		reverse_string(str + 1);
//	*(str + len) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//��һ������ÿλ����֮��
//int DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//int main()
//{
//	int num = 1729;
//	printf("%d\n", DigitSum(num));
//	return 0;
//}


//n �� k �η�
//double pow(int n, int k)
//{
//	if (k > 0)
//		return n*pow(n, k - 1);
//	else if (k < 0)
//		return 1.0 / (pow(n, - k));
//	else
//		return 1;
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	printf("%lf", pow(n, k));
//	return 0;
//}