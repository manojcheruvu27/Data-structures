#include<stdio.h>
#include<malloc.h>
#include<conio.h>
// **********************************************************************************************
// Function declarations

void insert_start(int);
void insert_end(int);
void insert_at_loc(int);
void traverse();
void create(int);  
// **********************************************************************************************
// Node definition

struct node {
	int data;  // Data path
	struct node* next; // Self referential structure pointing to the next	
};
struct node *head; // Creation of head

// **********************************************************************************************

/* Function to traverse and display the elements in the linked list */
void traverse()
{
	struct node *ptr;
	ptr = head;
	if(ptr == NULL)   // If linked list does not xist, print that it des not exist
	{
		printf("The linked list does not exist\n");
		return;
	}
	while(ptr!=NULL)      // Until all the nodes are exhausted
	{
		printf("\t%d\n", ptr->data); // print the element
		ptr=ptr->next; // Go to the next element
	}
}
//**************************************************************************************************

/* Function to insert at the beginning of the linked list */

void insert_start(int value)
{
	struct node *ptr = (struct node*)malloc(sizeof(struct node*)); //Creation of the node
	if(ptr == NULL)	 // If the node is not created then print that the list is not created
	{
		printf("List is not created");
		return;
	}
	ptr->data=value; // If the list is created assign the data path to the value
	ptr->next=head; // Assign the next path to the head
	head=ptr; // Update head to this node
}

// *********************************************************************************************

void insert_end(int value)
{
	struct node *ptr = (struct node*)malloc(sizeof(struct node*)); // Create node
	struct node *temp;// Create a node for traversal
	if(ptr == NULL) // If the there is no linked list, print that there is no linked list
	{
		printf("The linked list does not exist \n");
		return;
	}
	ptr->data=value; // Assign the value to data path
	if(head == NULL) // If therer does not exist any node so fat
	{
		ptr->next=NULL; // Assign the next to NULL
		head=ptr; // Assign the head to ptr into which we have entered the data path earlier
		printf("Node has been inserted\n");
	}
	else{
		temp = head;  // If there exist nodes, assign the head to temp
		while(temp->next!=NULL)
		{
			temp=temp->next; // Traverse till you reach the last node, i.e next part of the node is NULL
		}
		temp->next=ptr; // Assign the next part of the temp to pointer
		ptr->next=NULL; // Now, assign the next part of pointer to NULL
		printf("The node has been inserted\n");
	}
	
}
// **************************************************************************************************************
// Function to insert the node at the given location

void create(int item)  
{  
      
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW\n");  
        }  
        else  
        {  
            ptr->data = item;  
            ptr->next = head;  
            head = ptr;  
            printf("\nNode inserted\n");  
        }  
}  
//******************************************************************************************************************
void insert_at_loc(int item)
    {  
        struct node *ptr = (struct node *) malloc (sizeof(struct node));  
        struct node *temp;  
        int i,loc;  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW");  
        }  
        else  
        {  
              
            printf("Enter the location");  
            scanf("%d",&loc);             
            ptr->data = item;  
            temp=head;  
            for(i=0;i<loc;i++)  
            {  
                temp = temp->next;  
                if(temp == NULL)  
                {  
                    printf("\ncan't insert\n");  
                    return;  
                }  
              
            }  
            ptr ->next = temp ->next;   
            temp ->next = ptr;   
            printf("\nNode inserted");  
        }  
          
    }  
		
/*  EXPLANATION TO LOGIC:

		        1000                 2000               4000
				|---|-----| 		|---|-----|			|---|-----|
				| 1 |2000 | ---->   | 2 |4000 |  ---->  | 4 |NULL |
				|---|-----|			|---|-----|			|---|-----|
				
		Suppose, this is a linked list with 1,2,4 at data paths and we 1000, 2000, 4000 as address paths and we need to inserr the following node in betweeen 2, 4
				
				1000                2000                 4000
				|---|-----| 		|---|-----|			|---|-----|
				| 1 |2000 | ---->   | 2 |4000 |  ---->  | 4 |NULL |
				|---|-----|			|---|-----|	   /\ 	|---|-----|	
												  /|\  
												   |
												   |
				3000                               |
				|---|-----|						   |
				| 3 |     |-------------------------
				|---|-----| 	
				
				Changes to be done for inserting the node: The next part for 2 has to be replaced by 3000
														  The next part for 3 has to be made 4000
									
				**************************************************************************************************************
				FIrstly by doing 	struct node *ptr = (struct node*)malloc(sizeof(struct node*));  // Creation of the node
 									struct node *temp; //Creation of the node temp
									we are creating 2 nodes ptr, temp
				**************************************************************************************************************
 				step 2: 			ptr->data=value; // Assign the data path of the pointer to the value to 3
 				**************************************************************************************************************
 									temp = head; // Assign the temp to head for traversal till the location
									for(i=0;i<loc;i++)
									{
										temp = temp->next; // Traverse till the location specified
										if(temp == NULL) // If the location specified does not exist, the print that it does not exist
										{	printf("Cannot insert at this location \n");
											return;
										}
												
										temp->next=ptr; // Assign the previous element's next to pointer
										printf("The node has been inserted\n");
									}	
 									By doing this, we we assign the head to the temp so that we can get the initial address to traverse
 									then, as we have the loc provided by the user, we traverse till the loc using temp
 									If the location doesnot exist, just print that it does not exist
 									in our example, 
 									head = 1000, 
 									now, 
 									temp = head which is temp = 1000;
 									loc = 3;
 									Now let us look at for loop iterations, 
 									First iteration 1<3:
 													temp -> 1000, go to 1000
 									Second iteration 2<3:
 													temp-> 2000, go to 2000
 									Third iteration, 3<3: Condition failed, so now temp is as follows
 									 |---|-----|
 									 | 2 |4000 |
 									 |---|-----|, 
									  
									  ptr as we have seen earlier is as follows, 
									  3000
									  |---|-----|
									  | 3 |-----|
									  |---|-----|
									
									now As the location exists,
 									 
 									 Now, by doing ptr->next=temp->next;, ptr is updated as follows
 									 |---|-----|
 									 | 3 |4000 |
 									 |---|-----|
 									 Therefore, in the changes to be made, the first change has been done
 									 
 									*****************************************************************************
 									 temp->next = ptr;
 									 therefore, updating the temp's next to ptr's address
 									 now, temp is as follows, 
 									 
 									 |---|-----|
 									 | 2 |3000 |
 									 |---|-----|
 									 Therefore, in the changes to be made, the second change has been done.
 									 
 	Therefore, the node has been inserted at the desired location */												
// *****************************************************************************************************************
void main()
{
	int choice;
	int val;
	int loc;
	while(1)
	{
		printf("Enter the choice \n");
		printf("1. Traverse \n");
		printf("2.Insert at the start \n");
		printf("3. Insert at the end \n");
		printf("4. Insert at a location\n");
		printf("Enter your choice \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: traverse(); break;
			case 2: printf("Enter the value to be inserted at the beginning: \n");
					scanf("%d",&val);
					insert_start(val);
					break;
			case 3: printf("Enter the value to be inserted at the last: \n");
					scanf("%d",&val);
					insert_end(val);
					break;
			case 4: printf("Enter the value to be inserted and location seperated by a single space: \n");
					scanf("%d",&val);
					insert_at_loc(val);
					break;
		}
	}
}