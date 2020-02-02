//Hello coder..Hope you are having a good day...please support me by following in github
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int p;
cin>>p;
int count=0;
/*if you approach through naive method ,you will encounter that dividing the number with 2 and 5 can get you the solution
but it comes for the expense of time ..which  is not prefferable...if you take factorial of any number number of 2's will be always greater
than 5's ,hence we go through this approach*/
for(int i=5;p/i>=1;i=i*5){
count+=p/i;
}


cout<<count<<endl;
}
return 0;
}
//This is not the only way to solve the problem,it's just of the solutions
