#include <iostream>
#include <stdlib.h>
using namespace std; 

/* The logic:
Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors. */

int main(){

// Live long and prosper

srand(time(NULL));
int computer = rand() % 5 + 1;
int user = 0;

cout << "====================\n";
cout << "rock, paper, scissors, lizard, spock!\n";
cout << "====================\n";

cout << "1) ✊\n";
cout << "2) ✋\n";
cout << "3) ✌️\n";
cout << "4) 🦎\n";
cout << "5) 🖖\n\n";

cout << "shoot! ";

cin >> user; 

/*rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard*/

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;
  
    cout << "computer: " << computer << "\n\n";
  
  if (user == rock && computer == scissors) {
      
    cout << "You Win!\n";
    
  } else if (user == scissors && computer == paper) {
    
    cout << "You Win!\n";
    
  } else if (user == paper && computer == rock) {
    
    cout << "You Win!\n";
      
  } else if (user == lizard && computer == spock) {
      
    cout << "You Win!\n";
      
  } else if (user == spock && computer == scissors) {
      
    cout << "You Win!\n";
      
  } else if (user == scissors && computer == lizard) {
      
    cout << "You Win!\n";
      
  } else if (user == lizard && computer == paper) {
      
    cout << "You Win!\n";
      
  } else if (user == paper && computer == spock) {
      
    cout << "You Win!\n";
      
  } else if (user == spock && computer == rock) {
      
    cout << "You Win!\n";
      
  } else if (user == rock && computer == lizard) {
      
    cout << "You Win!\n";
      
  } else if (user == computer) {
      
    cout << "Tie!\n";
      
  } else {
      
    cout << "You Lose!\n";
      
  }
  



  return 0;
}
