// C++ program to Count Inversions
// in an array
#include <bits/stdc++.h>
using namespace std;
//method-1
int getInvCount(int arr[], int n)
{
	int inv_count = 0;
	for (int i = 0; i < n - 1; i++)
    {
		for (int j = i + 1; j < n; j++)
        {
			if (arr[i] > arr[j])
            {
				inv_count++;
            }
        }
    }
	return inv_count;
}

// Driver Code
int main()
{
	int n ;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
	cout << " Number of inversions are "
		<< getInvCount(arr, n);
	return 0;
}

// This code is contributed
// by Akanksha Rai
