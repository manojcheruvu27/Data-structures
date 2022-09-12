/* ********************************************
Author : Sai Manoj Cheruvu
Code : Bubble Sort
*/



#include<stdio.h>
#include<malloc.h>
void swap(int[], int, int);
int main()
{
	int size, array[10],i,x,y, LastUnsortedIndex;
	printf("Enter the size of the array ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	// For Bubble sort working, refer to notes
	for(LastUnsortedIndex = size-1; LastUnsortedIndex > 0; LastUnsortedIndex--)
	{
		for(x = 0; x < LastUnsortedIndex; x++)
		{
			if(array[x] > array[x+1])
			{
				swap(array, x, x+1);
			}
		}
	}
	for(y=0;y<size;y++)
	{
		printf("%d \t",array[y]);
	}
	
	
}
void swap(int array[], int i, int j)
{
	/* Method to swap elements
	   Working: 
	   Imagine there is coffee in one glass A and tea in another glass B. If we were to bring tea into glass A and coffee into glass B, then
	   we have to take an empty glass C, transfer coffee present in glass A into the empty glass C, then transfer the tea in glass B into the
	   glass A, then transfer the coffee in glass C into glass B
	   Here the empty glass C is temp, array[i] = coffee in glass A, array[j] = tea in glass B; */
	   
	int temp;
	if(i == j)
	{
		return;
	}
	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
