#include<bits/stdc++.h> 
using namespace std; 
int main(){
  int t; 
  cin>>t;
  while(t--){ 
    string s; 
    cin>>s; 
    int i=0,count=0;
    while(i<s.size()-1){ 
      if(s[i]!=s[i+1]){ 
        count++; i+=2;
      } else{ 
        i++;
      } 
    } 
    cout<<count<<endl;
  } 
}
