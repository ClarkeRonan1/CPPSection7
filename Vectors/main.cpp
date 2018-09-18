#include <iostream>
#include <vector>

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
    
    //vector_name.at(element_index)
    //e.g test_scores.at(1);
    
    //vector_name.push_back(element)
    //this adds another element to the end of vector
    //test_score.push_back(90);
    
    vector <char> vowels2 {'a','e','i','o','u'};
    cout << vowels2[0] << endl;
    cout << vowels2[4] << endl;
    
    //vector <int> testScores3 {3}; 3 elements of 0
    //vector <int> testScores3 {3,100}; 3 elements of 100
    
    
    vector <int> testScores3 {100,98,89};
    cout << testScores3[0] << endl;
    
    //Using vector syntax
    cout << "Using vector syntax " << endl;
    cout << testScores3.size() << endl;
    
    cout << "Enter 3 test scores: " << endl;
    cin >> testScores3.at(0);
    cin >> testScores3.at(1);
    cin >> testScores3.at(2);
    
    cout << testScores3.at(0) << endl << testScores3.at(1) << endl << testScores3.at(2) << endl;
    
    cout << "\nEnter a test score to add to the vector" << endl;
    int scoreToAdd {0};
    cin >> scoreToAdd;
    
    //This will add the new score to the end
    testScores3.push_back(scoreToAdd);
    
    cout << "There are now " << testScores3.size() << " in the vector " << endl; 
    //the new size will be 4
    
    //Causing an exception
    //cout << testScores3.at(10) << endl;
    
    
    return 0;
}