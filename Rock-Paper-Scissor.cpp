#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getComputerChoice() {
    int choice = rand() % 3;  // Generates a random number between 0 and 2
    if (choice == 0) return "rock";
    else if (choice == 1) return "paper";
    else return "scissors";
}

string getUserChoice() {
    string userChoice;
    cout << "Enter rock, paper, or scissors: ";
    cin >> userChoice;
    return userChoice;
}

void determineWinner(string userChoice, string computerChoice) {
    cout << "You chose: " << userChoice << endl;
    cout << "Computer chose: " << computerChoice << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == "rock" && computerChoice == "scissors") ||
               (userChoice == "paper" && computerChoice == "rock") ||
               (userChoice == "scissors" && computerChoice == "paper")) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}

int main() {
    srand(time(0));  // Seed for random number generation

    string userChoice = getUserChoice();
    string computerChoice = getComputerChoice();

    determineWinner(userChoice, computerChoice);

    return 0;
}
