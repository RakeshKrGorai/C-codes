#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
}node;

node *start1=NULL, *start2=NULL, *temp, *temp1, *temp2, *smallest1, *smallest2, *newnode, *start3=NULL, *ptr1, *ptr2;

void create(node *start, node *newnode){
	if(start==NULL){
		start=newnode;
	}
	else{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void traverse(node *start){
	printf("Resulted List : ");
	temp=start;
	while(temp!=NULL){
		printf("%d ", temp->info);
		temp=temp->next;
	}
	printf("\n");
}

void sortMerge(){
	if(start1==NULL && start2==NULL){
		printf("Both Lists empty, there's nothing to sort. Add some elements and try again\n");
	}
	else if(start1==NULL && start2!=NULL){
		traverse(start2);
	}
	else if(start2==NULL && start1!=NULL){
		traverse(start1);
	}
	else{
		temp1=start1;
		temp2=start2;
		smallest1=temp2;
		//Finding smallest element in Linked List 1
		while(temp1!=NULL && temp2!=NULL){
			while(temp1!=NULL){
				ptr1=temp1;
				if(smallest1->info>temp1->info){
					smallest1=temp1;
					ptr1->next=temp1->next;
				}
				else{
					continue;
				}
				temp1=start1;
			}
			while(temp2!=NULL){
				ptr2=temp2;
				if(smallest2->info>temp2->info){
					smallest2=temp2;
					ptr2->next=temp2->next;
				}
				else{
					continue;
				}
				temp2=start2;
			}
			if((smallest1->info)>(smallest2->info)){
				smallest2->next=NULL;
				create(start3, smallest2);
				create(start3, smallest1);
			}
			else if((smallest1->info)<(smallest2->info)){
				smallest1->next=NULL;
				create(start3, smallest1);
				create(start3, smallest2);
			}
			traverse(start3);
		}

	}
}


//Driver code
int main(){
	int choice;
	while(1){
		printf("1. Add element to Linked List 1\n2. Add element to Linked List 2\n3. Sort\n4. Exit\nEnter your choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				newnode=(node *)malloc(sizeof(node));
				printf("Enter element to insert : ");
				scanf("%d", &newnode->info);
				newnode->next=NULL;
				create(start1, newnode);
				break;
			case 2:
				newnode=(node *)malloc(sizeof(node));
				printf("Enter element to inser : ");
				scanf("%d", &newnode->info);
				newnode->next=NULL;
				create(start2, newnode);
				break;
			case 3:
				sortMerge();
				break;
			case 4:
				return 0;
			default:
				printf("Wrong choice\n");
		}
	}
}

