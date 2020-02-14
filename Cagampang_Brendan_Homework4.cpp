#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::fstream;

int main() {
  int eWords = 0;
  int longestEWordChars = 0;
  string filename = "C:/Users/brenb/Documents/[CPSC 36000] Applied Programming Languages/CPSC360Assignments/filestats.txt";
  string currentWord;
  string currentEWord;
  string longestEWord;

  cout << "Opening the contents of filestats.txt...\nReading...\nDoing the do..\nHere you go! Here are the stats you didn't ask for: " << endl;
  //read file here
  fstream file(filename, std::ios::in);
  //if file not successfully opened
  if(!file) {
    cout << "File did not open successfully!" << endl;
    exit(1);  //exit program
  }
  /*display contents of filestats.txt here, as well as count words with the letter e,
    the longest word containing e, and the number of characters in that word
  */
  if(file.is_open()) {
    eWords = 0;
    while(file >> currentWord) {
      for(int i=0;i<currentWord.length();i++) {
        if(currentWord[i] == 'e') {
          eWords++; //counts words with the letter e
          currentEWord = currentWord;
          if(currentEWord.length() > longestEWord.length()) {
            longestEWord = currentWord; //sets e word to be the longest if longer than the previous
          }
          longestEWordChars = 0;  // value without this is much larger for some reason. Reads 3542 without, 32 with
          for(int i=0;i<longestEWord.length();i++) {
            longestEWordChars++;  //counts how many letters in longest word
          }
        }
      }
    }
  }
  //close filestats.txt
  file.close();
  /*display number of words that have the letter e,
    the longest word containing e,
    and the number of characters in the longest word containing the letter e
  */
  cout << "Number of words that contain the letter e: " << eWords << endl;
  cout << "Longest word containing the letter e: " << longestEWord << endl;
  cout << "Number of letters in " << longestEWord << ": " << longestEWordChars << endl;
  return 0;
}
