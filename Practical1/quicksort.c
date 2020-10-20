/* C implementation QuickSort */
#include<stdio.h> 

// A utility function to swap two elements 
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

//  {10, 7, 8, 9, 1, 5}; 
// pivot=5 a[i]=10 arr[high]=5
// 
int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high- 1; j++) 
	{ 
		// If current element is smaller than the pivot 
		if (arr[j] < pivot) 
		{ 
		    printf("%d %d\n",arr[j],pivot);
			i++; // increment index of smaller element 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	printf("%d %d",arr[i+1],arr[high]);
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 


void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int pi = partition(arr, low, high); 

		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	
} 

// Driver program to test above functions 
int main() 
{ 
	int arr[] = {10, 7, 8, 9, 1, 5}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
// 	quickSort(arr, 0, n-1); 
	partition(arr,0,n-1);
	printf("Sorted array: "); 
	printArray(arr, n-1); 
	return 0; 
} 

