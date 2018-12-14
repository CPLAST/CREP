#include <iostream>

void bubble_sort(int* arr, const size_t n)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n - i - 1; ++j)
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

int main()
{//20 position array
	std::cout << "How many numbers would you like to enter (max 20)? \n";
	size_t num{};
	std::cin >> num;
	int* input_ar = new int [num]{};//dynamic array, each element initialized to 0
	for (size_t i = 0; i < num; ++ i)
    {
        std::cout << "Enter element " << i + 1 << " of the array \n";
        std::cin >> input_ar[i];
    }
	bubble_sort(input_ar, num);
	std::cout << "Sorted Array : " << std::endl;
	for (int i = 0; i < num; ++i)
    {
        std::cout << input_ar[i] << " ";
    }

    delete [] input_ar;//release allocated memory
	return 0;
}