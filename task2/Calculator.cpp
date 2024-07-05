#include<iostream>
using namespace std;

void calculate(int a,int b, char ch){
    switch(ch){
        case '+':
           cout<<"Addition of a and b is -> "<<(a+b)<<endl;
           break;
        case '-':
           cout<<"Subtraction of a and b is -> "<<(a-b)<<endl;
           break;
        case '*':
           cout<<"Multiplication of a and b is -> "<<(a*b)<<endl;
           break;
        case '/':
           cout<<"Division of a and b is -> "<<(a/b)<<endl;
           break;
        case '%':
            cout<<"Modulus of a and b is -> "<<(a%b)<<endl;
            break;
        default :
            cout<<"Invalid Operator"<<endl;
            break;
    }
}

int main(){
    int a,b;
    char ch;
    cout<<"Enter the first number -> "<<endl;
    cin>>a;

    cout<<"Enter the second number ->"<<endl;
    cin>>b;

    cout<<"Enter one of the operator from these five (+, -, *, /, %) ->"<<endl;
    cin>>ch;

    calculate(a,b,ch);
    return 0;
}