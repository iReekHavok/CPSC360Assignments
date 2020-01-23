// Brendan Cagampang
#include <iostream> // same as stdio.h      printf, scanf
#include <cstdlib>  // same as stdlib.h     rand
#include <ctime>    //                      time
using std::cin;
using std::cout;
using std::endl;

int main() {
  srand(time(NULL));
  int playerScore, cpuScore, die;
  char roh; // roll or hold

  cout << "Welcome to The Game of Pig, created by Brendan Cagampang!\n" << endl;
  cout << "Controls:\nPress R to roll the die. Any other character will hold.\n" << endl;
  cout << "Rules:" << endl;
  cout << "Roll between 2-6 to build your score before holding. You will auto-hold after hitting 20+." << endl;
  cout << "Roll a 1, however, and you lose the points you've built up and your turn ends." << endl;
  cout << "First to 100 wins.\n" << endl;
  cout << "I wish you the best of luck. Here we go!\n\n" << endl;

  for (int i=0; i<1; i++) {
    int wgf = rand() % 2; // wgf = who goes first

    if (wgf == 0) {   // scenario 1 - user goes first
      cout << "You are Player 1" << endl;

    }
    else {            // scenario 2 - CPU goes first
      cout << "You are Player 2." << endl;
      roh = 'r';
      cout << "Player 1 rolls." << endl;
      if (roh == 'r') {
        
      }
    }
  }

  return 0;
}
