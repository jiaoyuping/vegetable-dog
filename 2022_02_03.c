//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>


//���100 - 200֮�������
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


//goto����ʶ   ֻ���ڱ�����ʹ��
//int main()
//{
//flag:
//	printf("��\n");
//	printf("��\n");
//	printf("��\n");
//	printf("��\n");
//	goto flag;  //��ת�������flag
//	return 0;
//}


//ȡ���������е����ֵ
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


//�����������α�����ֵ
//void jh1(int x, int y)
//{                    //����Ǵ����
//	int z = 0;         //�±߸ĳ�jh(a, b)
//	z = x;             //��ֵ����
//	x = y;
//	y = z;
//}
//void jh2(int* pa, int* pb)
//{                    //�������ȷ��
//	int z = 0;         //��ַ����
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	jh1(a, b);
//	printf("����ǰ��%d %d\n", a, b);
//	jh2(&a, &b);    //��������a,b��ַ������
//	printf("������%d %d\n", a, b);//�������a,b��ַ�������
//	system("pause");
//	return 0;
//}
