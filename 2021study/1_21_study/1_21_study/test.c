#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#define SQUARE(X) X*X//宏预编译时 不会自己加括号；需要自己加，写宏时不要吝啬括号
//int main()
//{
//	int ret = SQUARE((5+1));
//	printf("%d", ret);
//	return 0;
//}
//#define DEBUG
//#define MAX(X,Y)   ((X)>(Y)?(X):(Y))
//int main()
//{
//
//}
//#if !defined(DEBUG)
//	int a = 10;
//	int b = 11;
//	int ret = MAX(a+3,b++);
//	printf("%d\n", ret);
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
//	printf("%s\n", __DATE__);
//#endif
//	return 0;
//}
#define OFFSETOF(struct_name,number_name)  &(((struct_name*)0)->number_name)
struct S
{
	char c1;
	int a;
	char c2;
};
int main()
{
	printf("%d\n",OFFSETOF(struct S,c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}