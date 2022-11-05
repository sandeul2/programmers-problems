#include <iostream>
#include <string>
#include <vector>

using namespace std;

int x; int n;

vector<long long> solution(int x, int n) {
    vector<long long> answer; int array = 0;
    for (int i = 1; i <= n; i++) {
        array = i * x;
        answer.push_back(array);
    }
    return answer;
}


int main(void) {

    x = 2;
    n = 5;

    vector <long long> arr = solution(x, n);


    for (int j = 0; j < arr.size(); j++) {
        cout << arr[j];
    }
    return 0;
}
