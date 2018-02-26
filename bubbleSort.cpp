#include<iostream>
using namespace std;

/*
    Bubble Sort Example

    Author: Stevie Comyn
    Date Written: 26th Feb 2018
*/

int main() {

    int numbers[10] = {37, 44, 21, 24, 27, 19, 50, 29, 36, 14};

    int x, y;
    int temp = 0;
    int compareCount = 0;
    int swapCount = 0;

    for(int x=0; x < 9; x++){
        
        // 9-x reduces the cycles on the inner loop by 1 every outercycle, speeding up the sort.
        for(int y=0; y < 9-x; y++){

            if(numbers[y] > numbers[y+1]){
                
                // if first number is bigger than the 2nd, swap them.
                temp = numbers[y];
                numbers[y] = numbers[y+1];
                numbers[y+1] = temp;

                // update the counters.
                compareCount++;
                swapCount++;

            } else {

                // update the counter.
                compareCount++;

            }

        }

    }

    // Output Results.
    cout << "Final Sorted Order: \n" << endl;

    for(int x=0; x < 10; x++){
        cout << numbers[x] << endl;
    }

    cout << "\nSwap Counter: " << swapCount << "\nCompare Counter: " << compareCount << endl;

    return 0;

}