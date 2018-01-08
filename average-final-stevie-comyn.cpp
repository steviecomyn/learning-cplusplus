#include<iostream>
using namespace std;

/*
    A series of files have been sent to you with different memory sizes.
    The sizes are all in whole numbers of Megabytes (MB) but the number of files is unknown.
    You have been asked to create a program that will count how many files there are,
    the total memory used and the average size of these files.

    Author: Stevie Comyn
    Date Written: 18th Feb 2017.
    
    compile: g++ username.cpp
*/

int main() {
    int user_input=1;
    int cancel = 00;
    int file_sizes[100];
    int file_count = 0;
    int file_size_total=0;
    int average_size=0;

    // Welcome statement, explaining the cancel command.
    cout << "\n\tWelcome, Please enter the size of each file, when finished,\n"
    "\tsimply enter 00 as your last input to cancel the loop and see your results.\n" << endl;

    // While loop to allow for cancelling the input.
    while (user_input != cancel) {
          // Asks User for file size, and stores it in user_input.
          cout << "\tPlease enter a file size: ";
          cin >> user_input;

          // Puts User's Number into Array.
          file_sizes[file_count]=user_input;

          // Counts how many files inputted.
          file_count = file_count + 1;
    }

    // Removes the cancel value from file count.
    file_count = file_count - 1;

    // Whitespace.
    cout << "\n" << endl;

    // For loop to add up file sizes.
    for (size_t i = 0; i < file_count; i++) {
        file_size_total = file_size_total + file_sizes[i];
    }

    // Calculate the average file size.
    average_size= file_size_total / file_count;

    // For Loop to output file sizes from array.
    for (size_t i = 0; i < file_count; i++) {
        cout << "\tFile No." << i+1 << " is " << file_sizes[i] << "Mb." << endl;
    }
    // Outputs the total Memory Used.
    cout << "\n\tTotal Memory Used: " << file_size_total << "Mb." << endl;
    // Outputs the Average FIle Size.
    cout << "\tAverage File Size: " << average_size << "Mb.\n" << endl;

    // terminate the program:
    return 0;
}
