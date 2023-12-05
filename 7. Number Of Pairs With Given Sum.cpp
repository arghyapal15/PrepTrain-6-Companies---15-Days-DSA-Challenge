#include<bits/stdc++.h>

long long pairsWithGivenSum(int arr[], int n, int sum)

{

    // Write your code here

    unordered_map<int,int>l;

    long long ans=0;

    for(int i=0;i<n;i++){

ans=ans+(long long)l[sum-arr[i]];     

        l[arr[i]]++;

    }

    return ans;

}
