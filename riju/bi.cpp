#include<iostream>
using namespace std; 

int main(){
    int n,count=0,n1,arr[32],i=0;
    cout<<"Enter the decimal no: ";
    cin>>n;
    n1=n;
    n=n1;
    while(n){
        arr[i]=n%2;
        n=n/2;
        i++;
        count++;
        if(n==0){
            break;
        }
    }
    for(int i=count;i;i--){
        cout<<arr[i-1];
    }

    return 0;
}