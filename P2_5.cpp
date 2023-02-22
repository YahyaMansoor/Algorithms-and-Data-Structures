#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {

    // initialize random seed:
    srand(time(NULL));

    vector<int> lottery_numbers;
    int number;

    // Draw six different random numbers and add them to the vector
    for(int i; lottery_numbers.size()<6 ;i++){
        number = rand() % 49 + 1;
        lottery_numbers.push_back(number);
    }

    // Put numbers in ascending order
    sort(lottery_numbers.begin(),lottery_numbers.end());

    // Print out the drawn numbers
    cout << "The drawn lottery numbers are: ";
    for (auto it = lottery_numbers.begin(); it != lottery_numbers.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}