#include <stdio.h>
//1����ԭʼ�汾
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
//�汾2��
//int check_sys(){
//	int a = 1;
//	char*p=(char*)&a;
//	return *p;
//}
//�汾3��
//
//int check_sys(){
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	//дһ�δ��룬��õ�ǰ���ݵ��ֽ���
//	int ret=check_sys();
//	if (ret == 1){
//		printf("С��\n");
//	}else{
//		printf("���\n");
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