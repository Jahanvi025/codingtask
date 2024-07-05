#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubblesort(int n, int arr[]){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }

    cout<<"The array after sorting is -> "<<endl;
    cout<<"----------------------------------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of elements of the array -> "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array ->"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array is -> "<<endl;
    cout<<"----------------------------------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubblesort(n, arr);
    return 0;
}