#include<iostream>
using namespace std;

/*
    Bubble Sort Example

    Author: Stevie Comyn
    Date Written: 26th Feb 2018
*/

int main() {

    // int numbers[10] = {37, 44, 21, 24, 27, 19, 50, 29, 36, 14};

    // int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int numbers[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    int x, y,z;
    int temp = 0;
    int compareCount = 0;
    int swapCount = 0;
    int whileCount = 0;

    bool sorted = false;

    while(sorted == false){
        
        for(int z=0; z < 10; z++){
        cout << numbers[z] << " ";
        }
        cout << endl;

        // This is setup to check if the array has already been sorted, if so, break the outer-loop.
        sorted = true;

        for(int y=0; y < 9-whileCount; y++){
           
            if(numbers[y] > numbers[y+1]){
                
                // if first number is bigger than the 2nd, swap them.
                temp = numbers[y];
                numbers[y] = numbers[y+1];
                numbers[y+1] = temp;

                // update the counters.
                compareCount++;
                swapCount++;
                sorted = false;

            } else {

                // update the counter.
                compareCount++;

            }

        }
        whileCount++;


    }

    // Output Results.
    cout << "\nFinal Sorted Order: \n" << endl;

    for(int x=0; x < 10; x++){
        cout << numbers[x] << endl;
    }

    cout << "\nSwap Counter: " << swapCount << "\nCompare Counter: " << compareCount << endl;

    return 0;

}