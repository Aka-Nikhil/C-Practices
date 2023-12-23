#include <iostream>
using namespace std;

int main(){
    int nikhil[3] ={10, 33, 44};
    cout<<nikhil[0]<<endl;
    int *b=nikhil;
    
    cout<<*(b+2)<<"\n";
    return 0;
}