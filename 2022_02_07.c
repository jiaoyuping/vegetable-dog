//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>


//一维数组
//#include<string.h>
//int main()
//{
//	char arr[] = "hello";
//	int*p = &arr;
//	int sz = strlen(arr);
//	int i = 0;	
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %p\n", i, p[i]);//%p - 打印地址，16进制显示
//	}
//	return 0;
//}


//二维数组        i行j列
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr2[3][4] = { {1,2},{3,4},{5,6} };
//	int arr3[][4] = { { 1,2 },{ 3,4 },{ 5,6 } };//行可以省略，列不能省略
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr3[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//冒泡排序——从小到大排序
//void bubble_sort(int arr[], int sz)
//{
//	int i, j, tmp;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = i + 1; j < sz; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//
//	}
//}
//int main()
//{
//	int arr[] = { 8,4,9,1,3,7,5,2,4,6,0 };
//	int i, sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);   //注意传参数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}