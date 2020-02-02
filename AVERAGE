
//Hello coder!Hope you are having a good day..can you please support me by following on github .
//This problem is asked in contest IARCSJUD
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
/* this sorting is made to reduce the time complexity of the problem
,after this sorting it takes O(n) time to process the data*/
sort(a, a+n);
int len=n;
int count=0;
for(int i=0;i<n;i++){
int start=0;
int stop=len-1;
int comp=2*a[i];
while(start<stop){
    if(abs(start-stop==1)){
break;
}
if(comp==((a[start]+a[stop]))){
count++;
break;
}
else if(comp<((a[start]+a[stop]))){
stop=stop-1;
}
else{
start=start+1;
}
}
}
cout<<count<<endl;
}
//This is not the only way to solve this problems....it's just one of the solution
