#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Student 
{
	char name[20];	
	char sex[4];
	int  age;
	int  num;
	int  score;	
}Student;

typedef struct Node
{
	Student stu;			
	struct Node* pNext;	
}Node;

//�˵� 
void Menu()
 {
	printf("**************************************************\n");
	printf("*********--------ѧ����Ϣ����ϵͳ--------*********\n");
	printf("*********----------��ѡ����------------*********\n"); 
	printf("**     1.¼��ѧ����Ϣ   **   2.��ӡѧ����Ϣ     **\n");
	printf("**     3.��ѯѧ����Ϣ   **   4.ɾ��ѧ����Ϣ     **\n");
	printf("**     5.�޸�ѧ����Ϣ   **   0.�˳�����ϵͳ     **\n");
	printf("********------��������ȷ��ѧ����Ϣ!------*********\n"); 
	printf("**************************************************\n");
}
Node* Head = NULL;

//���ѧ����Ϣ 
void Add() 
{
	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;
	Node* p = Head;
	while (Head != NULL && p->pNext != NULL)
	{
		p = p->pNext;
	}
	if (Head == NULL) {
		Head = pNewNode;
	}
	else {
		p->pNext = pNewNode;
	}
	printf("������ѧ��������\n");
	scanf("%s", pNewNode->stu.name, sizeof(pNewNode->stu.name));
	printf("�������Ա�\n");
	scanf("%s", pNewNode->stu.sex, sizeof(pNewNode->stu.sex));
	printf("���������䣺\n");
	scanf("%d", &pNewNode->stu.age);
	printf("������ѧ�ţ�\n");
	scanf("%d", &pNewNode->stu.num);
	printf("������C���Գɼ���\n");
	scanf("%d", &pNewNode->stu.score);
	printf("ѧ����Ϣ¼��ɹ�!\n");
	system("pause");
	system("cls");
}

//��ӡѧ����Ϣ 
void Print() 
{
	system("cls");
	Node* p = Head;
	if (p == NULL)
	 {
		printf("ϵͳ������ѧ����Ϣ����¼����Ϣ���ٲ鿴��\n\n");
	 }
	else 
	{
		printf("*********************************************************************************\n");
		printf("***********-------------��ӭʹ������ѧ����Ϣ����ϵͳ---------------**************\n");
		printf("*********************************************************************************\n");
		printf("*\tѧ��\t*  \t����\t  *  \t�Ա�\t*\t����\t*\tC���Գɼ�\t\n");
		printf("*********************************************************************************\n");
		while (p != NULL)
		{
			printf("*\t%d\t*\t%s\t*\t%s\t*\t%d\t*\t%d\t*\n",
				p->stu.num,
				p->stu.name,
				p->stu.sex,
				p->stu.age,
				p->stu.score);
			p = p->pNext;
			printf("*********************************************************************************\n");
		}
	}
	system("pause");
	system("cls");
}

//��ѯѧ����Ϣ 
void Find() 
{
	system("cls");
	int Num;
	printf("���������ѧ��ѧ�ţ�");
	scanf("%d", &Num);
	Node* p = Head;
	int S = 0;
	int F = 0;
	while (p != NULL)
	{
		if (Num == p->stu.num)
		 {
			if (!S) 
			{
				printf("*******************************************************************************\n");
				printf("*\tѧ��\t *  \t����\t  * \t�Ա�\t * \t����\t * \tC���Գɼ�\t * \n");
				printf("*******************************************************************************\n");
				S = 1;
			}
			printf("*\t%d\t*\t%s\t*\t%s\t*\t%d\t*\t%d\t*\n",
				p->stu.num,
				p->stu.name,
				p->stu.sex,
				p->stu.age,
				p->stu.score);
			F = 1;
			printf("***********************************************************************************\n");
		}
		p = p->pNext;
	}
	if (!F) 
	{
		printf("ϵͳ�����޸�ѧ����Ϣ�������������Ϣ�Ƿ���ȷ��\n\n");
	}
	system("pause");
	system("cls");
}


//�޸�ѧ����Ϣ
void Change() 
{
	int Num;
	printf("��������Ҫ�޸ĵ�ѧ��ѧ�ţ�");
	scanf("%d", &Num);
	Node* p = Head;
	int S = 0;
	int F = 0;
	while (p != NULL)
	{
		if (Num == p->stu.num)
		 {
			if (!S) {
				printf("*********************************************************************************\n");
				printf("*\tѧ��\t*\t����\t*\t�Ա�\t*\t����\t*\t�ɼ�\t*\n");
				printf("*********************************************************************************\n");
				S = 1;
			}
			printf("*\t%d\t*\t%s\t*\t%s\t*\t%d\t*\t%d\t*\n",
				p->stu.num,
				p->stu.name,
				p->stu.sex,
				p->stu.age,
				p->stu.score);
			printf("������ѧ��������\n");
			scanf("%s", p->stu.name, sizeof(p->stu.name));
			printf("�������Ա�\n");
			scanf("%s", p->stu.sex, sizeof(p->stu.sex));
			printf("������ѧ�����䣺\n");
			scanf("%d", &p->stu.age);
			printf("������ѧ�ţ�\n");
			scanf("%d", &p->stu.num);
			printf("������ɼ���\n");
			scanf("%d", &p->stu.score);
			F = 1;
			printf("*********************************************************************************\n");
			printf("ѧ����Ϣ�޸ĳɹ���\n\n");
		}
		p = p->pNext;
	}
	if (!F) 
	{
		printf("ϵͳ�����޸�ѧ����Ϣ���޷������޸ģ������������Ϣ�Ƿ���ȷ��\n\n");
	}
	system("pause");
	system("cls");
}

//ɾ��ѧ����Ϣ 
void Delete()
 {
	system("cls");
	int Num;
	printf("��������Ҫɾ����ѧ��ѧ�ţ�");
	scanf("%d", &Num);
	Node* p = Head;
	Node* beforeNode = Head;
	int S = 0;
	int F = 0;
	while (p != NULL)
	{
		if (Num == p->stu.num) 
		{
			if (!S)
			 {
				printf("*******************************************************************************\n");
				printf("*\tѧ��\t*\t����\t*\t�Ա�\t*\t����\t*\tC���Գɼ�\t*\n");
				printf("*******************************************************************************\n");
				S = 1;
			}
			printf("*\t%d\t*\t%s\t*\t%s\t*\t%d\t*\t%d\t*\n",
				p->stu.num,
				p->stu.name,
				p->stu.sex,
				p->stu.age,
				p->stu.score
			);
			F =1;
			printf("***********************************************************************************\n");
			if (p == Head) 
			{
				Head = p->pNext;
			}
			else if (p->pNext == NULL) 
			{
				p = beforeNode;
				p->pNext = NULL;
			}
			else 
			{
				beforeNode->pNext = p->pNext;
			}
			printf("ɾ���ɹ���\n");
		}
		beforeNode = p;
		p = p->pNext;
	}
	if (!F) 
	{
		printf("ϵͳ�����޸�ѧ����Ϣ���޷�����ɾ�������������������Ϣ�Ƿ���ȷ��\n");
	}
	system("pause");
	system("cls");
}

int main() 
{
	while (1)
	{
		Menu();
		char n = _getch();
		switch (n)
		{
		case '1':
		      Add();break;
		case '2':
	          Print();break;
		case '3':
		      Find();break;
		case '4':
		      Delete();break;
		case '5':
		      Change();break;		
		case '0':
		      return 0;break;
		default:
		    printf("������0-5֮�������\n\n");
			system("pause");  
			system("cls");   
			break;
		}
	}
	return 0;
}
