#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int low,int high,int val)
{
	int mid;

	while(low<=high)
	{
		mid = low+(high-low)/2;
		if(arr[mid]==val) return mid;
		else if(arr[mid]>val) high = mid-1;
		else low = mid+1;
	}
	return -1;
}
