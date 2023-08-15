/*
1.Viết chương trình quản lý danh sách sinh viên (sử dụng DSLKĐ), thông tin mỗi sv gồm: mã sv,  họ tên, điểm trung bình. Chương trình có các chức năng sau:

´Tạo 1 danh sách gồm n SV (n nhập từ bàn phím, thông tin của mỗi sv nhập từ bàn phím)

´Xuất danh sách sinh viên

´Xuất thông tin các sv có ĐTB>5

´Tìm sinh viên có tên là X

´Sắp xếp danh sách tăng theo ĐTB
*/
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char id[32];
    char name[32];
    int grade;
}Student;
typedef struct node
{
    Student data;
    struct node* next;
}Node;
typedef struct list
{
    Node *phead;
    Node* Tail;
}List;

void declare(List &document_student)
{
    document_student.phead = NULL;
    document_student.Tail = NULL; 
}
Node* declare_node(Student x)
{
    Node *p = new Node;
    if (p == NULL)
    {
        printf("have not enough memory\n");
        return NULL;
    }
    p->data = x;
    p->next = NULL;
    return p;
}
void Insert_last(List &document_student, Node* p)
{
    if (document_student.phead == NULL)
    {
        document_student.phead = p;
        document_student.Tail = p;
    }
    else
    {
        document_student.Tail->next = p;
        document_student.Tail = p;
    }
}
void output(List &document_student)
{
    for (Node* p = document_student.phead; p != NULL; p = p->next)
    {
        printf("%s \t %s \t %d\n ", p->data.id, p->data.name, p->data.grade);
    }
}
void search_student(List &document_student)
{
    printf("enter name that you search: ");
    char name_search[32];
    //gets(name_search);
    fgets(name_search, 32, stdin);
    for (Node* p = document_student.phead; p != NULL; p = p->next)
    {
        if (strcmp(p->data.name, name_search) == 0)
        {
            printf("%s \t %s \t %d\n ", p->data.id, p->data.name, p->data.grade);
        }
    }
}
void swap (Student &a, Student &b)
{
	Student tmp = a;
	a = b;
	b = tmp;
}
void output_5(List &document_student)
{
    Node* p = document_student.phead;
    while(p != NULL)
    {
        if(p->data.grade == 5)
        {
            printf("%s \t %s \t %d\n ", p->data.id, p->data.name, p->data.grade);
        }
        p = p->next;
    }
}
void sort(List document_student)
{
    Node*i = document_student.phead;
    while(i !=NULL)
	{
        Node* j = document_student.phead;;
		for(j; j !=NULL; j = j->next)
		{
			if(j->data.grade > i->data.grade)
				swap(j->data,i->data);
		}
		i = i->next;
	}
}
void input(int size_list, List &document_student)
{
    printf("enter information of students");
    for (int i = 0; i < size_list; i++)
    {
        Student info;
        printf("\nenter id of students: "); 
        fflush(stdin);
        //gets(info.id);
        fgets(info.id, 32, stdin);
        /*
        char ID = info.name;
        ID = getchar();
        */
        printf("\nenter name students: "); 
        fflush(stdin);
        //gets(info.name);
        fgets(info.name, 32, stdin);
        /*
        char NAME = info.name;
        NAME = getchar();
        */
        printf("\nenter grade of this student: ");
        scanf("%d", &info.grade);
        printf("\n \n");
        Node* p = new Node;
        p = declare_node(info);
        Insert_last(document_student, p);
    }
}
int main()
{
    int size_list;
    printf("The number of student in this document: ");
    scanf("%d", &size_list);
    printf("\n");
    List document_student;
    declare(document_student);
    input(size_list, document_student);
    ouput(document_student);
    output_5(List &document_student);
    
}