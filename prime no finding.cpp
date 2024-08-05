# include<iostream>
using namespace std;
int main(){
int num;
cout << "enter the no. : " ;
cin >> num;
int i;
for(i=2;i<num;i++){
if(num%i==0){
cout << "the given no is not prime! " << endl;
exit (0) ;
} 
}
cout << "the given number is prime number! " << endl;
}
