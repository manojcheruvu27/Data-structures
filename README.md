



# DATA STRUCTURES THROUGH C

👋 For all the enthusiastics wanting to learn Data Structures👨‍💻, find the code references in the code section of this repository.

 
![Classification-of-data-structures](img/classification.jpg)
### Primitive Data structures  
They are the data structures provided by the language also known as primitive data types.  
Ex: int, float, char, list, array.  
#### Non Primitive Data Structures  
Data Structures created using Primitive Data Structures are called as non primitive data structures.  
Ex: Stack, Queue.  
### Linear  
Data is arranged in contiguous memory blocks.  
Ex: Stack  
### Non-Linear  
Data is arranged in a hierarical manner i.e., Parent-child relationship between the data.  
Ex: Graphs, trees  

## Arrays ["✌","😂","😝","😁","💛","💚"]
1) Arrays are the homogeneous mixture of data stored in a contiguous blocks of memory and given a common label.
2) Homogeneous refers to all the property that states that all the elements in the array must be of the same data type.
3) Contiguous blocks of memory refers to the nature of array that stores all the elements in the continuous blocks of memory.
Let me use a small analogy to explain the contiguous blocks of memory storage.  
Say there is  an array  
int example_array[4] = {1,2,3,4};  
Here, there are 4 elements in the array, they are stored in the memory block as follows. 


| 100      | 104           | 108  | 112 |
|:-------------:|:-------------:|:-----:|:-----:|


As the integer type in C language consumes 4 bytes, the first element consumed 4 bytes of memory so on and so forth  
4) Arrays are primitive data structures.  
5) Say there are five employee id's  that needs to be stored, normal variables wouldn't finish the job. Therefore, we make use of arrays in such scenarios.  
6) Declaration of an array: datatype arrayname[Size].  
Ex: int employee[5].  
7) Address of data element, A[k] = BA(A) + w(k – lower_bound)  
Here, A is the array, k is the index of the element of which we have to calculate the address, BA is
the base address of the array A, and w is the size of one element in memory, for example, size of
int is 2.  
8) Calculating the length of the array.  
Length = upper_bound – lower_bound + 1  
where upper_bound is the index of the last element and lower_bound is the index of the first element
in the array.  
9) initializing the array datatype array_name[Size] = {Elements,list}  
10) Collecting input from the keyboard, let us consider the employees analogy.  
```c
#include<stdio.h>
#define size 5  // Defining size
int main()
{
   int employee[size]; // Array Initialization
   for(i=0;i<=size;i++)
   {
     scanf("%d",&employee[i]); 
   }
 }

 /* Working logic of the for loop, 
 iteration 1: i=0;
 0 < 5, therefore enters the body of the for loop;
 scanf("%d",&employee[0]);, We are storing the input at the first location of the array;
.
.
.
.
iteration 6: i = 6;
6<5 is not true, therefore control exists the for loop.
*/
```
11) Say, we need to print the employee ids, the working is same as taking input, except for the usage of printf in the place of scanf

```c
#include<stdio.h>
#define size 5  // Defining size
int main()
{
   int employee[size]; // Array Initialization
   for(i=0;i<=size;i++)
   {
     printf("%d",employee[i]); 
   }
 }

 /* Working logic of the for loop, 
 iteration 1: i=0;
 0 < 5, therefore enters the body of the for loop;
 printf("%d",&employee[0]);, We are printing the id at the first location of the array;
.
.
.
.
iteration 6: i = 6;
6<5 is not true, therefore control exists the for loop.
*/
```
