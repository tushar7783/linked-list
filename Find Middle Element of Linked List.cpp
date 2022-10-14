#include <iostream>

using namespace std;

struct node{
	int data ;
	node *link;
};
void middle(){
	node*slow;
	node*fast;
	if(head==NULL){
		cout<<"empty list"
	}
	else{
		while(fast!=null&&fast->link!=NULL){
			slow=slow->link;
			fast=fast->link->link;
		}
	}
}
int main(){
	middle();
	return 0;
}
