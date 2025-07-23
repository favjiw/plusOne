#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> digits = {1, 2, 3, 4, 5};
    int result = 0;
    for(int digit:digits){
        result = result * 10 + digit;
    }

    result++;
    cout << "The number formed by the digits is: " << result << endl;
    cout << "The size of the vector is: " << digits.size() << endl;
    vector<int> resultDigits;
    while(result > 0){
        resultDigits.push_back(result % 10);
        result /= 10;
    }
    reverse(resultDigits.begin(), resultDigits.end());

    for(int resultDigit: resultDigits){
        cout << resultDigit << " ";
    }
    return 0;
}