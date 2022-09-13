import java.util.Scanner;
class InsertionSort
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
		// For insertion sort theory refer to Insertion Sort notes
		for(int FirstUnsortedIndex = 1; FirstUnsortedIndex < array.length ; FirstUnsortedIndex++)
		{
			int newElement = array[FirstUnsortedIndex];
			int i;
			for(i = FirstUnsortedIndex; i > 0 && array[i - 1] > newElement; i--)
			{
				array[i] = array[i - 1];
			}
			array[i] = newElement;
		}
		for(int element: array)
		{
			System.out.println(element);
		}
	}
}