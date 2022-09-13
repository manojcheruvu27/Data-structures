#include<iostream>
using namespace std; 
int main()
{
	int FirstUnsortedIndex, i, j,  array[100], size,k, newElement; 
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	cout<<"Enter the elements into the array"<<endl;
	for(k = 0; k<size;k++)
	{
		cin>>array[k];
	}
	//For the insertion sort logic, refer to notes
	for(FirstUnsortedIndex = 1; FirstUnsortedIndex<size - 1; FirstUnsortedIndex++)
	{
		newElement = array[FirstUnsortedIndex];
		for(i = FirstUnsortedIndex; i > 0 && array[i - 1] > newElement; i--)
		{
			array[i] = array[i - 1];
		}
		array[i] = newElement;
	}
	cout<<endl;
	for(j = 0; j < size; j++)
	{
		cout<<array[j]<<endl;
	}
}