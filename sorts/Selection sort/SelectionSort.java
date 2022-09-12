import java.util.Scanner;
class SelectionSort
{
	public static void main(String[] args)
	{
		//Collection of data
			/*	To collect the data as an input from the user, remove these comments
				
				int array[] = new int[10];
				Scanner in = new Scanner(System.in);
				System.out.println(Ënter the size of array:");
				int n = in.nextInt();
				System.out.println(" Enter the elements:");
				for(int i=0;i<n;i++)
				{
					array[i] = in.nextInt();
				}
				
			*/
			
			// Hard coding
			int array[] = {20,35,-15,7,55,-1,-22};
			//For SelectionSOrt logic refer to notes
			for(int LastUnsortedIndex = array.length - 1; LastUnsortedIndex > 0; LastUnsortedIndex--)
			{
				int largest = 0;
				for(int i = 1; i <= LastUnsortedIndex; i++)
				{
					if(array[i] > array[largest])
					{
						largest = i;
					}// if array[i] > array[largest]
				} // inner- for loop
				swap(array, largest, LastUnsortedIndex);
			}//outer for
			
			// Printing elements in the sorted array using for each loop
		
			for(int element : array)
			{
				System.out.println(element);
			}// for
	}//main
		public static void swap(int[] array, int i, int j)
	
	{ 
	/* Method to swap elements
	   Working: 
	   Imagine there is coffee in one glass A and tea in another glass B. If we were to bring tea into glass A and coffee into glass B, then
	   we have to take an empty glass C, transfer coffee present in glass A into the empty glass C, then transfer the tea in glass B into the
	   glass A, then transfer the coffee in glass C into glass B
	   Here the empty glass C is temp, array[i] = coffee in glass A, array[j] = tea in glass B; */
	   
		if(i == j)
		{
			return;
		}// if i == j
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}//Void swap
} // class - SelectionSort