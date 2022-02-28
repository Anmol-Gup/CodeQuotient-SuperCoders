// Using Min Heap / Priority Queue

#include <stdio.h>
int swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void heapify(int minHeap[], int size, int i)
{
	if (i >= size / 2)
		return;
	int smallest;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	smallest = minHeap[left] < minHeap[i] ? left : i;
	if (right < size)
		smallest = minHeap[right] < minHeap[smallest] ? right : smallest;
	if (smallest != i) {
		swap(&minHeap[i], &minHeap[smallest]);
		heapify(minHeap, size, smallest);
	}
}

void buildHeap(int minHeap[], int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
	{
		heapify(minHeap, size, i);
	}
}

void findKthLargest(int arr[], int n, int k) 
{
    // take a min heap of size k
	int minHeap[k];
	
	for (int i = 0; i < n; i++)
	{
	    // For first k-1 elements we need to print the first element only
	    if (i < k - 1)
	    {
	        minHeap[i] = arr[i];
	    }
	    else if (i == k - 1)
	    {   
	        minHeap[i] = arr[i];
	        buildHeap(minHeap, k);
	    }
	    else
	    {
	        if (arr[i] > minHeap[0])
	        {
	            minHeap[0] = arr[i];
	            heapify(minHeap, k, 0);
	        }
	    }
	    
	    printf("%d ", minHeap[0]);
    }
}

int main()
{
	int arr[] = {2, 5, 1, 8, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	
    findKthLargest(arr, n, k);	
	
	return 0;
}
