#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	for(int i=0;i<n;i++){
		if(mp[arr[i]]>(n/2)) return arr[i];
	}
	return -1;
}
