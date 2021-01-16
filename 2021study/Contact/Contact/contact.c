#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "contact.h"
void InitContact(struct Contact* con)
{
	memset(con->data, 0, sizeof(con->data));
	con->size = 0;
}
void AddContact(struct Contact* con)
{
	if (con->size == MAX)
	{
		printf("通讯录已满,无法增加\n");
	}
	else
	{
		printf("请输入名字:>\n");
		scanf("%s", con->data[con->size].name);
		printf("请输入年龄:>\n");
		scanf("%d", &(con->data[con->size].age));
		printf("请输入性别:>\n");
		scanf("%s", con->data[con->size].sex);
		printf("请输入电话:>\n");
		scanf("%s", con->data[con->size].tele);
		printf("请输入地址:>\n");
		scanf("%s", con->data[con->size].addr);
		con->size++;
		printf("录入成功\n");

	}
}

void ShowContact(const struct Contact* con)
{
	if (con->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < con->size; i++)
		{
			printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				con->data[i].name,
				con->data[i].age, 
				con->data[i].sex, 
				con->data[i].tele,
				con->data[i].addr);
		}
	}
}
static int FindByName(struct Contact* con, char* name)
{
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (0 == strcmp(con->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact(struct Contact* con)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字：>");
	scanf("%s", name);
	int pos = FindByName(con, name);
	
	if (pos == con->size)
	{
		printf("删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < con->size - 1; j++)
		{
			con->data[j] = con->data[j + 1];
			//(*con).data[j] = (*con).data[j + 1];
		}
		con->size--;
		printf("删除成功\n");
	}
}
void SearchContact(const struct Contact* con)
{
	char name[MAX_NAME];
	printf("请输入你要查找人的姓名\n");
	scanf("%s", name);
	int pos=FindByName(con, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			con->data[pos].name,
			con->data[pos].age,
			con->data[pos].sex,
			con->data[pos].tele,
			con->data[pos].addr);
	}
}
void modifyContact(struct Contact* con)
{
	char name[MAX_NAME];
	printf("请输入你要修改人的名字\n");
	scanf("%s", name);
	int pos = FindByName(con, name);
	if (pos == -1)
	{
		printf("修改人不存在\n");
	}
	else
	{
		printf("请输入名字:>\n");
		scanf("%s", con->data[pos].name);
		printf("请输入年龄:>\n");
		scanf("%d", &(con->data[pos].age));
		printf("请输入性别:>\n");
		scanf("%s", con->data[pos].sex);
		printf("请输入电话:>\n");
		scanf("%s", con->data[pos].tele);
		printf("请输入地址:>\n");
		scanf("%s", con->data[pos].addr);
		printf("修改成功\n");
	}
}