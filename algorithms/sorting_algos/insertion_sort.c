#include <stdio.h>
/**
 *
 *
 *
 *
 */
void insert_at_i(int arr[], int i)
{
	int key = arr[i];
	int j = i - 1;

	while (j >= 0 && arr[j] > key)
	{
		arr[j+1] =arr[j];
		j--;
	}
	arr[j+1] = key;
}

void ins_sort(int arr[], int n)
{
	int i = 0;

	while (i < n)
	{
		insert_at_i(arr, i);
		i++;
	}
}

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

int main(void)
{
	int arr[] = {74, 12, 36, 10, 45, 69, 99, 82, 29, 56};
	int size = sizeof(arr)/sizeof(int);

	printf("unsorted\n");
	display(arr, size);
	ins_sort(arr, size);
	printf("sorted\n");
	display(arr, size);
	return 0;
}
