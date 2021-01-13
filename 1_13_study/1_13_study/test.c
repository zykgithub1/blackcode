#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	char killer = '0';
//	for (killer = 'a'; killer < 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//		{
//			printf("killerÊÇ%c", killer);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1;c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a*b*c*d*e == 120)
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char *str = "hellobit";
//	char *str2 = "hellobit";
//	if (str == str2)
//	{
//		printf("yes");
//	}
//else
//	printf("no");
//	return 0;
//}
//void left_move(char* arr,int k)
//{
//	int i = 0;
//
//	int len = strlen(arr);
//	for (i = 0; i < k;i++)
//	{
//		char temp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = temp;
//	}
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s", arr);
//	return 0;
//}
//void left_move(char* arr,int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 1; i<=k; i++)
//	{
//		int j = 0;
//		char temp = *arr;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = temp;
//	}
//}
//void left_move(char*arr, int k)
//{
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < k;i++)
//	{
//		int j = 0;
//		char temp = *arr;
//		for (j = 0; j < len-1 ; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = temp;
//	}
//}
//void reverse(char* begin,char* end)
//{
//	assert(begin);
//	assert(end);
//	while (begin <= end)
//	{
//		char temp = *begin;
//		*begin = *end;
//		*end = temp;
//		begin++;
//		end--;
//	}
//}
//void left_move(char* arr,int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k<len);
//	reverse(arr,arr+k-1);
//	reverse(arr+k,arr+len-1);
//	reverse(arr,arr+len-1);
//}
////int main()
////{
////	char arr[] = "abcdef";
////	left_move(arr, 1);
////	printf("%s\n", arr);
////	return 0;
////}
//int  is_left_move(char*s1,char*s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		if (strcmp(s1, s2) == 0)
//			return 1;
//	}
//	return 0;
//}
int  is_left_move(char*str1, char*str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	strncat(str1, str1, len1);
	char* ret=strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	return 1;
}
int main()
{
	char arr1[111] = "abcdef";
	char arr2 []= "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}else
		printf("no\n");
	return 0;
}
