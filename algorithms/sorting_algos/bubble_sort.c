#include <stdio.h>
/**
 *
 *
 *
 */

void swapp(int arr[], int a, int b)
{
	int temp;

	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

/**
 *
 *
 *
 *
 *
 *
 */
void bubble(int arr[], int n)
{
	int i = n-1;

	while (i > 0)
	{
		if (arr[i] < arr[i - 1])
		{
			swapp(arr, i, i - 1);
		}
		i--;
	}
}

/**
 *
 *
 *
 *
 */
void bubble_sort(int arr[], int n)
{
	int i = 0;

	while (i < n - 1)
	{
		bubble(arr, n);
		i++;
	}
}

/**
 *
 *
 *
 *
 *
 *
 */
void display(int arr[], int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
}

/**
 *
 *
 *
 *
 *
 */
int main(void)
{
	int arr[] = {12, 101, 789, 365, 9, 16, 413, 1251, 13399, 3935, 19};
	int size = sizeof(arr)/sizeof(int);

	printf("unsorted\n");
	display(arr, size);
	bubble_sort(arr, size);
	printf("sorted\n");
	display(arr, size);
	return 0;
}
