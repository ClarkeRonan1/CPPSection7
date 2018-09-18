#include <iostream>
#include <vector>
using namespace std;
int main()
{
    /*2D vector
     * Vector of vectors!
     * */
     //A vector that contains a vector of integers
    vector <vector<int>> movieRatings
    {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };
    
    //You can use array syntax
    //row is first reviewer
    cout << "\nHere are the movie ratings from person #2" << endl;
    cout << movieRatings.at(1).at(0) << endl;
    cout << movieRatings.at(1).at(1) << endl;
    cout << movieRatings.at(1).at(2) << endl;
    cout << movieRatings.at(1).at(3) << endl;
    return 0;
}