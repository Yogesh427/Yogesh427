#include<iostream>
#include<string>
using namespace std;
int main(){
cout<<"______________enter your details_________________"<<endl;
string name;
int age;
double marks;
float percentage;
char grade;
cout << "enter your name: " << endl;
getline(cin,name);
cout << "enter your age: " << endl;
cin>>age;
cout << "enter your marks: " << endl;
cin>>marks;
cout << "enter your percentage: " << endl;
cin>>percentage; 
cout << "enter your grade: " << endl;
cin>>grade;
cout << "_______________your details are _________________" << endl;
cout <<name<< endl;
cout << age<< endl;
cout << marks << endl;
cout << percentage << endl;
cout << grade << endl;
return 0;}