#include <iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={2,3,5,67,345,666};
    int Size=6;
    int maxi=INT_MIN;
    for( int i=0;i<Size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<"maximaum number is "<<maxi<<endl;
}