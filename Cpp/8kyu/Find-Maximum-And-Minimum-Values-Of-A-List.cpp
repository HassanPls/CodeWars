/* Your task is to make two functions ( max and min, or maximum and minimum, etc., depending on the language ) that receive a list of integers as input, and return the largest and lowest number in that list, respectively. Each function returns one number. */

// eu poderia ter usado min_element max_element

#include <vector>
using namespace std;

int min(vector<int> list){
    int lowest = list[0];

    for (auto n : list)
    {
        lowest = min(lowest, n);
    }
    
    return lowest;
}

int max(vector<int> list){
    int greatest = list[0];

    for (auto n : list)
    {
        greatest = max(greatest, n);
    }

    return greatest;
}