#include<iostream>
#include<string>
using namespace std;

int main(){
   string s;
   cout<<"Enter the Word -> "<<endl;
   cin>>s;

   cout<<"***--- Original Word is ---***"<<endl;
   cout<<s<<endl;
   bool flag = true;
   int n = s.length();
   for(int i = 0; i < n/2; i++){
    if(s[i] == s[n-i-1]){
        continue;
    }
    else{
        flag = false;
        break;
    }
   }
   if(flag){
    cout<<"***--- The Word is Palindrome ---***"<<endl;
   }
   else{
     cout<<"***---The Word is not a Palindrome ---***"<<endl;
   }
   return 0;
}