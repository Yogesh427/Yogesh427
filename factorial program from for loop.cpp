#include<iostream>
using namespace std;

int main()
{
int a;
cout << "enter the no. : " << endl;
cin >> a;
int i;
int factorial=1;
for(i=1;i<=a;i++){
factorial*=i;
}
cout <<factorial<< endl;
    return 0;
}