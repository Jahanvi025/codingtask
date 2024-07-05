#include<iostream>
#include<string>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){

    string s;
    int n;
    cout<<"Enter the string"<<endl;
    cin>>s;
    
    cout<<"******--------Original string is--------******"<<endl;
    cout<<s<<endl<<endl;

    //length of string
    n = s.length();
    for(int i= 0;i < n/2; i++){
        swap(s[i], s[n-i-1]);
    }

    cout<<"******--------Reverse string is--------******"<<endl;
    cout<<s<<endl;
    
}