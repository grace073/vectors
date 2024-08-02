#include<iostream>

using namespace std;

void shiftLeft(int arr[], int n, int d){   
    int p=1;
    while(p<=d){
        int temp=arr[0];//store the first element of array in a temp variable
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
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
    shiftLeft(arr, n, d);
    cout<<"After shifting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}