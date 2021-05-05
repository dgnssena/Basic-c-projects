#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
	
	int head;
};
int main(){
	int key;
	int head;
	struct node *addlast(struct node *head, int key);
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		
		
		temp->data= key;
		temp->next=NULL;
		struct node *temp2=(struct node*)malloc(sizeof(struct node));
		
		while(temp2->next!=NULL){
			temp2=temp2->next;
		temp2->next=temp;
		
		return head;
		}
		
	}
}

