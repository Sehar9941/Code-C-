#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,1,1,0,0,0,0};
    int Size=8;
    int numzero=0;
    int numone=0;
    for( int i=0; i<Size; i++){
        if(arr[i]==0){
            numzero++;

        }
        if(arr[i]==1){
            numone++;

        }
        
    }
    cout<<"number of zeros "<<numzero <<endl;
    cout<<"number of ones "<<numone <<endl;
    return 0;

}