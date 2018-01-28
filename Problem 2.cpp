/*
	* Problem 2 *
	Find the sum of all even Fibonacci numbers under 4 million
*/

// Imports the header files needed
#include <iostream>
#include <vector>

using namespace std;

int main(){

	/* Initializes the vectors for all Fibonacci numbers under 4 million,
	   and even numbers */
    std::vector <int> l;
    std::vector <int> even;

	// Initializes the indeces for the Fibonacci numbers and the sum
    int index = 1;
    int refract = 0;
    int s;

	/* Loops through all numbers under 4 million and appends the Fibonacci numbers to the
	   appropriate vector */
    while(index <= 4000000){
        int y = refract + index;
        refract = index;
        index = y;
        l.push_back(index);
    }

	// Finds the even numbers between all of the Fibonacci numbers
    for(int n = 0; n < l.size(); n++){
        if(l[n] % 2 == 0){
            even.push_back(l[n]);
        }
    }

	// Adds the evens all up
    for(int n = 0; n < even.size(); n++){
        s += even[n];
    }

	// Prints out the sum
    cout << s;

    return 0;
}
