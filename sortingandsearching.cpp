/*#################################################################################
 < Program Assignment #2 > 
 <> Sorting and Searching  <>
 <<+>> Developer : Niraj Nepal <<+>>
 <-> Date : 9/10/2021 <->
 The Program will have two functions, that execute selection sort then binary search of that array,
 This program will be written completely in c++ and pointers will have to be utilized. 
#################################################################################*/

#include <iostream>

using namespace std;


///////////////////////////////////////////////////////////////////////////////////
/* FUNCTION DEFINITION */

void swap(int *low, int *high) // Function used to swap the "values at the indexes" 
{
	int temp = *low;
	*low = *high;
	*high = temp;
}

void selection_sort(int *low, int *high)
{

	for(int *p = low; p <= high - 1; p++) // Basic selection sort function, nothing too special 
	{
		
		int *min = p;
		for (int *j = p + 1; j <= high; j++)
			if (*j < *min)
				min = j;
		swap(min, p);
	}


}


int* binary_search(int* low, int* high, int val) // Binary search function 
{

	int *mid = low + ((high - low) / 2);

	while(low <= high)
	{
		if (*mid < val)
			low = mid + 1;
		else if (*mid == val)
		{
			cout << "\nYour value is in the list at the address " << &val << endl;
			break;
		}
		else
			high = mid - 1;
		mid = low + ((high-low) / 2);
		cout << "\nYour value is in the list at the address " << &val << endl;
	}
	if (low > high)
		cout << "\nThe value you chose is not in this list " << endl;

	return nullptr;
	
}


///////////////////////////////////////////////////////////////////////////////////
/* MAIN CODE */

int main()
{
	int list[] = {4,5,2,3,1};
	int x = 0;


	cout << "Please enter a number to search > " << endl;
	cin >> x;
	cout << " " << endl;

	int* low = list, * high = low + sizeof(list) / sizeof(list[0]) - 1;
	selection_sort(low,high);

	cout << "This is your sorted list > " << endl;
	for (int *p = low; p <= high; p++)
		cout << *p << " ";
	cout << "                " << endl;

	binary_search(low, high, x);


	cout << endl;

}



///////////////////////////////////////////////////////////////////////////////////
