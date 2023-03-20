#include <iostream>
using namespace std;
int main(){
  int size;
  cout<<"ENTER SIZE OF ARRAY: "<<endl;
  cin>>size;
  int arr[size];
  cout<<"ENTER "<<size<<" ELEMEMTS:"<<endl;
  for(int i=0; i<size; i++) {
   	 cin>>arr[i];
 }
  cout<<"ORIGNAL:"<<endl;
  for(int i=0; i<size; i++) {
  	  cout<<arr[i]<<" ";
 }
  cout<<"\nREVERSE:"<<endl;
  for(int i=size-1; i>=0; i--) {
    	cout<<arr[i]<<" ";
  }
}
