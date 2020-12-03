#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>


//int main()
//{
//	char n;
//	int i, j, k;
//	scanf("%c", &n);
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 5-i; j > 0;j-- )
//			printf(" ");
//		for (k = 1; k <= i; k++)
//			printf("%c ", n);
//		printf("\n");
//	}
//	return 0;
//}------------------------------------------------------
//int main()
//{
//	int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	printf("%c",(char)arr[i]);
//	return 0;
//}------------------------------------------------
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int y = n / 10000;
//	int m = n / 100 % 100;
//	int d = n % 100;
//	printf("year=%d\n", y);
//	printf("month=%02d\n", m);
//	printf("date=%d\n", d);
//	return 0;
//}-------------------------------------------------
//int main()
//{
//	int a, b;
//	scanf("%d",&a,&b);
//	printf("a=%d,b=%d",b,a);
//	return 0;
//}
//int main()
//{
//	char n;
//	scanf("%c", &n);
//	printf("%d",(int)n);
//	return 0;
//}
//int main()
//{
//	double t, w;
//	scanf("%lf %lf", &t, &w);
//	double z = t/ w / w;
//	double m = 10000 * z;
//	printf("%.2f", m);
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	double m, n, l;
//	scanf("%lf %lf %lf", &m, &n, &l);
//	double a = (m + n + l) / 2;
//		printf("%.2f %.2f", m + n + l, pow((a*(a - m)*(a - n)*(a - l)), 0.5));
//	return 0;
//}
//int main()
//{
//	int q = 0;
//	while (scanf("%d", &q) != EOF)
//	{
//		int n;
//		scanf("%d", &n);
//		int m = 2 << (n - 1);
//		printf("%d\n", m);
//	}
//	return 0;
//}
//int main()
//{
//	int n, h, m, w, c;
//	scanf("%d %d %d", &n, &h, &m);
//	if ((m%h) != 0)
//		w = m / h + 1;
//	else w = m / h;
//	c = n - w;
//	printf("%d", c);
//	return 0;
//}
//int count = 0;
void Move(char a, char c)
{
	printf("%c->%c\n", a, c);
}
void Han(int n,char a,char b,char c)
{
	if (n == 1)//if判断时一定要==！！！！！！！！！
	{
		Move(a, c);
		//count++;
	}
		
	else
	{
		Han(n - 1, a, c, b);
		Move(a, c);
		Han(n - 1, b, a, c);
		//count++;
	}
	//return count;
}

int main()
{
	int n;
	printf("请输入汉诺塔的层数：");
	scanf("%d", &n);
	Han(n, 'a', 'b', 'c');
	return 0;
}
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%c", &password);
//	printf("请确认Y/N");
//	getchar();
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("输入成功");
//	else
//		printf("请重新输入");
//	return 0;
//
//}