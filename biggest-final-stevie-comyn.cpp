#include<iostream>
using namespace std;

/*
     Biggest File Finder -  a program that calculates the biggest file size from a number of
     input sizes given by the user.

     Author: Stevie Comyn
     Date Written: 18th Feb 2017
*/

int main()
{
  int biggest_number = 0; // Stores the Current Biggest Number
  int user_input; // Stores the Users inputted Number
  int cancel = 00; // Acts as a Cancel for the loop.
  int file_count = 0; // Counts how many files.

  // Welcome statement, explaining the cancel command.
  cout << "\n\tWelcome, This program will calculate the biggest size in a file list."
  <<"\n\tInput as many file sizes (in whole Mbs) as required,"
  <<"\n\tthen type 00 to Cancel the prompt and see Results.\n"<< endl;


  while (user_input != cancel)
  {
    // Asks User for file size, and stores it in user_input.
    cout << "\tPlease enter a file size: ";
    cin >> user_input;

    // Counts how many files inputted.
    file_count = file_count + 1;

    // Compares the file size to the current biggest file size.
    if (user_input > biggest_number)
    {
      biggest_number = user_input;
    }
  }

  // Removes the cancel value from file count.
  file_count = file_count - 1;

  cout << "\n\tThank you, you entered " << file_count << " files, and the biggest one was:  " << biggest_number << "Mb.\n" << endl;

  // terminate the program:
  return 0;

}
