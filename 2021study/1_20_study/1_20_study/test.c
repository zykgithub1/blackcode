#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	FILE*pf = fopen("test11.c", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("失败\n");
//		return 0;
//	}
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	fclose(pfWrite);
//	return 0;
//}
//int main()
//{
//	FILE* pfRead = fopen("TEST.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("失败\n");
//		return 0;
//	}
//	printf("%c ", fgetc(pfRead));
//	printf("%c ", fgetc(pfRead));
//	printf("%c ", fgetc(pfRead));
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}
//int main()
//{
//	char ch = 'a';
//	FILE* pfwrite = fopen("TEST.txt", "w");
//	if (pfwrite == NULL)
//	{
//		printf("打开失败\n");
//		return 0;
//	}
//	for (ch; ch < 'z';ch++)
//	{
//		fputc(ch, pfwrite);
//	}
//	fclose(pfwrite);
//	pfwrite = NULL;
//	FILE* pfread = fopen("TEST.txt", "r");
//	if (pfread == NULL)
//	{
//		printf("读取失败\n");
//		return 0;
//	}
//	char as = 'a';
//	for (as; as <='z'+10;as++)
//	{
//		printf("%c ", fgetc(pfread));
//	}
//	fclose(pfread);
//	return 0;
//}
//int main()
//{
//	char ch = 'a';
//	FILE* pf = fopen("TEST.txt", "w");
//	if (pf == NULL)
//		{
//			printf("%s\n",strerror(errno));
//			return 0;
//		}
//	while (ch <= 'z')
//	{
//		fputc(ch, pf);
//		ch++;
//	}
//	fclose(pf);
//	FILE* pfr = fopen("TEST.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	int as = 'a';
//	while (as <= 'z')
//	{
//printf("%c ", fgetc(pfr));
//as++;
//	}
//	
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("TEST.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(&buf, 1024, pf);
//	puts(buf);
//	
//	//printf("%s\n", buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("TEST.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputs("zykzykzyk",pf);
//	fputs("handsome", pf);
//	fputs("\npretty", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	/*fgets(buf,1024,stdin);
//	fputs(buf, stdout);*/
//	gets(buf);
//	puts(buf);
//	return 0;
//}
//struct S
//{
//	int n; float score; char arr[10];
//};
//int main()
//{
//	struct S s = { 999, 3.14, "zykbest" };
//	FILE* pf = fopen("TEST.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//
//
//
//	fclose(pf);
//	return 0;
//}
//struct S
//{
//	int n; float score; char arr[10];
//};
//int main()
//{
//	struct S s = {0};
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("TEST.txt", "r");
//	//FILE* pfr = fopen("TEST.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(buf, 1024, pf);
//
//	//fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	//fprintf(pfr, "%d %f %s\n", s.n, s.score, s.arr);
//	puts(buf);
//	//printf("%s\n", buf);
//	//printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	fclose(pf);
//	//fclose(pfr);
//	return 0;
//}
//struct S
//{
//	int n; float score; char arr[10];
//};
//int main()
//{
//	struct S s = { 999, 3.14, "zykbest" };
//	struct S tmp = {0};
//	char buf[1024] = { 0 };
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %.2f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s = { "张三", 20, 99.9 };
//	FILE* pf = fopen("Test.txt", "wb");
//	if (pf == NULL)
//		return 0;
//	fwrite(&s,sizeof(struct S),1,pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S tmp = { 0 };
//	FILE* pf = fopen("Test.txt", "rb");
//	if (pf == NULL)
//		return 0;
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return;
//	//1定位问价指针
//	fseek(pf, 2, SEEK_CUR);
//	//2读取文件
//	printf("%c\n", fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return;
//	//1定位文件指针
//	//fseek(pf, 2, SEEK_END);
//	char ch=fgetc(pf);
//	printf("%c\n", ch);
//	//rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("openfile test.txt");
//		return 0;
//	}
//	int ch =0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}