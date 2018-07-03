#include <iostream>
using namespace std;

// Returns the smallest number that cannot be represented as sum
// of subset of elements from set represented by sorted array arr[0..n-1]
int findSmallest(int arr[], int n)
{
int res = 1; // Initialize result

// Traverse the array and increment 'res' if arr[i] is
// smaller than or equal to 'res'.
for (int i = 0; i < n && arr[i] <= res; i++)
	res = res + arr[i];

return res;
}

// Driver program to test above function
int main()
{


int arr4[] = {1, 2, 3, 5};
int n4 = sizeof(arr4)/sizeof(arr4[0]);
cout << findSmallest(arr4, n4) << endl;

return 0;
}
