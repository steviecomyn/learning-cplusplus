#include<iostream>
using namespace std;

/*
    Zellers Congruence -  a program that uses the 'Zeller’s Congruence' algorithm,
    to calculate the day of the week for a chosen date.

    Author: Stevie Comyn
    Date Written: 18th Feb 2017
*/

int zellerIt ( int day, int month, int year );

string DayOfTheWeek ( int zellersNumber );

int main()
{
  int user_dd=0; // Day of the Month.
  int user_mm=0; // Month of the Year.
  int user_yy=0; // Year.
  int zellers=0; // Result of Zeller's Congruence.

  // Welcome statement, explaining the Program.
  cout << "\n\tWelcome, Please enter a date, and using Zeller's Congruence,\n"
  "\tthe program will calculate which day of the week it was on.\n" << endl;

  //Get users inputted date, and store in applicable variables.
  cout << "\tPlease enter a Day (e.g. 31 ): ";
  cin >> user_dd;

  cout << "\tPlease enter a Month (e.g. March = 03): ";
  cin >> user_mm;

  cout << "\tPlease enter a Year (e.g. 2016): ";
  cin >> user_yy;

  // Stores Result of Zeller's Congruence in Number Form.
  zellers = zellerIt(user_dd,user_mm,user_yy);


  // Outputs the Original Date entered, Plus the Result of Zeller's Congruence in Week Day Form.
  cout << "\n\t" << user_dd << "/" << user_mm << "/" << user_yy << " was a: "
  << DayOfTheWeek(zellers) << "\n" << endl;

  // terminate the program.
	return 0;
}

/*
    This function uses Zeller's Congruence to calculate the day of the week based
    on a numeric date given by the user, it compensates for the Jan and Feb numbers
    by adding 12 to the given number, and adjusting the year, to help with
    the calculation.
*/
int zellerIt ( int day, int month, int year )
{
  int z;
  // Changes the numbers for January and Febuary, and puts year back 1.
  if (month == 01)
  {
    month = month + 12;
    year = year - 1;
  }
  else if (month == 02)
  {
    month = month + 12;
    year = year - 1;
  }
  // Zeller's Congruence Formula.
  z = (day+(((month+1)*13)/5)+year+(year/4)-(year/100)+(year/400))% 7;
  return z;
}

/*
    This function asigns a Day of the week to the returned number from the
    Zeller's Congruence formula, making the output more user friendly.

*/
string DayOfTheWeek ( int zellersNumber )
{
  // Converts Zeller's Number to Day Name.
  string day;
  switch (zellersNumber) {
    case 2: day="Monday";
    break;
    case 3: day="Tuesday";
    break;
    case 4: day="Wednesday";
    break;
    case 5: day="Thursday";
    break;
    case 6: day="Friday";
    break;
    case 0: day="Saturday";
    break;
    case 1: day="Sunday";
    break;
  }
  return day;
}
