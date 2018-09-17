#include <iostream>

using namespace std;
int main()
{
    //declaring arrays
    int testScores [5];
    int highScorePerLevel [10];
    
    const int daysInYear {365};
    
    
    //Initialisation
    int testScores2 [5] {100,95,99,87,88};
    int highScorePerLevel2 [10] {3,5}; //first 2 elements are set to 2 and 5, rest are 0

    double hiTemperatures [daysInYear] {0};//Init all to 0
    
    int anotherArray [] {1,2,3,4,5};
    //This will adjust the size of array accordingly
    
    //Accessing array elements (Array subscripting)
    cout << "First score is " << testScores2[0] << endl;
    //cin >> testScores[1];
    
    //The name of the array represents the location
    //of the first element in the array (index 0)
    
    char vowels[] {'a','i','o','u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    
    //cin >> vowels[5]; out of bounds, don't do this!
    
    //Let compiler figure out the size of array
    double hiTemps [] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hiTemps[0] << endl;
    
    hiTemps[0] = 100.7; //Set the first element to 100.7
    cout << "The first high temperature is now: " << hiTemps[0] << endl;
    
    cout << testScores[0] << endl;
    cout << testScores[1] << endl;
    cout << testScores[2] << endl;
    cout << testScores[3] << endl;
    cout << testScores[4] << endl;
    //This has not been initialised so, it gives junk!
    
    cout << "Enter 3 test scores with space in between: " << endl;
    cin >> testScores[0] >> testScores[1] >> testScores[2];
    cout << testScores[0] << endl;
    cout << testScores[1] << endl;
    cout << testScores[2] << endl;
    cout << testScores[3] << endl;
    cout << testScores[4] << endl;
    
    cout << "\nOutput when you get value of array: " << testScores <<endl;
    //this name of the array is actually the address in memory
    return 0;

}