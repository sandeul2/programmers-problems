#include <iostream>
#include <string>
#include <vector>

using namespace std;

string test1; string test2;

int solution(string s) {
    int answer = stoi(s);
    return answer;
}

int main(void) {

    test1 = "1234";
    test2 = "-1234";
    

    cout << solution(test1) << endl;
    cout << solution(test2) << endl;
    return 0;
}
