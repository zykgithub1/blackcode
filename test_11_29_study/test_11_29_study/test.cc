
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <iosteam.h>
/*课堂算法总结：（二进制一些题用运算符来解决 &，|，^,<<,>>;）
1，count二进制有多个1： n=n&(n-1); ret++;   1011  n; n-1:1010 n&(n-1)=1010 n-2:1001 :1000&0100=0000 ret++;
2，判断两个数二进制位数中有多少位不同  用m^n,而后算m^n中有多少1.
3.打印二进制中奇数和偶数位数的数字；也用>> &1  (n>>i)&1






*/
//int count(unsigned int n)
//{
//	int ret = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		ret++;
//	}
//	
//	return ret;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("n中的1有%d个", count(n));
//	return 0;
//}
//int judge(int m, int n)
//{
//	int ret = m^n;
//	int count = 0;
//	while (ret)
//	{
//		ret = ret&(ret - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	printf("%d与%d有%d个二进制位不同", m, n, judge(m, n));
//	return 0;
//}
//void print(int m)
//{
//	int i = 0;
//	printf("打印奇数位\n");
//	for (i = 30; i>=0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("打印偶数位\n");
//	for (i =31 ; i >= 1; i-= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//}
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	print(m);
//	return 0;
////}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}--------------------------------------------------------------------
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = "abc";
//	const char str3[] = "abc";
//	const char str4[] = "abc";
//	const char* str5 = "abc";
//	const char* str6 = "abc";
//	char *str7 = "abc";
//	char *str8 = "abc";
//	cout << (str1 == str2) << endl;
//
//	return 0;
//}
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", *(p + i));
//	
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//int main()
//{
//	int n = 0,h,l;
//	scanf("%d", &n);
//	for (h = 1; h <= n; h++)
//	{
//		for (l = 1; l <= h; l++)
//		{
//			printf("%-2d*%-2d=%-2d ", h, l, h*l);
//		}
//		printf("\n");
//	}
//		
//	
//	return 0;
//}---------------------------------------------------------------------------------------------------------