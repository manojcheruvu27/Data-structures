//Headers and Function declarations
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void push();
void pop();
void display();
void isFull();
void isEmpty();
//******************************************************************************
// Node definition
struct node{
	int val;
	struct node *next;
};
struct node *head;
//******************************************************************************
void push(){
	int item;
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("The item cannot be pushed\n");
		return;
	}
	printf("Enter the value \n");
	scanf("%d",&item);
	if(head == NULL)
	{
		ptr->val=item;
		ptr->next=NULL;
		head=ptr;
	}
	else{
		ptr->val=item;
		ptr->next=head;
		head=ptr;
		
	}
	printf("Item is pushed\n");
	
}
//********************************************************************************
//Function to display the elements in the stack
void display()
{
	int i;
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("Stack is empty\n");
	}
	else{
		printf("Printing the elements\n");
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->val);
			ptr=ptr->next;
		}
	}
}
//***********************************************************************************
//Function to pop the element from the stack
void pop()
{
	struct node *ptr;
	int item;
	if(head == NULL)
	{
		printf("Stack underflow\n");
	}
	else
	{
		item = head->val;
		ptr = head;
		head = head->next;
		free(ptr);
		printf("Item is popped\n");
	}
}
//************************************************************************************
void main()
{
	int choice;

	do{
			printf("Enter your choice\n");
	    	printf("1.Push\n");
			printf("2.Pop\n");
			printf("3.Display\n");
			printf("4.Exit\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1: push(); break;
				case 2: pop(); break;
				case 3: display(); break;
				case 4: break;
				default: printf("Enter the choices between 1,2,3,4");
			}
	}while(choice != 4);
}