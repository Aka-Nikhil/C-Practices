#include <iostream>
using namespace std;

int main(){
    
    int nikhil[5] ={12, 33, 66, 44, 77};
    // cout << "The elements of array are : ";
    // cout<<nikhil[4]<<endl;
    // nikhil[4]= 66;
    // cout<<nikhil[4]<<endl;
    // do
    // {
    // cout<<i<<"jadu"<<nikhil[i]<<endl;
    // i++;
    // continue;
    // } 
    // while (i<3 );
    int i = 0; 

    while (i<4){
        cout<<i<<"jadu"<<nikhil[i]<<endl;
        i++;
    }
    
    return 0;
}