# include<iostream>
using namespace std;
int main(){
int num;
cout << "enter the no. : " ;
cin >> num;
int rev=0;
while(num>0) {
int remainder = num%10;
rev=rev*10 + remainder;
num=num/10;}
cout << "reverse of the given no. is : " << rev<<endl;
return 0;
}