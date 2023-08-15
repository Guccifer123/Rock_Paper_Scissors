#include <iostream>
#include <string>

using namespace std;

// Decalring the three choices of the game which are static.
const string ROCK = "rock";
const string PAPER = "paper";
const string SCISSORS = "scissors";

// Function that performs a task of helping get a the computers choice. 
string getComputerChoice() {
	int randomNumber = rand() % 3; // random number generation frim the rand() function
	switch (randomNumber)
	{
	case 0:
		return ROCK;
	case 1:
		return PAPER;
	default:
		return SCISSORS;
	}
}

// Function that performs a task of helping get the players choice
string getPlayerChoice() {
	string playerChoice;
	cout << "Choose rock, paper, or scissors: ";
	cin >> playerChoice;
	return playerChoice;
}

// Function that helps compare the player and computer choices according to the game.
string determineWinner(string playerChoice, string computerChoice) {
	if (playerChoice == computerChoice) { // If the computer and player choice are the same. It executes a tie.
		return "Tie";
	}
	else if (playerChoice == ROCK && computerChoice == SCISSORS) {
		return "Player Wins";
	}
	else if (playerChoice == PAPER && computerChoice == ROCK) {
		return "Player Wins";
	}
	else if (playerChoice == SCISSORS && computerChoice == PAPER) {
		return "Player Wins";
	}
	else
	{
		return "Computer Wins";
	}
}

int main() {
	string playerChoice = getPlayerChoice(); // Call the getplayers choice. 
	string computerChoice = getComputerChoice(); // Call the getcomputer choice.
	string winner = determineWinner(playerChoice, computerChoice); // Determine the winner and pass the parameter.
	cout << "Player chose " << playerChoice << endl;
	cout << "Computer chose " << computerChoice << endl;
	cout << winner << endl;
	return 0;
}