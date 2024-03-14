#include<bits/stdc++.h>
using namespace std;


void convert(int arr[], int n)
{
	// Create a temp array and copy contents
	// of arr[] to temp
	int temp[n];
	memcpy(temp, arr, n*sizeof(int));

	// Sort temp array
	sort(temp, temp + n);

	// Create a hash table. Refer 
	// http://tinyurl.com/zp5wgef 
	unordered_map<int, int> umap;

	// One by one insert elements of sorted
	// temp[] and assign them values from 0
	// to n-1
	int val = 0;
	cout<<endl;
	for (int i = 0; i < n; i++){
		umap[temp[i]] = val++;
	
	}


	// Convert array by taking positions from
	// umap
	for (int i = 0; i < n; i++)
		arr[i] = umap[arr[i]];
}

void printArr(int arr[], int n)
{
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

// Driver program to test above method
int main()
{
	int arr[] = {5,4,12,3};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Given Array is \n";
	printArr(arr, n);

	convert(arr , n);

	cout << "\n\nConverted Array is \n";
	printArr(arr, n);

	return 0;
}
