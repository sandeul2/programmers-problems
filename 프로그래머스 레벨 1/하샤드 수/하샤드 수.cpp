#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int test1; int test2;
int test3; int test4;


bool solution(int x) {
    bool answer = true;
    int has_Temp = x; int has_Sum = 0;
    while (has_Temp > 0)
    {
        has_Sum += has_Temp % 10;
        has_Temp /= 10;
    }

    return x % has_Sum == 0 ? true : false;
}

int main(void) {

    test1 = 10;
    test2 = 12;
    test3 = 11;
    test4 = 13;

    cout << solution(test1) << endl;
    cout << solution(test2) << endl;
    cout << solution(test3) << endl;
    cout << solution(test4) << endl;
}
