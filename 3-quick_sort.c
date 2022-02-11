** 
* swap - function to swap elements
* @a:
* @b:
*/
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

/* function to find the partition position */

int partition(int *array, int low, int high, size_t size)
{
  
  /* select the rightmost element as pivot */
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quicksort(int *array, int low, int high, size_t size) 
{	
	int pivot;

	if (low < high)
	{
    
    		/* find the pivot element such that */
    		/* elements smaller than pivot are on left of pivot */
    		/* elements greater than pivot are on right of pivot */
    		
		pivot = partition(array, low, high, size);
    
    		/* recursive call on the left of pivot */
    		
		quicksort(array, low, pivot - 1, size);
    
   		/* recursive call on the right of pivot */
   		
		 quickSort(array, pivot + 1, high, size);
	}


void quick_sort(int *array, size_t size)
/* perform quicksort on data* /
{  
	quicksort(array, 0, size - 1, size);
} 
