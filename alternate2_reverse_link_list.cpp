#include<stdlib.h>
#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

struct node * create_list()
{
	
   struct node *temp=NULL,*head=NULL,*prev=NULL;
   char ch;
   do
   {
   prev=temp;	
   temp=(struct node *)malloc(sizeof(struct node));
   if(temp!=NULL)
   {
   	   temp->next=NULL;
   	   cout<<"\n\t Enter value in node : -";
   	   cin>>temp->data;
   	   if(head==NULL)
   	      head=temp;
   	      else
   	      prev->next=temp;
   }
   else
   {
   	   cout<<"\n\t Error in memory allocation\n\n";
   	   return NULL;
   }
    cout<<"\n\t Do you want to stop next node (y/n): - ";
    cin>>ch;
    
    if(ch=='y'||ch=='Y')
        break;
        
  }while(3);
  
  return head; 		
}

void print_list(struct node *head)
{
   if(head!=NULL)
   {
      cout<<"--> "<<head->data;
	  print_list(head->next); 	
   }	
}

struct node * alternate_reverse_list(struct node *head)
{
	struct node *temp=NULL;
	
	if(head==NULL || head->next==NULL)
	   return head;
	 else
	 {
	 	temp=head->next;
	 	head->next=temp->next;
	 	temp->next=head;
	 	head=temp;
	    head->next->next=alternate_reverse_list(head->next->next);  
	 } 
	 return head; 
}

int main()
{
	struct node *head=NULL;
	head=create_list();
	
	cout<<"\n\n\t\t List content before reversing\n\n\t";
	print_list(head);
	head=alternate_reverse_list(head);
	cout<<"\n\n\t\t List content after reversing\n\n\t";
	print_list(head);
	return getchar();
}
