#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
void merge(int arr[], int start, int mid, int end)
{
	int *buff = malloc(sizeof(int));
	int i = start;
  	int	j = mid + 1;
	int k = start;

	if (buff == NULL)
		printf("Allocation failed\n");
	
	while (i <= mid && j <= end)
	{
		if (arr[i] < arr[j])
		{
			buff[k] = arr[i];
			i++;
		}
		else
		{
			buff[k] = arr[j];
			j++;
		}
		k++;
	}
	if (i > mid)
	{
		while (j <= end)
		{
			buff[k] = arr[j];
			j++;
			k++;
		}
	}
	else
	{
		while (i <= mid)
		{
			buff[k] = arr[i];
			i++;
			k++;
		}
	}
	k = start;
	while(k <= end)
	{
		arr[k] = buff[k];
		k++;
	}
	free(buff);
}
/**
 *
 *
 *
 *
 *
 */
void merge_sort(int arr[], int start, int end)
{
	int mid;

	if (start < end)
	{
		mid = (start + end)/2;
		merge_sort(arr, start, mid);
		merge_sort(arr, mid + 1, end);
		merge(arr, start, mid, end);
	}
}
/**
 *
 *
 *
 */
void display(int arr[], int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

/**
 *
 *
 *
 *
 */
int main(void)
{
	int arr[] = {7, 9, 11, 13, 15, 17, 19, 1, 3, 5, 2, 20, 18, 14, 16, 8, 6, 12, 4, 10};
	int size = sizeof(arr)/sizeof(int);
	
	printf("not sorted\n");
	display(arr, size);
	merge_sort(arr, 0, size-1);
	printf("sorted\n");
	display(arr, size);
	return 0;
}
