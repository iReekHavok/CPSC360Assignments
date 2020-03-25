#include <iostream>
#include <cstdlib>  //needed for rand
#include "book.h"
using std::cout;
using std::endl;
using std::string;

//default constructor
Book::Book() {
  TITLE = "No Title";
  ID = rand() % 1000 + 1;
  CHECKEDOUT = false;
}

//other constructor
Book::Book(string t, int i, bool co) {
  TITLE = t;
  ID = i;
  CHECKEDOUT = co;
}

//copy constructor
Book::Book(const Book &bookObj) {
  TITLE = bookObj.TITLE;
  ID = bookObj.ID;
  CHECKEDOUT = bookObj.CHECKEDOUT;
}

//getters
string Book::getTitle() const {
  return TITLE;
}

int Book::getID() const {
  return ID;
}

//setters
void Book::setTitle(string title) {
  TITLE = title;
}

void Book::setID(int id) {
  ID = id;
}

//other functions
bool Book::isCheckedOut() {
  return CHECKEDOUT;
}

void Book::borrowBook() {
  if(isCheckedOut() == true) {
    cout << "The book is currently checked out." << endl;
  } else { isCheckedOut() == true; }
}

void Book::returnBook() {
  CHECKEDOUT = false;
}

string Book::availability() {
  if(isCheckedOut() == true) {
    return "No, book is currently checked out.";
  } else { return "Yes, the book is available."; }
}

//overloads for HW6
Book Book::operator=(const Book &right) {
  TITLE = right.TITLE;
  ID = right.ID;
  CHECKEDOUT = right.CHECKEDOUT;

  return *this;
}

Book Book::operator+(const Book &right) {
  Book temp;
  temp.TITLE = TITLE + ", " + right.TITLE;
  temp.ID = rand() % 1000 + 1;
  temp.CHECKEDOUT = false;
  
  return temp;
}

Book Book::operator-(Book &right) {
  TITLE = right.TITLE;
	ID = right.ID;
	CHECKEDOUT = right.CHECKEDOUT;
	right.TITLE = "No Title";
	right.ID = 0;

	return *this;
}
