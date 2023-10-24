def insert_at(arr, i):
	key = arr[i]
	j = i - 1
	while (j >= 0 and arr[j] > key):
		arr[j+1] = arr[j]
		j = j-1
	arr[j+1] = key



def ins_sort(arr): 
	for i in range(len(arr)):
		insert_at(arr, i)
	return arr

arr = [3, 6, 7, 1, 5, 2, 4, 9, 8, 4]
print(arr)
ar = ins_sort(arr)
print(ar)
