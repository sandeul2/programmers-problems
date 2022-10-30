#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int test1;
int test2;


int solution(int n) {
    int answer = 0; int a;
    while (n > 0) {
        a = n % 10;
        answer = answer + a;
        n = n / 10;
    }

    return answer;
}


int main(void) {

    test1 = 123;
    test2 = 987;


    cout << solution(test1) << endl;
    cout << solution(test2) << endl;
    return 0;
}
