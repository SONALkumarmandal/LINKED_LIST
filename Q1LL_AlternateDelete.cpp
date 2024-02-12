#include <iostream>
using namespace std;
class node{
    public:
  int val;
  node* next;
  
  node(int value)
  {
      val=value;
      next=NULL;
  }
};
class LinkedList
{
    public:
    node* head;
    
    LinkedList()
    {
        head=NULL;
    }
    void insertAtTail(int val)
    {
        node* new_node=new node(val);
        if(head==NULL)
        {
            head=new_node;
            return;
        }
        else
        {
            node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new_node;
        }
    }
    void print()
    {
        node* temp2=head;
        while(temp2!=NULL)
        {
            cout<<temp2->val<<" ";
            temp2=temp2->next;
        }
    }
    void DeleteAlternate()
    {
        node* current_node=head;
        while(current_node!=NULL && current_node->next!=NULL)
        {
            node*temp=current_node->next;
            current_node->next=temp->next;
            free(temp);
            current_node=current_node->next;
        }
    }
};
int main() {
    LinkedList L;
    L.insertAtTail(1);
    L.insertAtTail(2);
    L.insertAtTail(3);
    L.insertAtTail(4);
    L.insertAtTail(5);
    L.DeleteAlternate();
    L.print();
    return 0;
}