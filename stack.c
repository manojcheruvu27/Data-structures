#include<stdio.h>
#include<conio.h>
// Global variable declarations, Function declarations
int x, top=-1, n, i, stack[100], choice;
void push(int);
void pop(void);
void display(void);
// ***********************************************************************************************
// Function to push the elemnt into the stack
void push(int item)
{
	if(top>=n-1)
	{
		printf("Stack overflow\n"); // If top is greater than size then print overflow
		
	}
	else                   // If there is no overflow
	{
		top++;            // Increment the top by 1 
		stack[top]=item;  // store the item in the current top
	}
}

// Explanation to the logic
/* Let the size of the stack be 4

	 _______
	|       |        
	|		|
	|-------|
	|		|	Let this represent stack and  <- represent the top
	|		|
	|-------|
	|		|
	|		|
	|-------|
	|		|
	|		|
	|-------|
	
	
    |-----|
	|PUSH:|
	|-----|
	
	initially top is at -1;
	
	
	 Push 1             Push 2             Push 3            Push 4          Push 5 [OVERFLOW]
	 ________          ________            ________			_________        _________
	|       |         |		  |			  |		  |		   |		|		|		 |
	|		|		  |		  |			  |		  |        |	4	|<-		|	 4	 |<- Here, top = size - 1, i.e 4-1=3, therefore stack overflow on further insertions
	|-------|		  |-------|			  |-------|		   |--------|		|--------|
	|		|		  |		  |			  |		  |		   |		|		|		 |
	|		|		  |		  |			  |	  3	  |<-	   |    3	|		|	 3	 |
	|-------|		  |-------|			  |-------|		   |--------|		|--------|
	|		|		  |		  |			  |		  |		   |		|		|		 |
	|		|		  |	 2	  |<-		  |	  2	  | 	   |    2	|		|	 2	 |
	|-------|		  |-------|			  |-------|		   |--------|		|--------|
	|		|		  |		  |			  |		  |		   |		|		|		 |
	|   1	|<- 	  |	 1	  |			  |	  1	  |		   |	1	|		|	 1	 |
	|-------|		  |-------|			  |-------|		   |--------|		|--------|
	 top = 0           top = 1             top= 2           top = 3           top = 3
	 
	 While inserting,
	->Initially, we are checking if the top eqials size-1, i.e overflow, if not overflown technique to store the value in the stack is as follows
	->we are inserting the element at the position and then top++, for reaching the next location, therefore the logic is as follows 
	 	top++;  ,_ For getting into the next location          
		stack[top]=item; <- For storing the element at that location
	*/	
	
//*************************************************************************************************
// Function to pop the elements from the stack
void pop()
{
	if(top <= -1)
	{
		printf("Stack is empty\n");
	}
	else{
		printf("Popped element is %d\n", stack[top]);
		top--;
	}
}

/*  Explanation to logic:

    |-----|
	|POP: |
	|-----|
	
		
  Current-stack         POP                  POP               POP             POP[UNDERFLOW]
	 ________          ________            ________			_________        _________
	|       |         |		  |			  |		  |		   |		|		|		 |
	|	4	|<-		  |		  |			  |		  |        |		|		|	 	 |
	|-------|		  |-------|			  |-------|		   |--------|		|--------|
	|		|		  |		  |			  |		  |		   |		|		|		 |
	|	3	|		  |	 3	  |<-		  |	  	  |		   |    	|		|	 	 |
	|-------|		  |-------|			  |-------|		   |--------|		|--------|
	|		|		  |		  |			  |		  |		   |		|		|		 |
	|	2	|		  |	 2	  |			  |	  2	  |<-	   |    	|		|	 	 |
	|-------|		  |-------|			  |-------|		   |--------|		|--------|
	|		|		  |		  |			  |		  |		   |		|		|		 |
	|   1	|		  |	 1	  |			  |	  1	  |		   |	1	|<-		|	 	 |
	|-------|		  |-------|			  |-------|		   |--------|		|--------|
	 top = 3           top = 2              top = 1           top = 0        top = -1<- Here, top = -1, therefore the stack is underflow
	 
	 While popping the element, 
	 we will first make sure there are elements, if there are no elements, we will just print the underflow, as the initial condition is top = -1, when top = -1 the stack is empty so when we try to print values from empty stack we'll print underflow, i.e top = -1
	 If there are elements in the stack, the underflow condition is as follows: 
	 printf("Popped element is %d\n", stack[top]); <- This line prints the popped element
	 top--; <- By doing top--, we are changing the top to previous location.
	 
	 
	 */
	
//**************************************************************************************************
// Function to display the elements in the stack
void display()
{
	if(top>=0){
		for(i=top;i>=0;i--)
		{
			printf("\t %d \n",stack[i]);
		}
	}
}

 /* Explanation to logic:
 	|---------|
	|Display: |
	|---------|
	
	 ________          
	|       |         
	|	4	|<-		  
	|-------|		  
	|		|		  
	|	3	|		  
	|-------|		  
	|		|		  
	|	2	|		  
	|-------|		  
	|		|		 
	|   1	|		  
	|-------|		  
	 top = 3
	 
	 
	if(top>=0){
		for(i=top;i>=0;i--)
		{
			printf("\t %d \n",stack[i]);
		}
     }
     
     Here, top = 3, therefore the execution of for loop will begin
     
    iteration 1: i = 3, 3 >= 0:  print(stack[3]), therefore 4 is printed; i--;
    iteration 2: i = 2, 2 >= 0:  print(stack[2]), therefore 3 is printed; i--;
    iteration 3: i = 1, 1 >= 0:  print(stack[1]), therefore 2 is printed; i--;
    iteration 4: i = 0, 0 >= 0:  print(stack[0]), therefore 1 is printed; i--;
    iteration 5: i = 3, -1 > 0: Condition does not satisfy, thereby the loop is exited
	  
	
*/

//**************************************************************************************************
void isFull()
{
	if(top == n-1)
	{
		printf("The stack is full\n"); // The stack is said to be full when the top equals n-1
	}
	else{
	printf("Stack is not full\n");
    }
}
/* Explanation to logic:
 	|---------|
	|isFull:  |
	|---------|
	
	 ________          
	|       |         
	|	4	|<-		  
	|-------|		  
	|		|		  
	|	3	|		  
	|-------|		  
	|		|		  
	|	2	|		  
	|-------|		  
	|		|		 
	|   1	|		  
	|-------|		  
	 top = 3
	 
	 In this case, top = n-1, i.e 4-1 = 3, therefore we conclude that the stack is full
	 
     ________          
	|       |         
	|		|	  
	|-------|		  
	|		|		  
	|	3	|<-		  
	|-------|		  
	|		|		  
	|	2	|		  
	|-------|		  
	|		|		 
	|   1	|		  
	|-------|		  
	 top = 2
 Here, n-1 = 4-1 = 3, but the top is at 2, therefore we can conclude that the stack is not full
 */
 //***********************************************************************************************************************

void isEmpty()
{
	if(top == -1)
	{
		printf("The stack is not empty\n"); // The stack is said to be empty when the top equals -1;
	}
	else{
	printf("The stack is not empty\n");
	}
}

/* Explanation to logic:
 	|---------|
	|isEmpty: |
	|---------|
	
	 ________          
	|       |         
	|		|<-		  
	|-------|		  
	|		|		  
	|		|		  
	|-------|		  
	|		|		  
	|		|		  
	|-------|		  
	|		|		 
	|   	|		  
	|-------|		  
	 top = -1
	 
	 In this case, top = -1, therefore we conclude that the stack is Empty
	 
     ________          
	|       |         
	|		|	  
	|-------|		  
	|		|		  
	|	3	|<-		  
	|-------|		  
	|		|		  
	|	2	|		  
	|-------|		  
	|		|		 
	|   1	|		  
	|-------|		  
	 top = 2
 Here, top is at 2 not at -1, therefore we can conclude that the stack is not Empty
 */
// ****************************************************************************************************

void main()
{
	top = -1; //Initial condition, top = -1
	printf("Enter the size of the array: \n");
	scanf("%d",&n); // Storing the size of array in n
	printf("1.Push\n");
	printf("2.Pop\n");
	printf("3.display\n");
	printf("4.isFull\n");
	printf("5.isEmpty\n");
	printf("6.Exit\n");
	do{
		printf("Enter the choice\n");
		scanf("%d",&choice); // Take the choice for the switch case
		switch(choice)
		{
			case 1: printf("Enter the value to be pushed\n"); scanf("%d",&x); push(x); break; //Calling push()
			case 2: pop(); break; // Calling pop()
			case 3: display(); break; // Calling display()
			case 4: isFull(); break; // Calling isFull()
			case 5: isEmpty(); break;// Calling isEmpty()
			default: printf("Enter between 1, 2, 3, 4, 5 or 6"); // If the user does not enter the correct option
		}
		
	}while(choice != 6);
}