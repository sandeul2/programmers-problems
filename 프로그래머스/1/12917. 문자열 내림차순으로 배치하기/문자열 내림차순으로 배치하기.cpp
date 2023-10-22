#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.rbegin(),s.rend());
    answer = s;
    return answer;
}