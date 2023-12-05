#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    vector<int>ans(n,-1);
    stack<int>st;
    for (int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<=arr[i]) {st.pop();}
        if (!st.empty()) ans[i]=st.top();
        st.push(arr[i]);
    }
    return ans;

}
