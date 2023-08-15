#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct  node *next;
    
}Node;
struct queue
{
    Node* phead;
    Node* ptail;
};
typedef struct queue Queue;
void declare_queue(Queue &q)
{
    q.phead = NULL;
    q.ptail = NULL;
}
Node* declare_node(int x)
{
    Node* p = new Node();
    if (p == NULL)
    {
        printf("have not enough of memory");
        return NULL;
    }
    p->data = x;
    p->next = NULL;
    return p;
}
bool isEmpty(Queue q)
{
    if (q.phead == NULL)
    {
        return true;
    }
    return false;
}
bool Push(Queue &q, Node* p)
{
    if (p == NULL)
    {
        return false;
    }
    if (isEmpty(q) == true)
    {
        q.phead = p;
        q.ptail= p;
    }
    else
    {
        q.ptail->next = p;
        q.ptail = p;
    }
    return true;
}
bool Pop(Queue &q, int &x)
{
    if (isEmpty(q) == true)
    {
        return false;
    }
    else
    {
        Node*p = q.phead;
        x = p->data;
        q.phead = q.phead->next;
        delete p;
    }
    return true;
}
bool Top(Queue &q, int &x)
{
    if (isEmpty(q) == true)
    {
        return false;
    }
    x = q.phead->data;
    return true;
}
void output(Queue q)
{
    while(isEmpty(q) == false)
    {
        int x;
        Pop(q, x);
        printf("%d", x);
    }
}

int main()
{

}