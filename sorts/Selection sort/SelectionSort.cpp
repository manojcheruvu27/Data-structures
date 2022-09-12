#include<iostream>
using namespace std;
void swap(int[], int, int);
int main()
{
	int array[100], i,j, LastUnsortedIndex, size, largest;
	cout<<"Enter the size of the array "<<endl;
	cin>>size;
	cout<<"Enter the array ";
	for(i=0;i<size;i++)
	{
		cin>>array[i];
	}
	// For Selection sort logic refer to Selection sort notes
	for(LastUnsortedIndex = size - 1; LastUnsortedIndex > 0; LastUnsortedIndex--)
	{
		largest= 0;
		for(i=1; i <= LastUnsortedIndex; i++)
		{
			if(array[i] > array[largest])
			{
				largest = i;
			}
		}
		swap(array, largest, LastUnsortedIndex);
	}
	for(j=0; j<size; j++)
	{
		cout<<array[j]<<endl;
	}
	
}
void swap(int arr[], int i, int j)
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
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}