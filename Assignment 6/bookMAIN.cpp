#include <iostream>
#include "book.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
/*
  string title;
  int id;
  Book b1;  //uses default constructor
  cout << "Enter a book title: ";
  getline(cin,title);
  b1.setTitle(title);
  cout << "Enter the book ID: ";
  cin >> id;
  b1.setID(id);
  cout << "Book 1 Information: \nTitle: \t\t" << b1.getTitle() << endl;
  cout << "ID: \t\t" << b1.getID() << endl;
  cout << "Available? \t" << b1.availability() << endl;
  cout << endl;
  b1.borrowBook();
  cout << "Book 1 Information: \nTitle: \t\t" << b1.getTitle() << endl;
  cout << "ID: \t\t" << b1.getID() << endl;
  cout << "Available? \t" << b1.availability() << endl;
  cout << endl;

  Book b2("Strange Case of Dr. Jekyll and Mr. Hyde", 23, true);  //uses second constructor
  cout << "Book 2 Information: \nTitle: \t\t" << b2.getTitle() << endl;
  cout << "ID: \t\t" << b2.getID() << endl;
  cout << "Available? \t" << b2.availability() << endl;
  cout << endl;
  b2.returnBook();
  cout << "Book 2 Information: \nTitle: \t\t" << b2.getTitle() << endl;
  cout << "ID: \t\t" << b2.getID() << endl;
  cout << "Available? \t" << b2.availability() << endl;
  cout << endl;

  Book b3 = b1;  //uses copy constructor
  cout << "Book 3 Information: \nTitle: \t\t" << b3.getTitle() << endl;
  cout << "ID: \t\t" << b3.getID() << endl;
  cout << "Available? \t" << b3.availability() << endl;
  cout << endl;
*/
  Book bookLibrary[5];
  string title;
  int id;

  //have user input 5 book titles, generate random IDs between 1-1000, and set
  //checkedOut to false for all
  for (int i=0;i<5;i++) {
    cout << "Enter a book title: ";
    getline(cin, title);
    id = rand() % 1000 + 1;
    //cout << id << endl; //check to make sure random numbers are being generated
    bookLibrary[i] = Book(title, id, false);
  }

  //book info before the test functions
  for (int i = 0;i<5;i++) {
    cout << "Book " << i+1 << "Information:\n Title:\t" << bookLibrary[i].getTitle() << endl;
    cout << "ID:\t" << bookLibrary[i].getID() << endl;
    cout << endl;
  }

  //overload test functions;
  bookLibrary[0] = bookLibrary[1];
  bookLibrary[1] = bookLibrary[2] + bookLibrary[3];
  bookLibrary[2] = bookLibrary[1] - bookLibrary[4];

  //print out book names and make sure the functions worked
  for (int i = 0;i<5;i++) {
    cout << "Book " << i+1 << "Information:\n Title:\t" << bookLibrary[i].getTitle() << endl;
    cout << "ID:\t" << bookLibrary[i].getID() << endl;
    cout << endl;
  }

  return 0;
}
