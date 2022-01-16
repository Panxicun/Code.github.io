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

//菜单 
void Menu()
 {
	printf("**************************************************\n");
	printf("*********--------学生信息管理系统--------*********\n");
	printf("*********----------请选择功能------------*********\n"); 
	printf("**     1.录入学生信息   **   2.打印学生信息     **\n");
	printf("**     3.查询学生信息   **   4.删除学生信息     **\n");
	printf("**     5.修改学生信息   **   0.退出管理系统     **\n");
	printf("********------请输入正确的学生信息!------*********\n"); 
	printf("**************************************************\n");
}
Node* Head = NULL;

//添加学生信息 
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
	printf("请输入学生姓名：\n");
	scanf("%s", pNewNode->stu.name, sizeof(pNewNode->stu.name));
	printf("请输入性别：\n");
	scanf("%s", pNewNode->stu.sex, sizeof(pNewNode->stu.sex));
	printf("请输入年龄：\n");
	scanf("%d", &pNewNode->stu.age);
	printf("请输入学号：\n");
	scanf("%d", &pNewNode->stu.num);
	printf("请输入C语言成绩：\n");
	scanf("%d", &pNewNode->stu.score);
	printf("学生信息录入成功!\n");
	system("pause");
	system("cls");
}

//打印学生信息 
void Print() 
{
	system("cls");
	Node* p = Head;
	if (p == NULL)
	 {
		printf("系统中暂无学生信息，请录入信息后再查看。\n\n");
	 }
	else 
	{
		printf("*********************************************************************************\n");
		printf("***********-------------欢迎使用西邮学生信息管理系统---------------**************\n");
		printf("*********************************************************************************\n");
		printf("*\t学号\t*  \t姓名\t  *  \t性别\t*\t年龄\t*\tC语言成绩\t\n");
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

//查询学生信息 
void Find() 
{
	system("cls");
	int Num;
	printf("请输入查找学生学号：");
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
				printf("*\t学号\t *  \t姓名\t  * \t性别\t * \t年龄\t * \tC语言成绩\t * \n");
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
		printf("系统中暂无该学生信息，请检查输入的信息是否正确！\n\n");
	}
	system("pause");
	system("cls");
}


//修改学生信息
void Change() 
{
	int Num;
	printf("请输入需要修改的学生学号：");
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
				printf("*\t学号\t*\t姓名\t*\t性别\t*\t年龄\t*\t成绩\t*\n");
				printf("*********************************************************************************\n");
				S = 1;
			}
			printf("*\t%d\t*\t%s\t*\t%s\t*\t%d\t*\t%d\t*\n",
				p->stu.num,
				p->stu.name,
				p->stu.sex,
				p->stu.age,
				p->stu.score);
			printf("请输入学生姓名：\n");
			scanf("%s", p->stu.name, sizeof(p->stu.name));
			printf("请输入性别：\n");
			scanf("%s", p->stu.sex, sizeof(p->stu.sex));
			printf("请输入学生年龄：\n");
			scanf("%d", &p->stu.age);
			printf("请输入学号：\n");
			scanf("%d", &p->stu.num);
			printf("请输入成绩：\n");
			scanf("%d", &p->stu.score);
			F = 1;
			printf("*********************************************************************************\n");
			printf("学生信息修改成功！\n\n");
		}
		p = p->pNext;
	}
	if (!F) 
	{
		printf("系统中暂无该学生信息，无法进行修改，请检查输入的信息是否正确。\n\n");
	}
	system("pause");
	system("cls");
}

//删除学生信息 
void Delete()
 {
	system("cls");
	int Num;
	printf("请输入需要删除的学生学号：");
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
				printf("*\t学号\t*\t姓名\t*\t性别\t*\t年龄\t*\tC语言成绩\t*\n");
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
			printf("删除成功！\n");
		}
		beforeNode = p;
		p = p->pNext;
	}
	if (!F) 
	{
		printf("系统中暂无该学生信息，无法进行删除操作，请检查输入的信息是否正确！\n");
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
		    printf("请输入0-5之间的数字\n\n");
			system("pause");  
			system("cls");   
			break;
		}
	}
	return 0;
}
