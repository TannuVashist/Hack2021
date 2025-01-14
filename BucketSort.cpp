// C++ program to sort an array using bucket sort
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Function to sort arr[] of
// size n using bucket sort
void bucketSort(float arr[], int n)
{
	
	// 1) Create n empty buckets
	vector<float> b[n];

	// 2) Put array elements in different buckets
	for (int i = 0; i < n; i++) {
		int bi = n * arr[i]; 
		b[bi].push_back(arr[i]);
	}

	// 3) Sort individual buckets
	for (int i = 0; i < n; i++)
		sort(b[i].begin(), b[i].end());

	// 4) Concatenate all buckets into arr[]
	int index = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < b[i].size(); j++)
			arr[index++] = b[i][j];
}

int main()
{

	int n;
	cout<<"Enter array size :";
	cin>>n;
	float *arr=new float[n];
	cout<<"Enter array elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	bucketSort(arr, n);

	cout << "Sorted array is \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
