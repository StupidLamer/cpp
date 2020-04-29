#include <iostream>
#include <algorithm>

int binarySearch(int *array, int target, int min, int max)
{
	while (min <= max)
	{
		int midpoint = min + ((max-min) / 2); 
 
		if (array[midpoint] > target)
		{
			max = midpoint - 1;
		}
		else if (array[midpoint] < target)
		{
			min = midpoint + 1;
		}
		else
			return midpoint;
	}
	
	return -1;
}
 
int main()
{
	int array[] = { 4, 7, 9, 13, 15, 19, 22, 24, 28, 33, 37, 41, 43, 47, 50 };
 
	std::cout << "Enter a number: ";
	int x;
	std::cin >> x;
 
	int index = binarySearch(array, x, 0, 14);
 
	if (array[index] == x)
		std::cout << "Good! Your value " << x << " is on position "<< index << " in array!\n";
	else
		std::cout << "Fail! Your value " << x << " isn't in array!\n";
	return 0;
}