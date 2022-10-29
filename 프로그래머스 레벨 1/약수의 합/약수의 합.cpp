#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int test1;
int test2;



int solution(int n) {
    if (n >= 0 && n <= 3000) {
        int answer = 0; int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                sum = sum + i;
        }
        return sum;
    }
}


int main(void) {

    test1 = 12;
    test2 = 5;


    cout << solution(test1) << endl;
    cout << solution(test2) << endl;
    return 0;
}
