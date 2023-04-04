#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t){
		int n;
		cin>>n;
		vector<long long int>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		long long int min=INT_MAX;
		for(long long int i=0;i<n-1;i++)
		{
			long long int val=v[i+1]-v[i];
			if(min>val)
			min=val;
			}
			cout<<min;
			t--;
		}
		
	return 0;
	}
	
