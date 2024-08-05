#include<iostream>
using namespace std;

int main()
{
double a;
double b;
char x;
cout << "num1: " << endl;
cin >> a;
cout << "enter operator" << endl;
cin >> x;
cout << "num2: " << endl;
cin >> b;
switch(x){
case '+':
cout <<"num1+num2"<<"="<<a+b<<endl;
break;
case '-':
cout << "num1-num2" <<"="<<a-b<<endl;
break;
case '*':
cout << "num1*num2" <<"=" <<a*b<<endl;
break;
case '/':
if(b==0) {
cout << "undefined divisible! " << endl;}
else{
cout << "num1/num2" <<"=" <<a/b<<endl;}
break;
default:
cout << "invalid operator! " << endl;
break;
}
    return 0;
}