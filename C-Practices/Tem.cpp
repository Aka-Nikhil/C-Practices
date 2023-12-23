#include <iostream>
using namespace std;

int main(){
    double n,i,r;
    cout<<"1. Celsius to fahrenheit."<<endl;
    cout<<"2. fahrenheit to celsius."<<endl;
    cout<<"Choose any one: ";
    cin>>i;
    cout<<"Enter the number: ";
    cin>>n;
    if(i==1){
        r=(n*9/5)+32;
        cout<<"The Temprature Will be"<<r<<endl;
    }
    else if(i==2){
        r=(n-32)*5/9;
        cout<<"The Temprature Will be"<<r<<endl;
    }
    else 
    cout<<"Please CHoose the Option. "<<endl;

    return 0;
}