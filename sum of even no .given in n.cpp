# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the no: ";
    cin>>a;
    int i;
    int sum =0;
    for(i=0;i<=a;i++){
        if(i%2==0){
            sum = sum + i;
        } 
    } cout<<"the sum of even no is : "<<sum<<endl;
    return 0;
}