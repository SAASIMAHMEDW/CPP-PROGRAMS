#include <bits/stdc++.h>
using namespace std;
int main() {
// your code goes here
int times,N,Max,K,res;
cout<<"ENTER NUMBER OF TEST CASES: "<<endl;
cin>>times;
while(times--)
{
cout<<"ENTER VALUE FOR TEST CASE: "<<times+1<<endl;
 cin>>N>>Max>>K;
 res=K+N;
 if(res<=max)
 {
 cout<<"YES"<<endl;
 }
 else
 {
 cout<<"NO"<<endl;
 }
}
return 0;
}
