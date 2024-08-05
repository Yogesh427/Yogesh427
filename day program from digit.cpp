# include<iostream>
# include<string>
using namespace std;
int main(){
    int a;
    cout<<"enter the no : ";
    cin>>a;
    switch(a){
        case 1:
        cout<<"today is monday"<<endl;
        break;
        case 2:
        cout<<"today is tuesday"<<endl;
        break;
        case 3:
        cout<<"today is wednesday"<<endl;
        break;
        case 4:
        cout<<"today is thursday"<<endl;
        break;
        case 5:
        cout<<"today is friday"<<endl;
        break;
        case 6:
        cout<<"today is saturday"<<endl;
        break;
        case 7:
        cout<<"today is sunday"<<endl;
        break;
        default:
        cout<<"enter the no in range of 1 to 7 !"<<endl;
}
return 0;}