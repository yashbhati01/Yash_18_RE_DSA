#include <stdio.h>
#include <stdlib.h>

int pivot, low, high, a[50], n;

void quick_sort();	// Quick Sort function declaration
void swap();	// Swap function declaration

void quick_sort(int low, int high)	    // Quick Sort Function Definiton
{
   	int i,j;
	pivot = a[low];
	i = low + 1, j = high;
	if(low < high)
	{
		while(1)
		{
			while(a[j] > pivot)
				j--;
			while(i<=high && a[i] < pivot)
				i++;

			if(i < j)
				swap(&a[i],&a[j]);
			else
				break;
		}
		swap(&a[low], &a[j]);
		quick_sort(low,j-1);
		quick_sort(j+1,high);
	}
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
	{
		printf("\nEnter the size of array: ");		
		scanf("%d",&n);

		printf("\nEnter the elements of array: ");
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}

		quick_sort(0,n-1);

		printf("\nElements after quick sort: ");
		for(int i = 0; i < n; i++)
		{
			printf(" %d ", a[i]);
		}
		printf("\n");

		return 0;
	}