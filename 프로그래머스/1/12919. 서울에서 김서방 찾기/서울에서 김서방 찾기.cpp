#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    for(int i=0; i<seoul.size(); i++) {
        if(seoul[i] == "Kim") {
            string temp = to_string(i);
            answer = answer + "김서방은 " + temp +"에 있다";
        }
    }
    return answer;
}