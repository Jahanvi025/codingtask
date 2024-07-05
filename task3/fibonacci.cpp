#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of fibonacci series -> "<<endl<<endl;
    cin>>n;

    int a = 0;
    int b = 1;
    cout<<"Finbonacci Series is -> "<<endl;
    cout<<a<<" "<<b<<" ";
    for(int i = 2; i< n; i++){
       int c = a + b;
       cout<<c<<" ";
       a = b;
       b = c;
    }
    cout<<endl;
return 0;
}