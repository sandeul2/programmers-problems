#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> test1;
vector<int> test2;


double solution(vector<int> arr) {
    double answer = 0;
    for (int i = 0; i < arr.size(); i++) {
        answer = answer + arr[i];
    }
    return answer / arr.size();
}

int main(void) {

    test1 = { 1,2,3,4 };
    test2 = { 5,5 };


    cout << solution(test1) << endl;
    cout << solution(test2) << endl;
}
