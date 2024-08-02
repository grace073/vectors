#include<iostream>

using namespace std;

void shiftRight(int arr[], int n, int d){   
    int p=1;
    while(p<=d){
        int temp=arr[n-1];//store the last element of array in a temp variable
        for(int i=n-1;i>=1;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        p++;
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int d=4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    shiftRight(arr, n, d);
    cout<<"After shifting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}