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
		printf("ͨѶ¼����,�޷�����\n");
	}
	else
	{
		printf("����������:>\n");
		scanf("%s", con->data[con->size].name);
		printf("����������:>\n");
		scanf("%d", &(con->data[con->size].age));
		printf("�������Ա�:>\n");
		scanf("%s", con->data[con->size].sex);
		printf("������绰:>\n");
		scanf("%s", con->data[con->size].tele);
		printf("�������ַ:>\n");
		scanf("%s", con->data[con->size].addr);
		con->size++;
		printf("¼��ɹ�\n");

	}
}

void ShowContact(const struct Contact* con)
{
	if (con->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ���˵����֣�>");
	scanf("%s", name);
	int pos = FindByName(con, name);
	
	if (pos == con->size)
	{
		printf("ɾ�����˲�����\n");
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
		printf("ɾ���ɹ�\n");
	}
}
void SearchContact(const struct Contact* con)
{
	char name[MAX_NAME];
	printf("��������Ҫ�����˵�����\n");
	scanf("%s", name);
	int pos=FindByName(con, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("��������Ҫ�޸��˵�����\n");
	scanf("%s", name);
	int pos = FindByName(con, name);
	if (pos == -1)
	{
		printf("�޸��˲�����\n");
	}
	else
	{
		printf("����������:>\n");
		scanf("%s", con->data[pos].name);
		printf("����������:>\n");
		scanf("%d", &(con->data[pos].age));
		printf("�������Ա�:>\n");
		scanf("%s", con->data[pos].sex);
		printf("������绰:>\n");
		scanf("%s", con->data[pos].tele);
		printf("�������ַ:>\n");
		scanf("%s", con->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}