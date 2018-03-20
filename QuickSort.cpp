#include <iostream>

int Partition(int arr[], int left , int right )
{
	int pivot = left;
	int i = left + 1;
	for (int j = left + 1; j < right; ++j)
	{
		if (arr[j] < arr[pivot])
		{
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			++i;
		}

	}
	int temp = arr[i-1];
	arr[i-1] = arr[pivot];
	arr[pivot] = temp;

	return i - 1;
}


void QuickSort(int arr[], int first , int last)
{
	if (first < last)
	{
		int p = Partition(arr, first, last);
		for (int i = first; i < last; ++i)
	
		QuickSort(arr, first, p);
		QuickSort(arr, p + 1 , last);
	}

}

int main()
{
	int n; 
	int arr[100];
	
	do {std::cin >> n;}	while(n<1 || n>99);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}

	QuickSort(arr, 0, n);

	for (int i = 0; i < n; ++i)
	{
		std::cout << arr[i];
	}

	system("pause");
	return 0;
}