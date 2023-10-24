def bubble(arr, i):
	for j in range(0,  len(arr) - 1):
			if arr[j] > arr[j + 1]:
				arr[j], arr[j + 1] = arr[j + 1], arr[j]


def bubblesort(arr):
	i = 0
	while (i < len(arr)):
		bubble(arr, i)
		i = i +1
	return arr



arr = [9, 8, 4, 6, 19, 1, 2, 5, 7, 3]

print(arr)
sorte = bubblesort(arr)
print(sorte)

