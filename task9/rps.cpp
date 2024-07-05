#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std; 

// Function to get the computer's choice
string getComputerChoice() {
    int random = rand() % 3;  // Generate a random number between 0 and 2
    if (random == 0) return "rock";
    else if (random == 1) return "paper";
    else return "scissors";
}

// Function to determine the winner
string determineWinner(const string& userChoice, const string& computerChoice) {
    if (userChoice == computerChoice) return "It's a tie!";
    if ((userChoice == "rock" && computerChoice == "scissors") ||
        (userChoice == "scissors" && computerChoice == "paper") ||
        (userChoice == "paper" && computerChoice == "rock")) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    string userChoice;
    int userScore = 0;
    int computerScore = 0;
    int ties = 0;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    while (true) {
        // Prompt the user for their choice
        cout << "\nEnter rock, paper, or scissors (or type 'exit' to quit): ";
        cin >> userChoice;

        // Check for exit condition
        if (userChoice == "exit") {
            break;
        }

        // Validate user input
        if (userChoice != "rock" && userChoice != "paper" && userChoice != "scissors") {
            cerr << "Invalid choice! Please enter rock, paper, or scissors." << endl;
            continue;
        }

        // Get the computer's choice
        string computerChoice = getComputerChoice();
        
        // Display choices
        cout << "Computer chose: " << computerChoice << endl;

        // Determine the winner
        string result = determineWinner(userChoice, computerChoice);
        cout << result << endl;

        // Update scores
        if (result == "You win!") {
            userScore++;
        } else if (result == "Computer wins!") {
            computerScore++;
        } else {
            ties++;
        }

        // Display scores
        cout << "\n ----------------Scores:----------------"<<endl<<endl;
        cout << "You: " << userScore<< "          ";
        cout << "Computer: " << computerScore<< "          ";
        cout << "Ties: " << ties <<endl;
    }

    cout << "\n ----------------Final Scores:---------------- "<<endl<<endl;
    cout << "You: " << userScore << "          ";
    cout << "Computer: " << computerScore << "          ";
    cout << "Ties: " << ties << "          ";
    cout << "Thanks for playing!" <<endl;

    return 0;
}
