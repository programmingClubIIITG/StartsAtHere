#include <bits/stdc++.h>
#define lld long long int
#define endl "\n"

using namespace std;

void prefixSum(int arr[],int pre[],int size)
{
	if(size==0) return;
	pre[0] = arr[0];
	for(int i=1;i<size;i++) pre[i] = pre[i-1] + arr[i];
}
