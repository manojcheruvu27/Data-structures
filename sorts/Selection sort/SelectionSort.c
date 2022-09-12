/* ********************************************
Author : Sai Manoj Cheruvu
Code : Bubble Sort
*/
#include<stdio.h>
#include<malloc.h>
void swap(int[],int,int);
void main()
{
	int size, array[10],i,k, LastUnsortedIndex, largest;
	printf("Enter the size of the array ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	// For selection sort logic refer to selection sort notes
	for(LastUnsortedIndex = size - 1; LastUnsortedIndex > 0; LastUnsortedIndex--)
	{
		largest = 0;
		for(i=1;i<=LastUnsortedIndex;i++)
		{
			if(array[i]>array[largest])
			{
				largest = i;
			}
		}
		swap(array, largest,LastUnsortedIndex);
	}
	for(k=0;k<size;k++)
	{
		printf("%d \t",array[k]);
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
	if( i == j)
	{
		return;
	}
	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
	
}