//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>


//�����"welcome to home!!"
//#include<string.h>    //strlen()��ͷ�ļ�
//#include<windows.h>   //Sleep()��ͷ�ļ�  SΪ��д
//int main()
//{
//	char arr1[] = "welcome to home!!";
//	char arr2[] = "*****************";
//	int left = 0;
//	int right = strlen(arr1) - 1;  //strlen()�����ַ�������
//	while (left<=right)
//	{		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);  //˯��1��
//		system("cls");  //�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	system("pause");
//	return 0;
//}


//ģ���û���¼�˻�����������������룬���ξ���Ļ�ֹͣ����
//#include<string.h>
//int main()
//{
//	char password1[] = "123456";
//	int i = 1;
//	while (i <= 3)
//	{
//		char password2[20] = { 0 };
//		printf("��%d������\n", i);
//		scanf("%s", password2);	
//		if (strcmp(password2, password1) == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			if (i <= 2)
//				printf("���벻��ȷ������������\n");
//			else
//				printf("���벻��ȷ��ֹͣ����\n");
//		}
//		i++;
//	}
//	system("pause");
//	return 0;
//}


//�������������Լ��
//����һ
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
//			printf("���Լ���ǣ�%d\n", max);
//			break;
//		}
//		max--;
//	}
//	system("pause");
//	return 0;
//}
//��������շת�����
//int main()
//{
//	int m, n, t;
//	scanf("%d%d", &m, &n);
//	while (t = m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ���ǣ�%d\n", n);
//	system("pause");
//	return 0;
//}


//������������С������
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
//			printf("��С�������ǣ�%d\n", min);
//			break;
//		}
//		min++;
//	}
//	system("pause");
//	return 0;
//}


//������Ķ�������Ӵ�С����
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
//////////�ⷨ��///////////
//int main()
//{
//	int i, j, a[10], t;
//	printf("������ʮ������");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i + 1; j < 10; j++) //ѭ��
//			if (a[i] < a[j])
//			{
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//	}
//	printf("�Ӵ�С�����");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	system("pause");
//	return 0;
//}