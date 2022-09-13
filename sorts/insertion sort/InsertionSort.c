#include<stdio.h>
void main()
{
	int FirstUnsortedIndex, i, array[100],size, j, newElement;
	printf("Enter the size of the array \n");
	scanf("%d",&size);
	printf("Enter the elements: \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	for(FirstUnsortedIndex = 1; FirstUnsortedIndex < size-1; FirstUnsortedIndex++)
	{
		newElement = array[FirstUnsortedIndex];
		for(i=FirstUnsortedIndex; i > 0 && array[i - 1] > newElement; i--)
		{
			array[i] = array[i - 1];
		}
		array[i] = newElement;
	}
	for(j = 0; j<size; j++)
	{
		printf("%d \t", array[j]);
	}
}