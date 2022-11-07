#include <iostream>
#include <string>
#include <vector>

using namespace std;

int test1; int test2;

int solution(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 1) {
            return i;
        }
    }
}

int main(void) {

    test1 = 10; test2 = 12;
    cout << solution(test1) << endl;
    cout << solution(test2) << endl;
    return 0;
}
