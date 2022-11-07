#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int test1;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++) {
        sort(s.rbegin(), s.rend());
    }

    return stoll(s);
}

int main(void) {

    test1 = 118372;
    cout << solution(test1) << endl;
    return 0;
}
