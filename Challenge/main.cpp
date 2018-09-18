#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Part 1
    //declare 2 empty vector integers
    //vector 1 and 2
    vector <int> vector1 {};
    vector <int> vector2 {};
    
    //add 10 and 20 to vector 1 dynamically
    //Display the elements in vector1
    //Display the size of vector1
    int addTen {10};
    int addTwenty {20};
    
    vector1.push_back(addTen);
    vector1.push_back(addTwenty);
    
    cout << "Vector 1 contains " << vector1.at(0) << endl;
    cout << "Vector 1 size " << vector1.size() << endl;
    cout << "Vector 1 contains " << vector1.at(1) << endl;
    cout << "Vector 1 size " << vector2.size() << endl;
    
    //Add 100 and 200 to vector2 dynamically
    //Display elements in vector2 and size
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Vector 2 now contains " << vector2.at(0) << endl;
    cout << "Vector 2 now contains " << vector2.at(1) << endl;

    cout << "Vector 2 size " << vector2.size() << endl;
    
    //Part 2
    //Declare empty 2D vector called vector2D
    
    vector <vector<int>> vector2D {};
    //Add vector1 to vector 2 dynamically 
    //Add vector2 to vector2D dynamically
    //vector2.push_back(vector1.at(0));
    //This adds vector1 to end of vector 2
    
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);
    
    //Display elements in vector2D 
    cout << vector2D.at(0).at(0);
    cout << " "<< vector2D.at(0).at(1) << endl;
    cout << vector2D.at(1).at(0);
    cout << " " << vector2D.at(1).at(1) << endl;

    cout << "Vector 2D size is: " << vector2D.size() << endl;
    //This size prints 1 for some reason
    
    //Change vector1.at(0) to 1000
    vector1.at(0) = 1000;
    
    cout << vector2D.at(0).at(0);
    cout << " "<< vector2D.at(0).at(1) << endl;
    cout << vector2D.at(1).at(0);
    cout << " " << vector2D.at(1).at(1) << endl;
    
    cout << "Vector 2D size is: " << vector2D.size() << endl;


    return 0;
}