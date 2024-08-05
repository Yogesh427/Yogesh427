# include<iostream>
using namespace std;
int main(){
int num;
cout << "enter the no. : " << endl;
cin >> num;
int count=0;
while(num>0){  
num=num/10;
count++;
}cout << "the count of the no is  : " <<count<< endl;
return 0;
}