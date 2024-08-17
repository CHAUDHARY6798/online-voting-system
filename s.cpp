#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *ptr)
{
    while (ptr != nullptr)
    {
        cout<<"element"<< ptr->data<<endl;
        ptr = ptr->next;
    }
}
int lengthofll(node* head) {
    int length = 0;
    node* current = head;
    
    // Traverse the list and count the number of nodes
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    return length;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    forth=(struct node *)malloc(sizeof(struct node));
    head->data = 78;
    head->next = second;
    second->data = 66;
    second->next = third;
    third->data = 56;
    third->next = forth;
    forth->data=98;
    forth->next=nullptr;
    int length=lengthofll(head);
   cout<<"length of ll is"<<length;
    return 0;
}
