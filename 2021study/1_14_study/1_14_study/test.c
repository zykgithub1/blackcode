#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "sqwert";
//	int ret = strcmp(p1, p2);
//	printf("%d", ret);
//
//	return 0;
//}
//int my_strcmp(const char*str1,const char*str2)
//{
//	assert(str1&&str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcd";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}
//char* my_strncpy(char*dest,const char*src, int k)
//{
//	assert(dest&&src);
//	while (k &&(*dest++=*src++))
//	{
//		k--;
//	}
//	if (k)
//	{
//		while (--k)
//		{
//			*dest++ = '\0';
//		}
//	}
//}
//int main()
//{
//	char arr1[10] = "a";
//	char arr2[] = "bit";
//	//strncpy(arr1, arr2, 1);
//	//printf("%s\n", arr1);
//	my_strncpy(arr1, arr2, 7);
//	printf("%s\n", arr1);
//	return 0;
//}
//char* my_strncat(char*dest,char*src,int k)
//{
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	
//	while (k--)
//	{
//		*dest++ = *src++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "handsome zyk";
//	my_strncat(arr1, arr2, 20);
//	printf("%s\n", arr1);
//	return 0;
//}
//int my_strncmp(char*p1, char*p2, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		if (*p1< *p2)
//		{
//			return -1;
//		}
//		else if (*p1>*p2)
//		{
//			return 1;
//		}
//		else
//		{
//			p1++; p2++;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	char* p2 =       "abcawer";
//	int ret =my_strncmp(p1, p2,1);
//	printf("%d\n", ret);
//	return 0;
//}
//char* my_strstr(char*p1, char*p2)
//{
//	assert(p1&&p2);
//	char* s1;
//	char* s2;
//	char* cur=p1;
//	if (*p2 == '\0')
//		return p1;
//	while (*cur)
//	{
//		s1 = cur; s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++; s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//char* my_strstr(char* p1, char* p2)
//{
//	assert(p1&&p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	while (*cur)
//	{
//		s1 = cur;//s1为当前的地址
//		s2 = p2;
//		while (*s1 != *s2)//找到第一个与p2相同的字符
//		{
//			s1++;
//			cur = s1;//将此时s1的地址给cur;
//		}
//		while (*s1&&*s2 && (*s1 == *s2))//首字符相同后比较后面的字符
//		{
//			s1++; s2++;
//		}
//		if (*s2 == '\0') 
//		{
//			return cur;
//		}
//		cur++;  //cur到下一位的地址
//	}
//	return NULL;
//}
//char* my_strstr(char* p1, char* p2)
//{
//	assert(p1&&p2);
//	if (*p2 == '\0')
//		return p1;
//	char* s1;
//	char* s2;
//	char* cur = p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while (*s1 && *s2 && (*s1 ==*s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abbbcghti";
//	char*p2 = "bbb";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("没有\n");
//	}
//	else
//	printf("%s\n", ret);
//	return 0;
//}
//int main()
//{
//	char arr[] = "zyk@handsome.best,aaaa";
//	char* p = ".@,";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
	/*char* ret = strtok(arr, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);*/
//	return 0;
//}
//int main()
//{
//	//错误码    错误信息
//	// 0-        -No error
//	// 1-        -Operation not permitted
//	// 2-        -No such file or directory
//	//int i = 0;
//	//for (i = 0; i < 100; i++)
//	//{
//	//	char*str = strerror(i);
//	//	printf("%s\n", str);
//	//}
//	char*str = strerror(errno);
//	printf("%s\n", str);
//	return 0;
//}
int main()
{

	return 0;
}