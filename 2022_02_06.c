//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>


//了解递归
//void print(unsigned int n)
//{
//	if (n > 9)
//		print(n / 10);    //print套娃开始
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 1234;//unsigned - 无符号的，默认为正数
//	scanf("%u", &num);//取1234   %u - 无符号10进制整数
//	//递归 - 函数自己调用自己
//	print(num);
//	system("pause");
//	return 0;
//}


//用递归求字符串长度
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


////用递归求 n 的阶乘
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


//用递归求第 n 个斐波那契数
//int fib(int n)
//{  //方法一，n 越大效率越低
//	//if (n > 2)
//	//	return fib(n - 1) + fib(n - 2);
//	//else
//	//	return 1;
//   //方法二，循环迭代
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


//求1/1-1/2+1/3-1/4+...+1/99-1/100的值
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


//输出9x9乘法口诀表
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


//字符串逆序输出
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


//求一个数的每位数字之和
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


//n 的 k 次方
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