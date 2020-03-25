#ifndef BOOK_H
#define BOOK_H
using std::string;

class Book {
  private:
    int ID;
    string TITLE;
    bool CHECKEDOUT;

  public:
    //constructors
    Book();   //default constructor
    Book(string t, int i, bool co = false);

    //copy constructor
    Book(const Book &bookObj);

    //getters
    string getTitle() const;
    int getID() const;

    //setters
    void setTitle(string title);
    void setID(int id);

    //other functions
    bool isCheckedOut();   //is the book checked out?
    void borrowBook();     //book gets borrowed
    void returnBook();     //book is returned
    string availability(); //output based on availability

    //overloads for HW6
    Book operator=(const Book &right);  //bookLibrary[i] = bookLibrary[j]
    Book operator+(const Book &right);  //book titles are concatenated with a comma
    Book operator-(Book &right);        //Book1 replaces Book2, Book2 = No Title, 0
};

#endif
