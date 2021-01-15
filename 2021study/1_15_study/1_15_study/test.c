#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//void* my_memcpy(void*dest, const void*src, size_t num)
//{
//	assert(dest&&src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	//int arr2[5] = { 0 };
//	my_memcpy(arr1+1, arr1,12);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s ", arr1);
//	}
//	return 0;
//}
//void* my_memmove(void* dest,const void* src, size_t num)
//{
//	assert(dest&&src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		size_t i = num;
//		while (num--)
//		{
//			*((char*)dest + i-1) = *((char*)src + i-1);
//			--i;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	my_memmove(arr, arr+2, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 33, 4, 5 };
//	int arr2[] = { 1, 2, 335, 4, 3 };
//	printf("%d\n",memcmp(arr1, arr2, 8));
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}

//struct Stu
//{
//	char name[22];
//	char tele[12];
//	char sex[10];
//	int age;
//}suu;
//struct Stu s3;
//int main()
//{
//	suu.age;
//	struct Stu s1;
//	struct Stu s2;
//	s1.age = 10;
//	return 0;
//}
//struct S3
//{
//	long d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double q;
//};
//int main()
//{
//	struct S4 s4;
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}
struct S
{
	int a;
	char c;
	double d;
};
void Init(struct S* s)//传参穿地址才能修改里面的内容
{
	s->a = 11;
	(*s).c = 'zzk';
	(*s).d = 5.0;
}
void print1(struct S tmp)
{
	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
}
void print2(struct S * t)
{
	printf("%d %c %lf",(*t).a,(*t).c,(*t).d);
}
int main()
{
	struct S s;
	Init(&s);
	print1(s);
	print2(&s);
	return 0;
}