#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = ""; 
    int temp = myString.rfind(pat);
    answer = myString.substr(0, temp+pat.size());
    return answer;
}