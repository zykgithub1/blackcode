#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//位段：-二进制位 存储    作用：节省空间
//struct S
//{
//	int a:2;//只需要2个比特位
//	int b:5;
//	int c:10;
//	int d:14;
//	
//};
////struct S
////{
////	char a : 3;
////	char b : 4;
////	char c : 5;
////	char d : 4;
////};
//int main()
//{
//	struct S s = { 0 };
//	//s.a = 10;
//	//s.b = 20;
//	//s.c = 3; 
//	//s.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//            ----------------------枚举--------------------------
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET=0
//};
//enum Color
//{
//	RED,YELLOW,BULE
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = RED;
//	printf("%d %d %d", MALE, FEMALE, SECRET);
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	judge(&a);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>
#include <process.h>
#include <limits.h>
#include <string.h>


#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1

typedef int status;
typedef int boolean;
typedef int ElemType;
#define LIST_INIT_SIZE 10
#define LISTINCREMENT 2

typedef struct
{
	ElemType* elem;
	int length;
	int listsize;
}SqList;

status InitList(SqList *L)
{
	(*L).elem = (ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if (!(*L).elem)
		exit(OVERFLOW);
	(*L).length = 0;
	(*L).listsize = LIST_INIT_SIZE;
	return OK;
}

status ListInsert(SqList *L, int i, ElemType e)
{
	ElemType* q;//插入的地址
	ElemType* p, *newbase;
	if (i<1 || i>L->length + 1)
		return ERROR;
	if (L->length >= L->listsize)
	{
		newbase = (ElemType*)realloc((*L).elem, ((*L).listsize + LISTINCREMENT)*sizeof(ElemType));
		if (!newbase)
			return ERROR;
		(*L).elem = newbase;
		(*L).listsize += LISTINCREMENT;
	}
	q = (*L).elem + i - 1;
	for (p = (*L).elem + (*L).length - 1; p >= q; --p)
	{
		*(p + 1) = *p;
	}
	*q = e;
	++(*L).length;
	return OK;


}

int main()
{
	SqList L;
	status i;
	int j = 0;
	i = InitList(&L);
	printf("i=%d\n", i);
	printf("L.elem=%u  L.length=%d  L.listsize=%d\n", L.elem, L.length, L.listsize);
	for (j = 1; j <= 10; j++)
	{
		ListInsert(&L, j, j);
	}
	ListInsert(&L, j, 11);
	ListInsert(&L, j, 12);
	for (j = 1; j <= 12; j++)
	{
		printf("%d ", *(L.elem + j - 1));
	}
	printf("\n");
	printf("L.elem=%u  L.length=%d  L.listsize=%d\n", L.elem, L.length, L.listsize);

	return 0;
}