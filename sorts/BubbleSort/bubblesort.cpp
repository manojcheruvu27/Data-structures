/* Algorithm Bubble Sort Implimentation
Author: Sai Manoj Cheruvu
*/

#include<iostream>
using namespace std;
void swap(int arr[],int i, int j);
int main(){
	int array[100], size,i=0, x=0, k=0, lastunsortedindex = 0, temp = 0;
	cout<<"Enter the size of the array ";
	cin>>size;
	cout<<"Enter the array ";
	for(i=0; i<=size-1;i++)
		{
			cin>>array[i];
		}
		// For the Bubble sort logic refer to notes
		for(lastunsortedindex = size-1;lastunsortedindex>0;lastunsortedindex--)
		{
			for(x=0;x<lastunsortedindex;x++)
			{
				if(array[x]>array[x+1])
				{
					/* swap Logic
					Working: 
					Imagine there is coffee in one glass A and tea in another glass B. If we were to bring tea into glass A and coffee into glass B, then
					we have to take an empty glass C, transfer coffee present in glass A into the empty glass C, then transfer the tea in glass B into the
					glass A, then transfer the coffee in glass C into glass B
					Here the empty glass C is temp, array[i] = coffee in glass A, array[j] = tea in glass B; */
					temp = array[x];
					array[x] = array[x+1];
					array[x+1]=temp;
				}
			}
		}
		cout<<"Values after sorting:"<<endl;
		for(k =0; k<=size-1;k++)
		{
			cout<<array[k]<<endl;
		}
		return 0;
		
}
