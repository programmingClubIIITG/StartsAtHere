#include <bits/stdc++.h>

using namespace std;

int getMax(int arr[],int size)
{
	int ans=arr[0];

	for(int i=1;i<size;i++)
	{
		if(arr[i]>ans) ans = arr[i];
	}
	return ans;
}
