#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#include<math.h>

//int main()
//{
//	int i;
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d.hello world!\n", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", &a);
//	return 0;
//}
//
//int main() {
//	int n = 0, i = 0, ret = 1, sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main() {
//	int num = 10;
//	const int* p = &num;
//	p = 20;
//	printf("%p\n", &num);
//	return 0;
//}
//
//int main() {
//	int num = 10;
//	int* const p = &num;
//	*p = 20;
//	printf("%p\n%p\n%d\n", &num, *p, num);
//	return 0;
//}
//
//int my_strlen(const char* arr) {
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++ != '\0') {
//		count++;
//	}
//	return count;
//}
//int main() {
//	char arr[] = "23kl3oi3jlkj3j3lkj3l";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//
//����С������
//int main() {
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int count = a > b ? a : b;
//	while (1) {
//		if (count % a == count % b) break;
//		else count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//��һ��Ӣ�ľ��ӵĵ��ʽ��е���
//�磺i like beijing. = > beijing.like i
//void reverse(char* left, char* right) {
//	while (left < right) {
//		char tmp = 0;
//		tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++; right--;
//	}
//}
//int main() {
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr) - 1;
//	reverse(arr, arr + len);
//	char* start = arr;
//	while (*start) {
//		char* end = start;
//		while (*end != ' ' && *end != '\0') end++;
//		reverse(start, end - 1);
//		if (*end == ' ') start = end + 1;
//		else start = end;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//
//00000000000000000000000000000000
//
//int main() {
//	unsigned char i = 0;
//	for (i = 0; i < 256; i++) {
//		printf("hello world!\n");
//	}
//	/*char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));*/
//	return 0;
//}

//int main() {
//	int f = 9, i, j;
//	scanf_s("%d", &f);
//	int s[9] = { 0 };
//	srand((unsigned int)time(NULL));
//	for (i = 0; i < f; i++) s[i] = rand() % 10;    //��� s[9] 
//	for (i = 0; i < f - 1; i++) {      //��С��������
//		int temp = 0;
//		for (j = i + 1; j < f; j++) {
//			if (s[i] > s[j]) {
//				temp = s[i];
//				s[i] = s[j];
//				s[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < f; i++)	printf("%d ", s[i]);
//	printf("\n");
//	for (i = 0; i < f; i++) {    //���ظ��������滻Ϊ -1
//		for (j = i + 1; j < f; j++) {
//			if (s[i] == s[j]) s[j] = -1;
//			else break;
//		}
//	}
//	for (i = 0; i < f; i++) {
//		if (s[i] != -1) printf("%d ", s[i]);
//	}
//	return 0;
//}

//int main() {
//	//00000000000000000000000000000000
//	// 9=1001   S=0  M=1.001  E=3   E+127=10000010
//	//01000001000100000000000000000000
//	float f = 9.0f;
//	int* p = (int*)&f;
//	printf("%d\n", *p);
//	return 0;
//}

//����Sn=a+aa+aaa+aaaa+aaaaa+...
//int sl(int a, int i) {
//	int gx = 0;
//	gx = a * pow(10, i);
//	if (i >= 0) return gx + sl(a, i - 1);
//	else return 0;
//}
// int main() {
//	int a = 0, n = 0, i = 0, sn = 0;
//	scanf_s("%d %d", &a, &n);
//	for (i = 0; i <= n; i++) {
//		sn += sl(a, i - 1);
//	}
//	printf("%d\n", sn);
//	return 0;
//}

//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int* parr = arr;
//	for (int i = 0; i < 5; i++) printf("%d ", *(parr + i));
//	return 0;
//}

//���100000���ڵġ�ˮ�ɻ�����
//�� 153 = 1^3 + 5^3 + 3^3
//int main() {
//	int i = 0;
//	for (i = 0; i <= 100000; i++) {
//		int n = 0, temp = i;
//		while (temp) {            //����������ж���λ
//			temp = temp / 10;
//			n++;
//		}
//		temp = i;
//		int sum = 0;
//		while (temp) {            //���������ÿһλ��n�η�֮��
//			sum += pow(temp % 10, n);
//			temp = temp / 10;
//		}
//		if (sum == i) printf("%d ", i); //�Ƚ�
//	}
//	return 0;
//}

//���һ������
//int main() {
//	int line = 0, i = 0, j = 0;
//	scanf_s("%d", &line);
//	for (i = 0; i < line; i++) {
//		for (j = 0; j < line - 1 - i; j++) printf(" ");
//		for (j = 0; j < 2 * i + 1; j++) printf("*");
//		printf("\n");
//	}
//	for (i = 0; i < line-1; i++) {
//		for (j = 0; j <= i; j++) printf(" ");
//		for (j = 0; j < 2 * (line -1 -i) - 1; j++) printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1Ԫ1ƿ��2����ƿ�ɻ�1ƿ��xԪ���Ժȶ���ƿ
//int main() {
//	int money = 20, count = 0;
//	scanf_s("%d", &money);
//	int temp = money;
//	while (1) {
//		count += money;
//		if (temp % 2 == 0 && temp > 1) {
//			money = temp / 2; temp = money;
//		}
//		else if (temp % 2 == 1 && temp > 1) {
//			money = temp / 2; temp = money + 1;
//		}
//		else break;
//	}
//	printf("���Ժ� %d ƿ\n", count);
//	return 0;
//}

//�������� qsort   ������ɽ���
//qsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*));
//base - ���������е�һ������ĵ�ַ
//num - ��������Ԫ�صĸ���
//size - ����������һ��Ԫ�صĴ�С����λ���ֽ�
//compar - �����Ƚϴ����������е�2��Ԫ�صĺ���
//int compar(const void* p1, const void* p2) {   return ...p1 - ...p2; }
// p1 - p2 ����     p2 - p1  ����


//�ǳ����ĵ�һ���������
//int main() {
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//int main() {
//	char arr1[20] = "asdfghjkl";
//	char arr2[20] = "qwert";
//	strcpy(arr1, arr2);   //��������Ϊ�ַ���
//	printf("%s\n", arr1);
//	return 0;
//}

//int main() {
//	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
//	return 0;
//}

//int main() {
//	int N = 0;
//	scanf_s("%d", &N);
//	int arr[51] = { 0 };
//	int i = 0;
//	for (i = 0; i < N; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	int a = 0;
//	scanf_s("%d", &a);
//	for (i = 0; i < N + 1; i++) {
//		int temp = N;
//		if (arr[i] > a) {
//			while (temp > i) {
//				arr[temp] = arr[temp - 1];
//				temp--;
//			}
//			arr[i] = a;
//			break;
//		}
//	}
//	for (i = 0; i < N + 1; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}