// Brendan Cagampang
#include <iostream> // same as stdio.h      printf, scanf
#include <cstdlib>  // same as stdlib.h     rand
#include <ctime>    //                      time
using std::cin;
using std::cout;
using std::endl;

int main() {
  cout << "Welcome to The Game of Pig, created by Brendan Cagampang!\n" << endl;
  cout << "Controls:\nPress R to roll the die. Any other character will hold.\n" << endl;
  cout << "Rules:" << endl;
  cout << "Roll between 2-6 to build your score before holding. You will auto-hold after hitting 20+." << endl;
  cout << "Roll a 1, however, and you lose the points you've built up and your turn ends." << endl;
  cout << "First to 100 wins.\n" << endl;
  cout << "I wish you the best of luck. Here we go!\n\n" << endl;

  int playerScore = cpuScore = turnTotal = 0;
  int rollDie();
  int wgf();  // who goes first
  char roh;   // roll or hold
  srand(time(NULL));

  wgf = wgf();
  if (wgf == 0) {
    cout << "You are Player 1" << endl;
    while (playerScore < 100) {
      die = rollDie();
      while (die != 1) {
        cout << "Roll: " << die << endl;
        turnTotal += die;
        if(die == 1) {
          turnTotal = 0;
          cout << "Turn total: " << turnTotal << "\nNew score: " << cpuScore << endl;
        } else if (turnTotal >= 20) {
          cpuScore += turnTotal;
          cout << "Turn total: " << turnTotal << "\nNew score: " << cpuScore << endl;
          break;
        }
      }

      cout << "Player 1 score: " <<  cpuScore << "\nPlayer 2 score: " << playerScore << endl;
  		cout << "\nIt is Player 2's turn." <<std::endl;
  		die = rollDie();
  		turnTotal = 0;
  		turnTotal += die;
  		cout << "Roll: " << die;

      while(die != 1 || roh != 'h'){		// users while loop
  			if (die == 1)
  				break;
  			cout << "\nTurn Total: " << turnTotal << endl;
        cout << "Roll/Hold? ";
  			cin >> roh;
  			if (roh =='r') {
  				srand(time(0));
					die = rollDie();
					turnTotal += die;
					cout << "Roll: " << die;

  				if die == 1) {
  					turnTotal = 0;
  					cout << "\nTurn Total: " << turnTotal << "\nNew Score: " << playerScore << endl;
  				break;
  				}
  			} else {
    				die = 0;
    				turnTotal += roll;
    				playerScore += turnTotal;
    				cout << "Turn Total: " << turnTotal << endl;
    				break;
  			}
  		}

    }
  }

  return 0;
}

int rollDie() {
  int roll = rand() % 6 + 1;
  return roll;
}

int wgf() { //who goes first
  int player = rand() % 2;
  return player;
}
