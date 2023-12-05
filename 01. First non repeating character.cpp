//Arghya_Pal
//https://arghyapal-ab.web.app/
#include <bits/stdc++.h> 
char firstNonRepeatingCharacter(string str) {

  // Write your code here
  map<char,int> mp;
  for(int i=0;i<str.size();i++){
    mp[str[i]]++;
  }
  for(int i=0;i<str.size();i++){
    if(mp[str[i]]==1) return str[i];
  }
  return str[0];
}
