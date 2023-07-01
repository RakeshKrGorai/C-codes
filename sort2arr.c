#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
}node;

node *start1=NULL, *start2=NULL, *start3=NULL, *temp, *ptr, *ptr1;

node *create(node *start, int value);
void traverse(node *start);
void sort();

int main(){
	int choice, value;
	while(1){
		printf("1. Enter element in LL 1\n2. Enter element in LL 2\n3. Traverse\n4. Sort\n5. Exit\nEnter your choice : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Enter value to enter : ");
				scanf("%d", &value);
				start1=create(start1, value);
				break;
			case 2:
				printf("Enter value to enter : ");
				scanf("%d", &value);
				start2=create(start2, value);
				break;
			case 3:
				traverse(start1);
				traverse(start2);
				break;
			case 4:
				printf("Yo");
				sort();
			case 5:
				return 0;
			default:
				printf("Wrong choice\n");
		}
	}
}

node *create(node *start, int value){
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	newnode->info=value;
	newnode->next=NULL;
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
	return start;
}

void traverse(node *start){
	temp=start;
	while(temp!=NULL){
		printf("%d ", temp->info);
		temp=temp->next;
	}
	printf("\n");
}

void sort(){
	if(start1==NULL && start2==NULL){
		printf("Empty lists");
	}
	else{
		temp=start1;
		ptr=start2;
		while(temp!=NULL && ptr!=NULL){
			if(temp->info>ptr->info){
				ptr1=ptr;
				start3 = create(start3,ptr->info);
				ptr=ptr->next;
				free(ptr1);
			}
			else{
				ptr1=temp;
				start3 = create(start3, temp->info);
				temp=temp->next;
				free(ptr1);
			}
		}
		
		while(temp!=NULL){
			create(start3, temp->info);
			temp=temp->next;
		}
		while(ptr!=NULL){
			create(start3, ptr->info);
			ptr=ptr->next;
		}
	}
}


