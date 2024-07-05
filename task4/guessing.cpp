#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
   // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    // Generate a random number between 1 and 10
    int min = 1;
    int max = 10;
    int random_number = min + rand() % (max - min + 1);
    int number;
    cout<<"Guess the number between "<<min<<" and "<<max<<" ->"<<endl;
    cin>>number;


    if(number == random_number){
        cout<<"You guessed it!"<<endl;
    }
    else{
        cout<<"You guessed wrong!"<<" ";
        cout<<"Random Number is "<<random_number<<endl;
    }

    return 0;
}