#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa +3));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2-1));
//}
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//int main()
//{
//	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//	return 0;
//}
//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
////}
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
////void reverse(char arr[])
////{
////	int len = strlen(arr);
////	int left = 0;
////	int right = len - 1;
////	while (left < right)
////	{
////		char temp = arr[left];
////		arr[left] = arr[right];
////		arr[right] = temp;
////		left++;
////		right--;
////	}
////}
//int main()
//{
//	char arr[255] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()  计算 sum=2+22+222+2222+22222； 怎么得到22，222 ret=ret*10+a  
//{
//	int a = 0;
//	int n = 0;
//	int ret = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0; 
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()//水仙花数
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断是否为水仙花数
//		//1，先确定i是几位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2，计算i每位数的幂的和 sum
//		tmp = i;
//		while (tmp)
//		{
//			sum +=(int)pow(tmp %10, n);
//			tmp /= 10;
//		}
//		//3比较i==sum；
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		int tmp = i;
//		int sum = 0;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//}