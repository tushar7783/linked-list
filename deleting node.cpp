#include <iostream>

using namespace std;

struct node{
	int data ;
	node *link;
};
node *head= NULL; //global
//delete the beg node
void deletebeg(){
  if(head==NULL){      //empty list
	cout<<"empty list";
}
   else{
	node *ptr=head;
	head=head->link;
	free(ptr);
}	
}
////delte the end node
void deleteend(){
	node*ptr,*prev;
	if(head==null){             //empty list
		cout<<"empty list";
	}
	else if(head->link==NULL){    //for one node
		ptr=head;
		head=NULL;
	    free(ptr);
	}
	else{                     //for more than one node
		ptr=head;
		while(ptr->link==NULL){
			prev=head;
			ptr=ptr->link;
		}
		prev->link=NULL;
		free(ptr);
	}
}

int main()
{
	deletebeg();
	deleteend();
	

 return 0;
}
