#include <iostream>

using namespace std;

struct node{
	int data ;
	node *link;
};
node *head= NULL; //global
//insert at beginning
void insertbeg(int d){
	node *ptr=new node(); //creating new node
	ptr->data=d;   //giving data to new node
	ptr->link=head;  //giving adreess to link linked list
	head=ptr;  
}
 void insertend(int d){
 	node ptr=new node();
 	ptr->data=d;
 	ptr->link=NULL;
 	if(head==NULL){  //list is empty
 		head=ptr;
	 }
	 else{
	 	node *temp=head;
	 	while(temp->link!=NULL){
	 		temp=temp->link;   //traversing the list
		 }
		 temp->link=ptr; //insert the last node  adress to the node link part
	 }
 }
 int main()
{
insertbeg(2);
 insertbeg(1);
 insertend(3);
 return 0;
}
