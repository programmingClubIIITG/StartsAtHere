#include <bits/stdc++.h>

using namespace std;

int getSum(int arr[],int size)
{
	int ans=0;

	for(int i=0;i<size;i++)
	{
		ans += arr[i];
	}
	return ans;
}
