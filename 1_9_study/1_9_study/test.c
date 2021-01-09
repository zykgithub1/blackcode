#include <stdio.h>

//参数是数组形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0; int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//参数是指针形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i <x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++){
//			//printf("%d ", p[i][j]);
//			//printf("%d ", *(*(p+i)+j));
//			//printf("%d ", *(p[i]+j));
//			printf("%d ", (*(p+i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}
//  

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int*  p = &arr;
//	for (i = 0; i < 10;i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p+i));
//		printf("%d ", arr[i]);
//		printf("%d ", *(arr+i));
//	}
//	return 0;
//}
//void test(int arr[3][5])
//{
//
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int(*p)(int, int) = add;
//	printf("%d \n",(*p)(2, 3));
//	printf("%d \n", (**p)(2, 3));
//	printf("%d \n", (p)(2, 3));
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];//指针数组
//	int(*pa)(int, int) = add;//函数指针
//	int(*parr[4])(int, int) = {add,sub,mul,div};//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++){
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("****1.add      2sub    ****\n");
//	printf("****3.mul      4div    ****\n");
//	printf("***      0.exit        ****\n");
//	printf("***************************\n");
//}
//int main()
//{
//	int input;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请输入你要干嘛");
//		scanf_s("%d", &input);
//
//		switch (input)
//		{
//		case1:
//			printf("请输出要操作的数");
//			scanf_s("%d %d", &x, &y);
//			printf("%d\n", add(x, y));
//			break;
//		case 2:
//			printf("请输出要操作的数");
//			scanf_s("%d %d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("请输出要操作的数");
//			scanf_s("%d %d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("请输出要操作的数");
//			scanf_s("%d %d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("推出\n");
//			break;
//		default:
//			printf("请输入正确的操作");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input;
//	int x = 0;
//	int y = 0;
//	int(*parr[])(int, int) = { 0, add, sub, mul, div };
//	do{
//		menu();
//		printf("你要干嘛");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数");
//			scanf_s("%d %d", &x, &y);
//			printf("%d\n", (*parr[input])(x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else{
//			printf("请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	int(*p)[10]=&arr;//取出数组的地址
	int(*pf)(int, int);//函数指针
	int(*pfarr[4])(int, int);//pfarr是一个数组，元素类型为函数指针
	int(*(*ppfarr)[4])(int, int) = &pfarr;//ppfarr是一个数组指针，指向一个大小为4的数组，指向的数组的每个元素类型为函数指针int(*)(int,int)
	return 0;
}