#include <iostream>
using namespace std;
int main() {
// your code goes here
int times,x,y,ans;
cout<<"ENTER NUMBER OF TEST CASES: "<<endl;
cin>>times;
while(times--)
{
cout<<"\nENTER X AND Y FOR TEST CASE: "<<times+1<<endl;
 cin>>x>>y;
 	ans=x/y;
//ans = ans+(x%y);
 ans+=(x%y);
 cout<<"MINIMUM NUMBER OF MOVES REQUIRED: "<<ans<<endl;
}
return 0;
}
