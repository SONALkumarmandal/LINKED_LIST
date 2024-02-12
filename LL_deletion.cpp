#include <iostream>
using namespace std;
class node
{
    public:
  int val;
  node* next;
  
  node(int value)
  {
      val=value;
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

void DeleteElement(node* &head,int index)
{
    if(index==0)
    {
       node* tempD1=head;
        head=head->next;
        free(tempD1);
    }
 else
 {
      node* temp=head;
  int count=0;
  while(count<index-1)
  {
      temp=temp->next;
      count++;
  }
  node* tempD=temp->next;
 temp->next=temp->next->next;
 free(tempD);
 }
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
   cout<<"The linked list is : "<<" ";
   insertathead(head,5);
   insertatend(head,7);
   insertatposition(head,6,1);
   insertatend(head,7);
   DeleteElement(head,3);
   print(head);
    return 0;
}