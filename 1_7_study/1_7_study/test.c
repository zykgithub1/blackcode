#include <stdio.h>
//1，最原始版本
//int check_sys(){
//	int a = 1;
//	char* p = (char*)&a;
//	if (1 == *p){
//		return *p;
//	}
//	else{
//		return 0;
//	}
//}
//版本2：
//int check_sys(){
//	int a = 1;
//	char*p=(char*)&a;
//	return *p;
//}
//版本3：
//
//int check_sys(){
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	//写一段代码，获得当前数据的字节序
//	int ret=check_sys();
//	if (ret == 1){
//		printf("小端\n");
//	}else{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	//int* p = &a;
//	//*p = 0;
//	char *p = &a;
//	*p = 0;
//	return 0;
//}
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("%d ,%d,%d", a, b, c);
	return 0;
}