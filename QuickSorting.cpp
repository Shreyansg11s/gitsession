#include<stdio.h>


namespace std;

//function to swap elements
void swap(int *a, int *b){
	
	int t = *a;
	
	*a = *b;
	
	*b =t;
	
	
}

//function to rearrange array (find the partician point or the key)

int partition(int array[], int min, int max){
	
	//Select the max element as the key
	int pivot = array[max];
	
	//Pointer for the max element
	int i = (min - 1);
	
	//traverse each element of the array and compare them with 
	//the pivot.
	
	for(int j = min; j < max; j++){
		
		if (array[j] <= pivot){
			
			//if element smaller than pivot is found 
			// swap it with the greater element pointed by i
			
			i++;
			
			// swap element at i with element at j
			
			swap(&array[i], &array[j]);
		}
	}
	
	
	return 
}


swap(&array[i + 1], &array[high]){
	
	
	return(i +1);
	}
	
	
void quickSort(int array[], int low, int high){
	
	if(low < high){
		
		int pi = partician(array, low, high)
	
	
	quickSort(array, pi + 1, high)
}
}

int main(){
	int data[] = {8, 7, 6, 1, 0, 9, 2};
	int n = sizeof(data)/ sizeof(data[0]);
	
	cout << "Unsorted Array: \n";
	
	printArray(data,n);
	
	quickSort(data, 0, n-1);
	
	cout << "Sorted array in ascending order: \n";
	
	printArray(data,n);
	
	return 0;
}

/*

Pseudo Code

If a[j] <Key(TRUE)

i++

a[i] & a[j] swap

j++

Else(Fasle)

j++ 

*/
