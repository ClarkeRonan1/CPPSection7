#include <iostream>

using namespace std;
//Vectors are including in std library
int main()
{
    //Vector is a dynamic array
    vector <char> vowels;
    
    vector <int> testScores (10);
    //declare a vector of 10 integers, set to 0
    
    //using initialiser lists:
    
    vector <int> testScores2 {100,90,89,93};
    // Size will be 5 doubles in this case
    
    vector <double> hiTemperatures (365,80.0);
    //Set size to 365 doubles,
    //Set the values to of each double to 80
    
    //First element is at index 0
    //Last element is at index size-1
    
    // No out of bounds checking
    // Automatically initialised to 0
    
    return 0;
}