#include <iostream>
using namespace std;

int main(){
    int a,i,f=1;
    cout<<"Enter  the number: ";
    cin>> a;

    for (i=1;i<=a;i++){
        f=f*i;
    }
    cout<<" the factorial is "<<f;
    return 0;
}