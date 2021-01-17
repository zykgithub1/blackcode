#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i <10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i <10; i++)
//		{
//			printf("%d ",*(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//	int* p=(int*)calloc(10, sizeof(int));
//	if (!p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (!p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//		/*for (i = 0; i < 5; i++)
//		{
//			printf("%d ",*(p + i));
//		}*/
//	}
//	int* p2 = realloc(p, 50);
//	if (p2 != NULL)
//	{
//		p = p2;
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p2 + i) =  i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p2 + i));
//		}
//	}
//	free(p);
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(40);
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void Test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str == NULL)
//	{
//		strncat(str, "world",3);
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//struct S
//{
//	int n;
//	int arr[0];
//};
//int main()
//{
//	//struct S s;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr=realloc(ps, 48);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i <= 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i = 0; i <= 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//printf("\n%d\n", sizeof());
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	(*ps).arr = (int*)malloc(20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	/*for(i = 0; i < 5; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}*/
//	int*ptr=(int*)realloc(ps->arr, 100);
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//	return 0;
//}