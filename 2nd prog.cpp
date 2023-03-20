#include <iostream>
using namespace std;
int main() {
// your code goes here
int times,mass,height,bmi;
cout<<"ENTER NUMBER OF TIMES YOU WANNA EXECUTE THE PROGRAM: "<<endl;
cin >> times;
while(times--){
 	cout<<"ENTER MASS AND HEIGHT: "<<endl;
 cin >> mass>>height;
 bmi=mass/(height*height);
 if(bmi<=18){
 cout << "Underweight" << endl;
 		}
 	else if(bmi>=19 && bmi<=24){
cout << "Normal weight" << endl;
 		}
 else if(bmi>=25 && bmi<=29){
 		cout << "Overweight" << endl;
 }
 else{
 cout << "Obesity" << endl;
 }
}
return 0;
}
