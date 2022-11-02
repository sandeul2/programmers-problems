#include <string>
#include <iostream>

using namespace std;

string test1;
string test2;

bool solution(string s)
{
    bool answer = true; int p = 0; int y = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' || s[i] == 'P') {
            p++;
        }
        else if (s[i] == 'y' || s[i] == 'Y') {
            y++;
        }
    }
    if (p != y) {
        answer = false;
    }
    return answer;
}

int main(void) {

    test1 = "pPoooyY";
    test2 = "Pyy";


    cout << solution(test1) << endl;
    cout << solution(test2) << endl;
    return 0;
}