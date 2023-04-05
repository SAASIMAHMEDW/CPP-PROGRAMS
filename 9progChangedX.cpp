#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	   int n,curr=0;
	   cin>>n;
	   int a[n];
	   for(int i=0;i<n;i++)
		cin>>a[i];
		
	   sort(a,a+n);
	   for(int i=n/2;i>=0;i--){
		if(a[i]!=a[n/2]){
		    curr=i+1;
		    break;
			}
		}
	    cout<<n-curr<<endl;
	}
     return 0;
}
