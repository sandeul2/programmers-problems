#include <string>
#include <cmath>
#include <iostream>


using namespace std;

int test1;
int test2;


long long solution(long long n) {
    long long answer = 0;
    long long x = sqrt(n);
    if (x * x == n)
        answer = (x + 1) * (x + 1);
    else
        answer = -1;
    return answer;
}


int main(void) {

    test1 = 121;
    test2 = 3;


    cout << solution(test1) << endl;
    cout << solution(test2) << endl;
    return 0;
}
