#include<iostream>
using namespace std;

/*

    Title: Linear Search Function
    Author: Stevie Comyn
    Date Written: 21th Feb 2018.
    
    compile: g++ filename.cpp
*/

int linearSearch(int userSearch, int numbers[]);

int main() {

    int numbers [5] = { 16, 2, 77, 40, 121 };
    int numbersReversed [5] = { 121, 40, 77, 2, 16 };

    int total = 0;
    int arraySize = 5;
    

    for(int x=0; x < 5; x++){
        cout << "Searching for: " << numbersReversed[x] << "\n Found at: " << linearSearch(numbersReversed[x], numbers) << endl;
        total = total + linearSearch(numbersReversed[x], numbers);
    }
    
    cout << "\n\nSearch Total: " << total << endl;
    cout << "Search Average: " << total/5 << endl;

    return 0;
}

int linearSearch(int search, int numbers[]) {
    
    int counter = 0;
    bool found = false;

    while(found!=true && counter!=5) {

        if(search == numbers[counter]){
            // if found, tell user where, break loop.
            found = true;
        } else {
            // if not found, add 1 to counter and try again.
            found = false;
            counter++;
        }

    }

    return counter;
}