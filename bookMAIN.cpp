#include <iostream>
#include "book.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
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

  return 0;
}
