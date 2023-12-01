#include <bits/stdc++.h> 
vector<int> maximumsumSubarray(vector<int> &arr , int n)
{
    int sum = INT_MIN, maxSum = INT_MIN;  
    int start = 0, arrStart = 0, arrEnd = 0;
    for(int i = 0; i < n; i++) {
        if(sum < 0) {
            sum = arr[i];
            start = i;
        }
        else sum += arr[i];
        if(sum > maxSum) {
            maxSum = sum;
            arrStart = start;
            arrEnd = i;
        } else if(sum == maxSum && arrEnd - arrStart < i - start) {
            arrStart = start;
            arrEnd = i;
        }
    }
	return vector<int>(arr.begin() + arrStart, arr.begin() + arrEnd + 1);
}
