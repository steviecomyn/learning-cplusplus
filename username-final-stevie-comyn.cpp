#include<iostream>
using namespace std;

/*
     Username Generator -  a program that creates a username by concatinating
     the user's first and last name.

     Author: Stevie Comyn
     Date Written: 18th Feb 2017
     
     compile: g++ username.cpp
*/

string usernameGenerator(string firstName, string lastName);

int main()
{
  string firstName;
  string lastName;

  cout << "\n\tWelcome, This program will create a username for you"
  <<"\n\tby concatinating your first and last name.\n" << endl;

  // Asks the user for first and last name, then stores them.
  cout << "\tPlease enter your First Name: ";
  cin >> firstName;

  cout << "\tPlease enter your Last Name: ";
  cin >> lastName;

  // Outputs the username.
  cout <<"\n\tThank You, "<<firstName<<". Your Username is: " << usernameGenerator(firstName, lastName) << "\n" << endl;

  // Terminate the program
  return 0;
}
/*
    This function uses the users inputted first name and last name, and Concatinates
    the first letter of the first name to the last, to create a username.
*/
string usernameGenerator(string firstName, string lastName)
{
    // Concatinates the first letter of the first name with the last name using <string>.
    string userName;
    userName = firstName[0] + lastName;
    return userName;
}
