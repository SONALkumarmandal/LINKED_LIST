#include <iostream>
using namespace std;
class node
{
    public:
 int val;
 node* next;
 
 node(int data)
 {
     val=data;
     next=NULL;
 }
};
void insertathead(node* &head,int num)
{
    node* new_node=new node(num);
    new_node->next=head;
    head=new_node;
}
void insertatend(node* &head,int number)
{
    node* temp2=head;
    node* new_node2=new node(number);
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=new_node2;
}
void insertatposition(node* &head,int num2,int position)
{
    int count=0;
    node* temp3=head;
    node* new_node3=new node(num2);
    if(position==0)
    {
        insertathead(head,num2);
        return;
    }
    while(count!=position-1)
    {
        temp3=temp3->next;
        count++;
    }
    new_node3->next=temp3->next;
    temp3->next=new_node3;
}
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main() {
   node* head=NULL;
   insertathead(head,5);
   insertatend(head,4);
   insertatend(head,6);
   insertatposition(head,2,0);
   cout<<"the LINKED LIST is : "<<" ";
   print(head);
    return 0;
}