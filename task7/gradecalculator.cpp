#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of subjects -> "<<endl;
    cin>>n;
    int arr[n];
     cout<<"Enter the marks of subjects out of 100 -> "<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Enter the marks of subject "<<i+1<<" -> "<<endl;
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int average = sum*100;
    int grade = average/(n*100);
        cout<<"----------------------------------------------"<<endl;
        cout<<"Your percentage is : "<<grade<<"%"<<endl;
        cout<<"----------------------------------------------"<<endl;
    if(grade>=90 && grade<=100){
            cout<<"----------------------------------------------"<<endl;
        cout<<"GRADE "<<"A+"<<endl;
            cout<<"----------------------------------------------"<<endl;
    }
    else if(grade>=80 && grade<90){
            cout<<"----------------------------------------------"<<endl;
        cout<<"GRADE "<<"A"<<endl;
            cout<<"----------------------------------------------"<<endl;
    }
    else if(grade>=70 && grade<80){
            cout<<"----------------------------------------------"<<endl;
        cout<<"GRADE "<<"B"<<endl;
            cout<<"----------------------------------------------"<<endl;
    }
    else if(grade>=60 && grade<70){
            cout<<"----------------------------------------------"<<endl;
        cout<<"GRADE "<<"c"<<endl;
            cout<<"----------------------------------------------"<<endl;
    }
    else if(grade>=50 && grade<60){
            cout<<"----------------------------------------------"<<endl;
        cout<<"GRADE "<<"D"<<endl;
            cout<<"----------------------------------------------"<<endl;
    }
    else if(grade>=36 && grade<50){
            cout<<"----------------------------------------------"<<endl;
        cout<<"GRADE "<<"E"<<endl;
            cout<<"----------------------------------------------"<<endl;
    }
    else{
        cout<<"----------------------------------------------"<<endl;
        cout<<"FAIL";
        cout<<"----------------------------------------------"<<endl;
    }
    return 0;
}