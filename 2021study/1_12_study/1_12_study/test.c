#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//´òÓ¡*
//   ***
//  *****
//   ***
//    *
//int main()
//{
//	int line;
//	scanf("%d",&line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//´òÓ¡¿Õ¸ñ
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		//´òÓ¡¿Õ¸ñ
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		//´òÓ¡*
//	}
//	return 0;
//}

//int main()
//{
//	int money=0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//void printjs(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 1)
//			printf("%d ", arr[i]);
//	}
//}
//void printos(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//			printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,5,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printjs(arr,sz);
//	printos(arr,sz);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char *)&a;
//	printf("%d\n", b);
//	return 0;
//}
int main()//Ñî»ÔÈý½Ç
{
	int arr[10][10] = { 0 };
	int j = 0;
	int i = 0;
	int h = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=i; j++)
		{
			if (j==0)
			{
				arr[i][j] = 1;
			}
			if (i==j)
			{
				arr[i][j] = 1;
			}
			if(i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i-1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (h = 0; h < 12-i; h++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//     11      1
//    10      1 1
//    9     1 2 1
//    8    1 3 3 1
//    7   1 4 6 4 1
//    6  1 5 10 10 5 1
// 5    1 6 15 20 15 6 1
//4   1 7 21 35 35 21 7 1
//3  1 8 28 56 70 56 28 8 1
//1 9 36 84 126 126 84 36 9 1