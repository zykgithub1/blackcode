#include <stdio.h>

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++){
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}
//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++){
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%c\n", *p);
//	printf("%s\n", p);//p是首字母a的指针，所以*p能取出a，用%s的时候，是通过a的地址打印字符串 
//	return 0;
//}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	char* p1 = "abcdef";
	char* p2 = "abcdef";
	if (p1 == p2){
		printf("hehe\n");
	}
	else{
		printf("haha\n");
	}
	return 0;
}