#include<stdio.h>
typedef struct node
{
    int info;
    struct node* next;
}Node;
typedef Node* stack;
void init(stack &s)
{
    s = NULL;
}
void isEmpty(stack s)
{
    return s == NULL;
}
int Push(stack &s, int x)
{
    Node p = new Node;
    if (p == NULL) return 0;
    p->info = x;
    p->next = s;
    s = p;
    return 1;
}
int Pop(stack &s, int &x)
{
    if (isEmpty(s))
    {
        return 0;
    }
    Node p = s;
    x = p->info;
    s = s->next;
    delete p;
    return 1;
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
void solve(stack &s)
{
    int decimal;
    scanf("%d", &decimal);
    while(decimal != 0)
    {
        int m = decimal % 2;
        Node p = declare_node(x);
        Push(p, s);
        decimal = decimal / 10;
    }
}
void output(stack s)
{
    while(isEmpty(s) == true)
    {
        int x;
        Pop(s, x);
        printf("%d", x);
    }
}
int main()
{
    stack s;
    init(s);
    solve(s);
    output(s); 
}
