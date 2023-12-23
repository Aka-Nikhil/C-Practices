#include <iostream>
using namespace std;

int g(int num1 ,int num2){
    if (num2==0){ 
        return num1;
    } else {
        return g(num2,num1%num2);
    }
}

int main(){
    int num1,num2;
    cout<<"Enter the First Number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    int r= g(num1,num2);
    ;cout<<"The Gcd of "<<num1<<" and "<<num2<<" is "<<r<<"."<<endl;
    return 0;
}