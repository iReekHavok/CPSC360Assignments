#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//you may want to create the following constants
const int ROWS = 15;
const int SEATS_PER_ROW = 30;
const int FRONT_ROW_COST = 50;
const int BACK_ROW_COST = 40;
const int DIVIDER = 7; //first 7 rows are "front"

void upper() {
  for (int i=0;i<50;i++) {
    cout << "-";
  }
  cout << endl;
}

void lower() {
  for (int i=0;i<50;i++) {
    cout << "-";
  }
  cout << endl;
}

int main() {
  //declare and initialize seating array
  char concertSeats[ROWS][SEATS_PER_ROW];
  for(int i=0; i<ROWS; i++)
    for(int j=0; j<SEATS_PER_ROW; j++)
      concertSeats[i][j]='#';

  int totalSales = 0;  //tracks total sales
  int ticketsBought;
  int row, column;
  int row1 = 15, row2 = 15, row3 = 15, row4 = 15, row5 = 15;
  int row6 = 15, row7 = 15, row8 = 15, row9 = 15, row10 = 15;
  int row11 = 15, row12 = 15, row13 = 15, row14 = 15, row15 = 15;
  int totalSeats = 450;
  char userChoice;
  bool openSeat = false;

  do {
  /*TO DO: ask user for choice here, e.g.:
  	'D' - display seating chart
  	'B'	- buy tickets
  	'T' - show total sales
  	'S' - show seating info
  	'Q' - quit
  	--display the choices that are available in the prompt
  	--you may also want to validate that choice is valid
  */
  	//display choices
  cout << "D - Display seating chart" << endl;
  cout << "B - Buy tickets" << endl;
  cout << "T - Show total sales" << endl;
  cout << "S - Show seating information" << endl;
  cout << "Q - Quit" << endl;

  cout << "Enter option: ";
  cin >> userChoice;
  //validate option - check if it's a a valid choice
  //convert to uppercase using toupper
  userChoice = std::toupper(userChoice);
  //here, you can use a switch statement to write the code for what needs to be done depending on the user choice
    switch (userChoice) {
      case 'D':
        upper();
        //TO DO: code for displaying seating chart
          cout << " \t" << "123456789012345678901234567890" << endl;
          for(int i=0;i<ROWS;i++) {
            cout << "Row " << i+1 << "\t";
            for(int j=0;j<SEATS_PER_ROW;j++) {
              cout << concertSeats[i][j];
            }
            cout << endl;
          }
          cout << endl;

        lower();
        break;
      case 'B':
        upper();
        /*TO DO: code for letting user buy tickets
        -also updates total sales and seating chart
        -up to you to implement, but the following steps may help:
        Steps:
        1. Ask how many tickets user wants to buy
        2. For each ticket they want to purchase
        -Ask user to enter row number followed by seat number
        -Validate that the rows selected are valid (not taken)
        -If seat selection is valid, update order cost and seating chart
        -Repeat until user has purchased the number of tickets they entered
        */
        while(openSeat == false) {
          cout << "Enter the number of tickets you'd like to buy: ";
          cin >> ticketsBought;
          for(int i=0;i<ticketsBought;i++) {
            cout << "Enter the row: ";
            cin >> row;
            if (row > 15 || row < 1) {
              cout << "Row does not exist. Please select a valid row (1-15). " << endl;
              break;
            }
            column -= 1;
            if (concertSeats[row][column] == '#'){		//if seat is empty
							concertSeats[row][column] = '*';		//fill it
							totalSeats -= 1;						//subtract 1 from total seats
							openSeat = true;						//to get out of loop after were done
							std::cout<< "Great! That seat is available!" <<std::endl;
							row += 1;					//return the value of row back to what it was before
							//assigning cost
							if (row < 8) {
								totalSales += FRONT_ROW_COST;
              }
							else {
								totalSales += BACK_ROW_COST;
              }
							//subtract seat when purchased
							if(row==1){
								row1--;
              }
							else if(row==2){
								row2--;
              }
							else if(row==3){
								row3--;
              }
							else if(row==4){
								row4--;
              }
							else if(row==5){
								row5--;
              }
							else if(row==6){
								row6--;
              }
							else if(row==7){
								row7--;
              }
							else if(row==8){
								row8--;
              }
							else if(row==9){
								row9--;
              }
							else if(row==10){
								row10--;
              }
							else if(row==11){
								row11--;
              }
							else if(row==12){
								row12--;
              }
							else if(row==13){
								row13--;
              }
							else if(row==14){
								row14--;
              }
							else if(row==15){
								row15--;
              }
						}
						else
							std::cout << "Sorry, that seat is not available." <<std::endl;
					}
      	}
      	openSeat = false;
        lower();
        break;
      case 'T':
        upper();
  //TO DO: code for displaying total sales
        cout << "Total sales: $" << totalSales << endl;
        lower();
        break;
      case 'S':
        upper();
  /*TO DO: code for displaying seat info, e.g.
  	-how many seats have sold
  	-how many seats available for each row
  	-how many seats available for the entire auditorium
  */
        cout << "Seats sold: " << totalSales << endl;
        for(int i=0;i<ROWS;i++) {
          cout << "Seats remaining in Row " << i+1 << ":" << endl;
        }
        lower();
        break;
      case 'Q':
        upper();
  //code to quit program
        cout << "Thank you for using Seat Charter!" << endl;
        lower();
        break;
      default:
        cout << "--- Invalid choice" << endl; //this should never happen
    }

  } while (userChoice != 'Q');
  return 0;
}
