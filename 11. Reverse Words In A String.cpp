#include<stack>
#include<bits/stdc++.h>
string reverseString(string &str){
	int n = str.length();
	stack<string> st;
	for(int i=0; i<n; i++){
		if(str[i] == ' ') continue; //for trailing leading and multiple spaces between words
		string word = "";
		while(str[i] != ' ' && i<n){// i should not exceed the length
			word.push_back(str[i]); //extracting the words from the string
			i++;
		}
		st.push(word);
	}

	//now pop from the stack
	string ans = "";
	while(!st.empty()){
		ans.append(st.top()+" "); //append with space
		st.pop(); //remove from stack
	}
	ans.pop_back(); //remove the last space from the ans string
	return ans;
}
