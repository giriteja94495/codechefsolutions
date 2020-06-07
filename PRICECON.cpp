#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int> nums(n);
for(int i=0;i<n;i++){
cin>>nums[i];
}
int ans=0;
for(auto &a:nums){
if(a>k){
ans+=(a-k);
}
}
cout<<ans<<endl;
}
return 0;
}
