//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//whileѭ���÷�
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//continue;   //��������ѭ����ֱ�ӷ����жϲ��֣�������һ��ѭ��
//			break;      //������ֹѭ��
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}


//	�����while ((mima=getchar()) != '\n')�÷�
//int main()
//{
//	char password[20] = { 0 }; //char�ַ���
//	printf("���������룺");
//	scanf("%s", password);  //�ַ��鱾����ר�ŵ�ַ�����ü�&ȡ��ַ
//	//��������������ַ�
//	int mima = 0;
//	while ((mima=getchar()) != '\n')//��!=����ʾ������
//	{      //�����mima�ַ���������\n����������У�\n=�س�����
//		;  //���ؿ�ֵ
//	}
//	printf("��ȷ�����루Y/N����");
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//
//	system("pause");
//	return 0;
//}


//�����������벢�Զ��ж��Ƿ�һ�� BUG:���пո�Ĳ���
//int main()
//{
//	printf("���������룺");
//	char password1[20] = { 0 };
//	scanf("%s", password1);
//	int ch1 = 0;
//	while ((ch1 = getchar()) != '\n')
//	{
//		;
//	}
//	printf("���ٴ�ȷ�����룺");
//	char password2[20] = { 0 };
//	scanf("%s", password2);	
	//if (strcmp(password1, password2) == 0 )//strcmp�Ƚ��ַ�����������(>,=,<)���ֱȽ�
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//	system("pause");
//	return 0;
//}


//for���ʹ��
//int main()
//{
//	int i = 0;
//	int k = 0;
//	//  for(��ʼ��; �жϲ���; ����)   ������ò�Ҫ���ڲ�����
//	for (i = 0, k = 0; k = 0; i++, k++)
//		//�жϲ��� k=0 Ϊ��ֵ��0=�٣��жϲ���Ϊ���ִ��ѭ��
//		//     ע�� k=0 �� k==0 ������
//		k++;    //�����ղ�ѭ��
//	system("pause");
//	return 0;
//}


//do...while()���ʹ��    ��ѭ�����ж�
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


//����n�Ľ׳�
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


//����1!+2!+3!+...+10!
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
//		//k *= j;     //�Ż�ʱ�临�Ӷ�
//		//sum += k;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//���ַ��������������е�Ԫ��
//int main()
//{
//	int arr[] = { 1,3,5,7,8,9,11,13,15,17,19,21 };
//	int k;
//	printf("��������Ҫ���ҵ�����");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
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
//			printf("�ҵ��ˣ��ǵ� %d ����\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	system("pause");
//	return 0;
//}


//