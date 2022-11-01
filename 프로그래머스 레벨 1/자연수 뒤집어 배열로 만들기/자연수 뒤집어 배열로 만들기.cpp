#include <string>
#include <vector>
#include <iostream>

using namespace std;
int test1;

vector<int> solution(long long n) {
    vector<int> answer;
    int temp;
    while (n) {
        temp = n % 10;
        n /= 10;
        answer.push_back(temp);
    }
    return answer;
}

int main(void) {

    test1 = 12345;
    cout << solution(test1) << endl;
    return 0;
}

